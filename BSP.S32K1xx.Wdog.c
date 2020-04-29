/*
 * BSP.S32K1xx.Wdog.c
 *
 *  Created on: 2019年10月11日
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

	WDOG->CNT=0xD928C520; 	 //解锁看门狗
	WDOG->TOVAL=0x0000FFFF;	 //把时间配置为最大
	WDOG->CS = 0x00002100;   //关闭看门狗

	return Error_OK;
}
int BSP_S32K1xx_Wdog_Clear(void)
{
	return Error_OK;
}
