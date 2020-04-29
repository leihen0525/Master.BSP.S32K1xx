/*
 * BSP.S32K1xx.Main.c
 *
 *  Created on: 2019Äê10ÔÂ11ÈÕ
 *      Author: Master.HE
 */
#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.Main.h"

#include "BSP.S32K1xx.CPU.h"
#include "BSP.S32K1xx.Wdog.h"
#include "BSP.S32K1xx.Timer.h"
#include "BSP.S32K1xx.IRQ.h"
#include "BSP.S32K1xx.UART.h"


#include "Machine\Machine.h"

int BSP_S32K1xx_Main_Init(void)
{
	return Error_OK;
}





MACHINE_START(S32K1xx,"S32K1xx")

	.Info="MCU:S32K1xx Module:BSP Version:0.0.1 "__DATE__" "__TIME__,

	.Init=BSP_S32K1xx_Main_Init,

	.Wdog=
	{
		.Enable=BSP_S32K1xx_Wdog_Enable,
		.Disable=BSP_S32K1xx_Wdog_Disable,
		.Clear=BSP_S32K1xx_Wdog_Clear,
	},
	.Timer=
	{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
		.IRQ_Index=LPIT0_IRQn,
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
		.IRQ_Index=LPIT0_Ch0_IRQn,
#endif
		.Init=BSP_S32K1xx_Timer_Init,
		.GET_Flag=BSP_S32K1xx_Timer_GET_Flag,
		.Enable=BSP_S32K1xx_Timer_Enable,
		.Disable=BSP_S32K1xx_Timer_Disable,
	},
	.IRQ=
	{
		.IRQ_Max_Index=IRQn_End,
		.Init=BSP_S32K1xx_IRQ_Init,
		.Enable=BSP_S32K1xx_IRQ_Enable,
		.Disable=BSP_S32K1xx_IRQ_Disable,
		.Set_Priority=BSP_S32K1xx_IRQ_Set_Priority,
		.All_Enable=BSP_S32K1xx_IRQ_All_Enable,
		.All_Disable=BSP_S32K1xx_IRQ_All_Disable,
		.Get_IRQ_Index=BSP_S32K1xx_IRQ_Get_IRQ_Index,
		.Clear_IRQ_Flag=BSP_S32K1xx_IRQ_Clear_IRQ_Flag,
	},
	.UART=
	{
		.IRQ_Index=LPUART0_RxTx_IRQn,
		.BaudRate=115200,
		.Init=BSP_S32K1xx_UART_Init,
		.Set_BaudRate=BSP_S32K1xx_UART_Set_BaudRate,
		.Tx_DATA=BSP_S32K1xx_UART_Tx_DATA,
		.Rx_DATA=BSP_S32K1xx_UART_Rx_DATA,
		.Get_Flag=BSP_S32K1xx_UART_Get_Flag,
	},
	.CPU=
	{
		.Init=BSP_S32K1xx_CPU_Init,
	},

MACHINE_END
