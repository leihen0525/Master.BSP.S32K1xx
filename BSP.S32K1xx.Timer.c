/*
 * BSP.S32K1xx.Timer.c
 *
 *  Created on: 2019��10��11��
 *      Author: Master.HE
 */
#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.Timer.h"



int BSP_S32K1xx_Timer_Init(void)
{
	PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(6);    // LPIT0ʱ�� Clock Src = 6 (SPLL2_DIV2_CLK=160MHZ/4 = 40MHZ)
	PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK; //ʹ��LPIT0ʱ��

	LPIT0->MCR_BIT.M_CEN=1;

	LPIT0->MIER_BIT.TIE0=1;

	LPIT0->TMR[0].TVAL=40000;



	return Error_OK;
}


int BSP_S32K1xx_Timer_GET_Flag(void)
{
	if(LPIT0->MSR_BIT.TIF0==1)
	{

		LPIT0->MSR=LPIT_MSR_TIF0_MASK;


		return Error_OK;
	}
	return Error_Dissatisfy;
}

int BSP_S32K1xx_Timer_Enable(void)
{
	//��ʼ��ʱ
	LPIT0->TMR[0].TCTRL_BIT.T_EN=1;

	return Error_OK;
}
int BSP_S32K1xx_Timer_Disable(void)
{
	//ֹͣ��ʱ
	LPIT0->TMR[0].TCTRL_BIT.T_EN=0;

	return Error_OK;
}

