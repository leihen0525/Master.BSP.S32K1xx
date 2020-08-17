/*
 * S32K1xx.Clock.h
 *
 *  Created on: 2020年7月9日
 *      Author: Master.HE
 */

#ifndef S32K1XX_CLOCK_H_
#define S32K1XX_CLOCK_H_

#include "S32K1xx.Type.h"

typedef struct
{
	uint32_t LPO_Hz;
	uint32_t SOSC_Hz;
	uint32_t SIRC_Hz;
	uint32_t FIRC_Hz;
}S32K1xx_Clock_Source_Type;

typedef struct
{
	uint32_t PREDIV_SYS_CLK_Hz;
	uint32_t CORE_CLK_Hz;
	uint32_t SYS_CLK_Hz;
	uint32_t BUS_CLK_Hz;
	uint32_t FLASH_CLK_Hz;

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	uint32_t SPLL_CLK_Hz;
	uint32_t SPLLDIV1_CLK_Hz;
	uint32_t SPLLDIV2_CLK_Hz;
#endif

	uint32_t FIRC_CLK_Hz;
	uint32_t FIRCDIV1_CLK_Hz;
	uint32_t FIRCDIV2_CLK_Hz;

	uint32_t SIRC_CLK_Hz;
	uint32_t SIRCDIV1_CLK_Hz;
	uint32_t SIRCDIV2_CLK_Hz;

	uint32_t SOSC_CLK_Hz;
	uint32_t SOSCDIV1_CLK_Hz;
	uint32_t SOSCDIV2_CLK_Hz;

	uint32_t LPO_CLK_Hz;
	uint32_t RTC_CLK_Hz;

}S32K1xx_Clock_Tree_Type;

#endif /* S32K1XX_CLOCK_H_ */
