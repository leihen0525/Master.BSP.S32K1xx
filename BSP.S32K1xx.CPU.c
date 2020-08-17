/*
 * BSP.S32K1xx.CPU.c
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */
#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.CPU.h"

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
void SOSC_init_8MHz(void);
void SPLL_init_160MHz(void);
void NormalRUNmode_80MHz (void);
#endif

int BSP_S32K1xx_CPU_Init(void)
{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))

	SCG->FIRCDIV.DATA=SCG_FIRCDIV_FIRCDIV1(1)|SCG_FIRCDIV_FIRCDIV2(1);


/*
	// Frequency division for SOSCDIV1_CLK, SOSCDIV2_CLK
	SCG->SOSCDIV.DATA=SCG_SOSCDIV_SOSCDIV1(1) // SOSCDIV1=1 : Divide by 1
				| SCG_SOSCDIV_SOSCDIV2(1);   // SOSCDIV2=1 : Divide by 1

	SCG->SOSCCFG.DATA=SCG_SOSCCFG_RANGE(3) // RANGE=3: 8-40 MHz SOSC
				| SCG_SOSCCFG_HGO(1)    // HGO=0: Configure crystal oscillator for high-gain operation
				| SCG_SOSCCFG_EREFS(1); // EREFS=1： Internal crystal oscillator of OSC selected

	while(SCG->SOSCCSR.DATA & SCG_SOSCCSR_LK_MASK); // Ensure SOSCCSR unlocked
	SCG->SOSCCSR.DATA = SCG_SOSCCSR_SOSCEN(1);      // SOSC Enable
*/
/*
	// 配置system clock源, DIVCORE, DIVBUS, DIVFLASH
	SCG->RCCR = SCG_RCCR_SCS(1)// Select System Clock Source: System PLL (SPLL_CLK)
			| SCG_RCCR_DIVCORE(0)
			| SCG_RCCR_DIVBUS(0)
			| SCG_RCCR_DIVSLOW(1);

	// 检查Clock Status(SCG_CSR) 是否为RCCR配置
	while(1 != (SCG->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT) { }
*/


#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	SOSC_init_8MHz();
	SPLL_init_160MHz();
	NormalRUNmode_80MHz();

#endif
	return Error_OK;
}
#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
void SOSC_init_8MHz(void)
{
	SCG->SOSCDIV=0x00000101;  //SOSCDIV1 & SOSCDIV2 =1:  分频/1
	SCG->SOSCCFG=0x00000024;  //Range=2: 选择晶体振荡器的中频范围 (SOSC 1MHz-8MHz)
							  // HGO=0:   控制晶体振荡器的工作功率模式 --低功率模式
							  // EREFS=1: 外部参考选择OSC内部晶体振荡器
	while(SCG->SOSCCSR & SCG_SOSCCSR_LK_MASK); //等待SOSCCSR解锁 寄存器解锁后才可写入
	SCG->SOSCCSR=0x00000001;  // LK=0:  SOSCCSR可以写
							  // SOSCCM=0: 系统OSC时钟监视器被禁用
							  // SOSCEN=1: 启用系统OSC
	while(!(SCG->SOSCCSR & SCG_SOSCCSR_SOSCVLD_MASK)); //等待系统OSC成功启用，输出时钟有效
}


void SPLL_init_160MHz(void)
{
	while(SCG->SPLLCSR & SCG_SPLLCSR_LK_MASK); //等待SPLLCSR寄存器解锁  寄存器解锁后才可写入
	SCG->SPLLCSR = 0x00000000;  // LK=0: SPLLCSR可以写入
								// SPLLEN=0: SPLL禁用
	SCG->SPLLDIV = 0x00000302;  // SPLLDIV1 分频/2; SPLLDIV2 分频/4
	SCG->SPLLCFG = 0x00180000;  // PREDIV=0: 锁相环参考时钟分频因子
								// MULT=24:  SPLL时钟频率的乘法因子
								// SPLL_CLK = 8MHz / 1 * 40 / 2 = 160 MHz    SPLL_CLK = (VCO_CLK)/2  VCO_CLK = SPLL_SOURCE/(PREDIV+1)*(MULT+16)
	while(SCG->SPLLCSR & SCG_SPLLCSR_LK_MASK); //等待SPLLCSR寄存器解锁  寄存器解锁后才可写入
	SCG->SPLLCSR = 0x00000001;  // LK=0: SPLLCSR可以写入
								// SPLLCM=0: SPLL时钟监视器被禁用
								// SPLLEN=1: 开启SPLL
	while(!(SCG->SPLLCSR & SCG_SPLLCSR_SPLLVLD_MASK)); //等待SPLL成功启用，输出时钟有效
}

void NormalRUNmode_80MHz (void)
{
	SCG->RCCR=SCG_RCCR_SCS(6)   // SPLL做为系统时钟源
	|SCG_RCCR_DIVCORE(1)     // DIVCORE=1, 分频/2: Core clock = 160/2 MHz = 80 MHz
	|SCG_RCCR_DIVBUS(3)      // DIVBUS=3, 分频/4: bus clock = 160/4 MHz = 40 MHz
	|SCG_RCCR_DIVSLOW(7);   // DIVSLOW=7, 分频/8: SCG slow, flash clock= 160/8 MHz = 20MHZ
	while (((SCG->CSR & SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT ) != 6) {}//等待系统时钟源成功选择SPLL
}
#endif


