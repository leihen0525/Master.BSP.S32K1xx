/*
 * BSP.S32K1xx.Wdog.c
 *
 *  Created on: 2019��10��11��
 *      Author: Master.HE
 */
#include "Error.h"
#include "S32K1xx.h"

#include "BSP.S32K1xx.Wdog.h"

int BSP_S32K1xx_Wdog_Enable(void)
{
	return Error_OK;
}
int BSP_S32K1xx_Wdog_Disable(void)
{

	WDOG->CNT=0xD928C520; 	 //�������Ź�
	WDOG->TOVAL=0x0000FFFF;	 //��ʱ������Ϊ���
	WDOG->CS = 0x00002100;   //�رտ��Ź�

	return Error_OK;
}
int BSP_S32K1xx_Wdog_Clear(void)
{
	return Error_OK;
}
