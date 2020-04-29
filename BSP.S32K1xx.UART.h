/*
 * BSP.S32K1xx.UART.h
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */

#ifndef BSP_S32K1XX_UART_H_
#define BSP_S32K1XX_UART_H_

int BSP_S32K1xx_UART_Init(void);

int BSP_S32K1xx_UART_Set_BaudRate(int BaudRate);

int BSP_S32K1xx_UART_Tx_DATA(unsigned char DATA);

int BSP_S32K1xx_UART_Rx_DATA(unsigned char *DATA);

int BSP_S32K1xx_UART_Get_Flag(void);

#endif /* BSP_S32K1XX_UART_H_ */
