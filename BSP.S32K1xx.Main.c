/*
 * BSP.S32K1xx.Main.c
 *
 *  Created on: 2019年10月11日
 *      Author: Master.HE
 */
#include "Master.Stdint.h"

#include "Error.h"

#include "S32K1xx.h"

#include "BSP.S32K1xx.Main.h"

#include "BSP.S32K1xx.CPU.h"
#include "BSP.S32K1xx.Wdog.h"
#include "BSP.S32K1xx.Timer.h"
#include "BSP.S32K1xx.IRQ.h"
#include "BSP.S32K1xx.UART.h"


#include "Machine\Machine.h"

const S32K1xx_Clock_Source_Type S32K1xx_Clock_Source=
{
	.LPO_Hz=128000,					//128K
	.SOSC_Hz=8000000,				//8M
	.SIRC_Hz=8000000,				//8M
	.FIRC_Hz=48000000,				//48M
};
S32K1xx_Clock_Tree_Type S32K1xx_Clock_Tree=
{
	.PREDIV_SYS_CLK_Hz=0,

	.CORE_CLK_Hz=0,
	.SYS_CLK_Hz=0,
	.BUS_CLK_Hz=0,
	.FLASH_CLK_Hz=0,

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	.SPLL_CLK_Hz=0,
	.SPLLDIV1_CLK_Hz=0,
	.SPLLDIV2_CLK_Hz=0,
#endif

	.FIRC_CLK_Hz=0,
	.FIRCDIV1_CLK_Hz=0,
	.FIRCDIV2_CLK_Hz=0,

	.SIRC_CLK_Hz=0,
	.SIRCDIV1_CLK_Hz=0,
	.SIRCDIV2_CLK_Hz=0,

	.SOSC_CLK_Hz=0,
	.SOSCDIV1_CLK_Hz=0,
	.SOSCDIV2_CLK_Hz=0,

	.LPO_CLK_Hz=0,
	.RTC_CLK_Hz=0,

};

