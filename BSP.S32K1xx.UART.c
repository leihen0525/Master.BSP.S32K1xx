/*
 * BSP.S32K1xx.UART.c
 *
 *  Created on: 2019Äê10ÔÂ11ÈÕ
 *      Author: Master.HE
 */
#include "Error.h"
#include "Master.Stdint.h"
#include "S32K1xx.h"
#include "Machine/Machine.Enum.h"
#include "BSP.S32K1xx.UART.h"

int BSP_S32K1xx_UART_Init(void)
{



	return Error_OK;
}

int BSP_S32K1xx_UART_Set_BaudRate(int BaudRate)
{


	return Error_OK;
}

int BSP_S32K1xx_UART_Tx_DATA(unsigned char DATA)
{

	{

		return Error_OK;
	}
	//return Error_Busy;

}

int BSP_S32K1xx_UART_Rx_DATA(unsigned char *DATA)
{
	if(DATA==Null)
	{
		return Error_Invalid_Parameter;
	}

	{
		*DATA;
		return Error_OK;
	}
	//else
	{
		return Error_Operation_Failed;
	}

}

int BSP_S32K1xx_UART_Get_Flag(void)
{
//	int SR=USART1->SR;
//
//	int Flag=Machine_Desc_UART_Flag_Null;
//
//	if((SR&USART_SR_TXE)!=0)
//	{
//		Flag=Flag | Machine_Desc_UART_Flag_Tx_Empty;
//	}
//	if((SR&USART_SR_TC)!=0)
//	{
//		Flag=Flag | Machine_Desc_UART_Flag_Tx_Complete;
//
//		USART1->SR=~USART_SR_TC;
//	}
//	if((SR&USART_SR_RXNE)!=0)
//	{
//		Flag=Flag | Machine_Desc_UART_Flag_Rx;
//	}

	//return Flag;
}

