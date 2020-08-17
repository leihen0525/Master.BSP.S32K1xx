/*
 * BSP.S32K1xx.Timer.c
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */
#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.Timer.h"



int BSP_S32K1xx_Timer_Init(void)
{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(3);    // LPIT0时钟
	PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK; //使能LPIT0时钟

	LPIT0->MCR_BIT.M_CEN=1;

	LPIT0->MIER_BIT.TIE0=1;

	LPIT0->TMR[0].TVAL=48000;
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	PCC->PCCn[PCC_LPIT_INDEX] = PCC_PCCn_PCS(6);    // LPIT0时钟 Clock Src = 6 (SPLL2_DIV2_CLK=160MHZ/4 = 40MHZ)
	PCC->PCCn[PCC_LPIT_INDEX] |= PCC_PCCn_CGC_MASK; //使能LPIT0时钟

	LPIT0->MCR_BIT.M_CEN=1;

	LPIT0->MIER_BIT.TIE0=1;

	LPIT0->TMR[0].TVAL=40000;
#endif


	return Error_OK;
}


int BSP_S32K1xx_Timer_GET_Flag(void)
{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	if(LPIT0->MSR_BIT.TIF0==1)
	{

		LPIT0->MSR=LPIT_MSR_TIF0_MASK;


		return Error_OK;
	}
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	if(LPIT0->MSR_BIT.TIF0==1)
	{

		LPIT0->MSR=LPIT_MSR_TIF0_MASK;


		return Error_OK;
	}
#endif
	return Error_Dissatisfy;
}

int BSP_S32K1xx_Timer_Enable(void)
{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	//开始计时
	LPIT0->TMR[0].TCTRL_BIT.T_EN=1;
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	//开始计时
	LPIT0->TMR[0].TCTRL_BIT.T_EN=1;
#endif
	return Error_OK;
}
int BSP_S32K1xx_Timer_Disable(void)
{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	//停止计时
	LPIT0->TMR[0].TCTRL_BIT.T_EN=0;
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	//停止计时
	LPIT0->TMR[0].TCTRL_BIT.T_EN=0;
#endif
	return Error_OK;
}