int BSP_S32K1xx_UpData_Clock_Tree(void)
{
	//根据时钟源和寄存器配置 更新时钟树信息

	//SOSC
	if(SCG->PARAM.BIT.SOSC==true)
	{
		if(SCG->SOSCCSR.BIT.SOSCEN==true)
		{
			if(SCG->SOSCDIV.BIT.SOSCDIV1==0)
			{
				S32K1xx_Clock_Tree.SOSCDIV1_CLK_Hz=0;
			}
			else
			{
				S32K1xx_Clock_Tree.SOSCDIV1_CLK_Hz=S32K1xx_Clock_Source.SOSC_Hz>>(SCG->SOSCDIV.BIT.SOSCDIV1-1);
			}

			if(SCG->SOSCDIV.BIT.SOSCDIV2==0)
			{
				S32K1xx_Clock_Tree.SOSCDIV2_CLK_Hz=0;
			}
			else
			{
				S32K1xx_Clock_Tree.SOSCDIV2_CLK_Hz=S32K1xx_Clock_Source.SOSC_Hz>>(SCG->SOSCDIV.BIT.SOSCDIV2-1);
			}
			S32K1xx_Clock_Tree.SOSC_CLK_Hz=S32K1xx_Clock_Source.SOSC_Hz;
		}
		else
		{
			S32K1xx_Clock_Tree.SOSC_CLK_Hz=0;
			S32K1xx_Clock_Tree.SOSCDIV1_CLK_Hz=0;
			S32K1xx_Clock_Tree.SOSCDIV2_CLK_Hz=0;
		}
	}
	else
	{
		S32K1xx_Clock_Tree.SOSC_CLK_Hz=0;
		S32K1xx_Clock_Tree.SOSCDIV1_CLK_Hz=0;
		S32K1xx_Clock_Tree.SOSCDIV2_CLK_Hz=0;
	}

	//SIRC
	if(SCG->PARAM.BIT.SIRC==true)
	{
		if(SCG->SIRCCSR.BIT.SIRCEN==true)
		{
			if(SCG->SIRCDIV.BIT.SIRCDIV1==0)
			{
				S32K1xx_Clock_Tree.SIRCDIV1_CLK_Hz=0;
			}
			else
			{
				S32K1xx_Clock_Tree.SIRCDIV1_CLK_Hz=S32K1xx_Clock_Source.SIRC_Hz>>(SCG->SIRCDIV.BIT.SIRCDIV1-1);
			}

			if(SCG->SIRCDIV.BIT.SIRCDIV2==0)
			{
				S32K1xx_Clock_Tree.SIRCDIV2_CLK_Hz=0;
			}
			else
			{
				S32K1xx_Clock_Tree.SIRCDIV2_CLK_Hz=S32K1xx_Clock_Source.SIRC_Hz>>(SCG->SIRCDIV.BIT.SIRCDIV2-1);
			}
			S32K1xx_Clock_Tree.SIRC_CLK_Hz=S32K1xx_Clock_Source.SIRC_Hz;
		}
		else
		{
			S32K1xx_Clock_Tree.SIRC_CLK_Hz=0;
			S32K1xx_Clock_Tree.SIRCDIV1_CLK_Hz=0;
			S32K1xx_Clock_Tree.SIRCDIV2_CLK_Hz=0;
		}
	}
	else
	{
		S32K1xx_Clock_Tree.SIRC_CLK_Hz=0;
		S32K1xx_Clock_Tree.SIRCDIV1_CLK_Hz=0;
		S32K1xx_Clock_Tree.SIRCDIV2_CLK_Hz=0;
	}

	//FIRC
	if(SCG->PARAM.BIT.FIRC==true)
	{
		if(SCG->FIRCCSR.BIT.FIRCEN==true)
		{
			if(SCG->FIRCDIV.BIT.FIRCDIV1==0)
			{
				S32K1xx_Clock_Tree.FIRCDIV1_CLK_Hz=0;
			}
			else
			{
				S32K1xx_Clock_Tree.FIRCDIV1_CLK_Hz=S32K1xx_Clock_Source.FIRC_Hz>>(SCG->FIRCDIV.BIT.FIRCDIV1-1);
			}

			if(SCG->FIRCDIV.BIT.FIRCDIV2==0)
			{
				S32K1xx_Clock_Tree.FIRCDIV2_CLK_Hz=0;
			}
			else
			{
				S32K1xx_Clock_Tree.FIRCDIV2_CLK_Hz=S32K1xx_Clock_Source.FIRC_Hz>>(SCG->FIRCDIV.BIT.FIRCDIV2-1);
			}
			S32K1xx_Clock_Tree.FIRC_CLK_Hz=S32K1xx_Clock_Source.FIRC_Hz;
		}
		else
		{
			S32K1xx_Clock_Tree.FIRC_CLK_Hz=0;
			S32K1xx_Clock_Tree.FIRCDIV1_CLK_Hz=0;
			S32K1xx_Clock_Tree.FIRCDIV2_CLK_Hz=0;
		}
	}
	else
	{
		S32K1xx_Clock_Tree.FIRC_CLK_Hz=0;
		S32K1xx_Clock_Tree.FIRCDIV1_CLK_Hz=0;
		S32K1xx_Clock_Tree.FIRCDIV2_CLK_Hz=0;
	}

	//TODO
	//
	uint32_t System_Clock_Hz=0;
	switch (SCG->CSR.BIT.SCS)
	{
		case 1://SOSC_CLK
		{
			System_Clock_Hz=S32K1xx_Clock_Tree.SOSC_CLK_Hz;
		}break;
		case 2://SIRC_CLK
		{
			System_Clock_Hz=S32K1xx_Clock_Tree.SIRC_CLK_Hz;
		}break;
		case 3://FIRC_CLK
		{
			System_Clock_Hz=S32K1xx_Clock_Tree.FIRC_CLK_Hz;
		}break;
#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
		case 6:
		{
			System_Clock_Hz=S32K1xx_Clock_Tree.SPLL_CLK_Hz;
		}break;
#endif
		default:
		{
			System_Clock_Hz=0;
		}break;
	}

	S32K1xx_Clock_Tree.PREDIV_SYS_CLK_Hz=System_Clock_Hz;
	S32K1xx_Clock_Tree.CORE_CLK_Hz=System_Clock_Hz/(SCG->CSR.BIT.DIVCORE+1);
	S32K1xx_Clock_Tree.SYS_CLK_Hz=S32K1xx_Clock_Tree.CORE_CLK_Hz;
	S32K1xx_Clock_Tree.BUS_CLK_Hz=S32K1xx_Clock_Tree.CORE_CLK_Hz/(SCG->CSR.BIT.DIVBUS+1);
	S32K1xx_Clock_Tree.FLASH_CLK_Hz=S32K1xx_Clock_Tree.CORE_CLK_Hz/(SCG->CSR.BIT.DIVSLOW+1);

	return Error_OK;
}

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

		.Clock_Source=&S32K1xx_Clock_Source,
		.Clock_Tree=&S32K1xx_Clock_Tree,

		.UpData_Clock_Tree=BSP_S32K1xx_UpData_Clock_Tree,
	},

MACHINE_END
