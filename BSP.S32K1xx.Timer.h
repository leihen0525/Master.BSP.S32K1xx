/*
 * BSP.S32K1xx.Timer.h
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */

#ifndef BSP_S32K1XX_TIMER_H_
#define BSP_S32K1XX_TIMER_H_

int BSP_S32K1xx_Timer_Init(void);

int BSP_S32K1xx_Timer_GET_Flag(void);

int BSP_S32K1xx_Timer_Enable(void);
int BSP_S32K1xx_Timer_Disable(void);

#endif /* BSP_S32K1XX_TIMER_H_ */
