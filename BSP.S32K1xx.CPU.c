/*
 * BSP.S32K1xx.CPU.c
 *
 *  Created on: 2019��10��11��
 *      Author: Master.HE
 */
#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.CPU.h"

void SOSC_init_8MHz(void);
void SPLL_init_160MHz(void);
void NormalRUNmode_80MHz (void);


int BSP_S32K1xx_CPU_Init(void)
{
	SOSC_init_8MHz();
	SPLL_init_160MHz();
	NormalRUNmode_80MHz();

	return Error_OK;
}

void SOSC_init_8MHz(void)
{
	SCG->SOSCDIV=0x00000101;  //SOSCDIV1 & SOSCDIV2 =1:  ��Ƶ/1
	SCG->SOSCCFG=0x00000024;  //Range=2: ѡ������������Ƶ��Χ (SOSC 1MHz-8MHz)
							  // HGO=0:   ���ƾ��������Ĺ�������ģʽ --�͹���ģʽ
							  // EREFS=1: �ⲿ�ο�ѡ��OSC�ڲ���������
	while(SCG->SOSCCSR & SCG_SOSCCSR_LK_MASK); //�ȴ�SOSCCSR���� �Ĵ���������ſ�д��
	SCG->SOSCCSR=0x00000001;  // LK=0:  SOSCCSR����д
							  // SOSCCM=0: ϵͳOSCʱ�Ӽ�����������
							  // SOSCEN=1: ����ϵͳOSC
	while(!(SCG->SOSCCSR & SCG_SOSCCSR_SOSCVLD_MASK)); //�ȴ�ϵͳOSC�ɹ����ã����ʱ����Ч
}


void SPLL_init_160MHz(void)
{
	while(SCG->SPLLCSR & SCG_SPLLCSR_LK_MASK); //�ȴ�SPLLCSR�Ĵ�������  �Ĵ���������ſ�д��
	SCG->SPLLCSR = 0x00000000;  // LK=0: SPLLCSR����д��
								// SPLLEN=0: SPLL����
	SCG->SPLLDIV = 0x00000302;  // SPLLDIV1 ��Ƶ/2; SPLLDIV2 ��Ƶ/4
	SCG->SPLLCFG = 0x00180000;  // PREDIV=0: ���໷�ο�ʱ�ӷ�Ƶ����
								// MULT=24:  SPLLʱ��Ƶ�ʵĳ˷�����
								// SPLL_CLK = 8MHz / 1 * 40 / 2 = 160 MHz    SPLL_CLK = (VCO_CLK)/2  VCO_CLK = SPLL_SOURCE/(PREDIV+1)*(MULT+16)
	while(SCG->SPLLCSR & SCG_SPLLCSR_LK_MASK); //�ȴ�SPLLCSR�Ĵ�������  �Ĵ���������ſ�д��
	SCG->SPLLCSR = 0x00000001;  // LK=0: SPLLCSR����д��
								// SPLLCM=0: SPLLʱ�Ӽ�����������
								// SPLLEN=1: ����SPLL
	while(!(SCG->SPLLCSR & SCG_SPLLCSR_SPLLVLD_MASK)); //�ȴ�SPLL�ɹ����ã����ʱ����Ч
}

void NormalRUNmode_80MHz (void)
{
	SCG->RCCR=SCG_RCCR_SCS(6)   // SPLL��Ϊϵͳʱ��Դ
	|SCG_RCCR_DIVCORE(1)     // DIVCORE=1, ��Ƶ/2: Core clock = 160/2 MHz = 80 MHz
	|SCG_RCCR_DIVBUS(3)      // DIVBUS=3, ��Ƶ/4: bus clock = 160/4 MHz = 40 MHz
	|SCG_RCCR_DIVSLOW(7);   // DIVSLOW=7, ��Ƶ/8: SCG slow, flash clock= 160/8 MHz = 20MHZ
	while (((SCG->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT ) != 6) {}//�ȴ�ϵͳʱ��Դ�ɹ�ѡ��SPLL
}
