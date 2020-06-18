/*
 * BSP.S32K1xx.IRQ.c
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */
#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.IRQ.h"

#ifdef __ICCARM__
#include <intrinsics.h> // IAR intrinsic functions (e.g. __enable_interrupt())
#endif

int BSP_S32K1xx_IRQ_Init(void)
{
	return Error_OK;
}

int BSP_S32K1xx_IRQ_Enable(int IRQ_Index)
{
#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

	if ((int32_t)(IRQ_Index) >= 0)
	{
		S32_NVIC->ISER[(((uint32_t)IRQ_Index) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQ_Index) & 0x1FUL));

		return Error_OK;
	}
	return Error_Invalid_Parameter;
#else

#error "No valid Target Core defined!"

#endif
}
int BSP_S32K1xx_IRQ_Disable(int IRQ_Index)
{
#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

	if ((int32_t)(IRQ_Index) >= 0)
	{
		S32_NVIC->ICER[(((uint32_t)IRQ_Index) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQ_Index) & 0x1FUL));
		__DSB();
		__ISB();

		return Error_OK;
	}
	return Error_Invalid_Parameter;
#else

#error "No valid Target Core defined!"

#endif
}
int BSP_S32K1xx_IRQ_Set_Priority(int IRQ_Index,int Priority)
{
#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

	if ((int32_t)(IRQ_Index) >= 0)
	{
		S32_NVIC->IP[((uint32_t)IRQ_Index)]               = (uint8_t)((Priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
	}
	else
	{
		S32_SCB->SHP[(((uint32_t)IRQ_Index) & 0xFUL)-4UL] = (uint8_t)((Priority << (8U - __NVIC_PRIO_BITS)) & (uint32_t)0xFFUL);
	}

	return Error_OK;

#else

#error "No valid Target Core defined!"

#endif
}

int BSP_S32K1xx_IRQ_All_Enable(void)
{
	asm(" CPSIE i");
	return Error_OK;
}
int BSP_S32K1xx_IRQ_All_Disable(void)
{
	asm(" CPSID i");
	return Error_OK;
}
int BSP_S32K1xx_IRQ_Get_IRQ_Index(void)
{
	int IRQ_Index=0;

	asm("mrs %0,ipsr"
				: "+r"(IRQ_Index)
					);
	IRQ_Index=(IRQ_Index&0xFF)-16;

	return IRQ_Index;
}
int BSP_S32K1xx_IRQ_Clear_IRQ_Flag(int IRQ_Index)
{
	return Error_OK;
}
