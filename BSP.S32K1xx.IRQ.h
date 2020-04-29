/*
 * BSP.S32K1xx.IRQ.h
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */

#ifndef BSP_S32K1XX_IRQ_H_
#define BSP_S32K1XX_IRQ_H_

int BSP_S32K1xx_IRQ_Init(void);

int BSP_S32K1xx_IRQ_Enable(int IRQ_Index);
int BSP_S32K1xx_IRQ_Disable(int IRQ_Index);
int BSP_S32K1xx_IRQ_Set_Priority(int IRQ_Index,int Priority);

int BSP_S32K1xx_IRQ_All_Enable(void);
int BSP_S32K1xx_IRQ_All_Disable(void);

int BSP_S32K1xx_IRQ_Get_IRQ_Index(void);
int BSP_S32K1xx_IRQ_Clear_IRQ_Flag(int IRQ_Index);

#endif /* BSP_S32K1XX_IRQ_H_ */
