/*
 * S32K1xx.FTM.h
 *
 *  Created on: 2020年7月20日
 *      Author: Master.HE
 */

#ifndef S32K1XX_FTM_H_
#define S32K1XX_FTM_H_

#include "S32K1xx.Type.h"


typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PS								:3;
		__IO uint32_t CLKS								:2;
		__IO uint32_t CPWMS								:1;
		__IO uint32_t RIE								:1;
		__IO uint32_t RF								:1;

		__IO uint32_t TOIE								:1;
		__IO uint32_t TOF								:1;
		__IO uint32_t									:6;

		__IO uint32_t PWMENn							:8;

		__IO uint32_t FLTPS								:4;
		__IO uint32_t									:4;
	}BIT;
}FTM_SC_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t COUNT								:16;
		__IO uint32_t									:16;
	}BIT;
}FTM_CNT_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t MOD								:16;
		__IO uint32_t									:16;
	}BIT;
}FTM_MOD_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DMA								:1;
		__IO uint32_t ICRST								:1;
		__IO uint32_t ELSB_ELSA							:2;
		//__IO uint32_t ELSA							:1;
		//__IO uint32_t ELSB							:1;
		__IO uint32_t MSB_MSA							:2;
		//__IO uint32_t MSA								:1;
		//__IO uint32_t MSB								:1;
		__IO uint32_t CHIE								:1;
		__IO uint32_t CHF								:1;

		__IO uint32_t TRIGMODE							:1;
		__IO uint32_t CHIS								:1;
		__IO uint32_t CHOV								:1;
		__IO uint32_t									:21;
	}BIT;
}FTM_CnSC_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t VAL								:16;
		__IO uint32_t									:16;
	}BIT;
}FTM_CnV_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t INIT								:16;
		__IO uint32_t									:16;
	}BIT;
}FTM_CNTIN_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CHnF								:8;
		__IO uint32_t									:24;
	}BIT;
}FTM_STATUS_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FTMEN								:1;
		__IO uint32_t INIT								:1;
		__IO uint32_t WPDIS								:1;
		__IO uint32_t PWMSYNC							:1;
		__IO uint32_t CAPTEST							:1;
		__IO uint32_t FAULTM							:2;
		__IO uint32_t FAULTIE							:1;

		__IO uint32_t									:24;
	}BIT;
}FTM_MODE_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CNTMIN							:1;
		__IO uint32_t CNTMAX							:1;
		__IO uint32_t REINIT							:1;
		__IO uint32_t SYNCHOM							:1;
		__IO uint32_t TRIG0								:1;
		__IO uint32_t TRIG1								:1;
		__IO uint32_t TRIG2								:1;
		__IO uint32_t SWSYNC							:1;

		__IO uint32_t									:24;
	}BIT;
}FTM_SYNC_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CHnOI								:8;
		__IO uint32_t									:24;
	}BIT;
}FTM_OUTINIT_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CHnOM								:8;
		__IO uint32_t									:24;
	}BIT;
}FTM_OUTMASK_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint8_t COMBINE							:1;
		__IO uint8_t COMP								:1;
		__IO uint8_t DECAPEN							:1;
		__IO uint8_t DECAP								:1;
		__IO uint8_t DTEN								:1;
		__IO uint8_t SYNCEN								:1;
		__IO uint8_t FAULTEN							:1;
		__IO uint8_t MCOMBINE							:1;
	}BIT[4];
}FTM_COMBINE_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DTVAL								:6;
		__IO uint32_t DTPS								:2;

		__IO uint32_t									:8;

		__IO uint32_t DTVALEX							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:8;
	}BIT;
}FTM_DEADTIME_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CH2TRIG							:1;
		__IO uint32_t CH3TRIG							:1;
		__IO uint32_t CH4TRIG							:1;
		__IO uint32_t CH5TRIG							:1;
		__IO uint32_t CH0TRIG							:1;
		__IO uint32_t CH1TRIG							:1;
		__IO uint32_t INITTRIGEN						:1;
		__IO uint32_t TRIGF								:1;

		__IO uint32_t CH6TRIG							:1;
		__IO uint32_t CH7TRIG							:1;
		__IO uint32_t									:6;

		__IO uint32_t									:16;
	}BIT;
}FTM_EXTTRIG_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t POLn								:8;
		__IO uint32_t									:24;
	}BIT;
}FTM_POL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FAULTF0							:1;
		__IO uint32_t FAULTF1							:1;
		__IO uint32_t FAULTF2							:1;
		__IO uint32_t FAULTF3							:1;
		__IO uint32_t									:1;
		__IO uint32_t FAULTIN							:1;
		__IO uint32_t WPEN								:1;
		__IO uint32_t FAULTF							:1;

		__IO uint32_t									:24;
	}BIT;
}FTM_FMS_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CH0FVAL							:4;
		__IO uint32_t CH1FVAL							:4;
		__IO uint32_t CH2FVAL							:4;
		__IO uint32_t CH3FVAL							:4;

		__IO uint32_t									:16;
	}BIT;
}FTM_FILTER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FAULT0EN							:1;
		__IO uint32_t FAULT1EN							:1;
		__IO uint32_t FAULT2EN							:1;
		__IO uint32_t FAULT3EN							:1;
		__IO uint32_t FFLTR0EN							:1;
		__IO uint32_t FFLTR1EN							:1;
		__IO uint32_t FFLTR2EN							:1;
		__IO uint32_t FFLTR3EN							:1;

		__IO uint32_t FFVAL								:4;
		__IO uint32_t									:3;
		__IO uint32_t FSTATE							:1;

		__IO uint32_t									:16;
	}BIT;
}FTM_FLTCTRL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t QUADEN							:1;
		__IO uint32_t TOFDIR							:1;
		__IO uint32_t QUADIR							:1;
		__IO uint32_t QUADMODE							:1;
		__IO uint32_t PHBPOL							:1;
		__IO uint32_t PHAPOL							:1;
		__IO uint32_t PHBFLTREN							:1;
		__IO uint32_t PHAFLTREN							:1;

		__IO uint32_t									:24;
	}BIT;
}FTM_QDCTRL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t LDFQ								:5;
		__IO uint32_t									:1;
		__IO uint32_t BDMMODE							:2;

		__IO uint32_t									:1;
		__IO uint32_t GTBEEN							:1;
		__IO uint32_t GTBEOUT							:1;
		__IO uint32_t ITRIGR							:1;
		__IO uint32_t									:4;

		__IO uint32_t									:16;
	}BIT;
}FTM_CONF_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FLTnPOL							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:24;
	}BIT;
}FTM_FLTPOL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t HWTRIGMODE						:1;
		__IO uint32_t									:1;
		__IO uint32_t CNTINC							:1;
		__IO uint32_t									:1;
		__IO uint32_t INVC								:1;
		__IO uint32_t SWOC								:1;
		__IO uint32_t									:1;
		__IO uint32_t SYNCMODE							:1;

		__IO uint32_t SWRSTCNT							:1;
		__IO uint32_t SWWRBUF							:1;
		__IO uint32_t SWOM								:1;
		__IO uint32_t SWINVC							:1;
		__IO uint32_t SWSOC								:1;
		__IO uint32_t									:3;

		__IO uint32_t HWRSTCNT							:1;
		__IO uint32_t HWWRBUF							:1;
		__IO uint32_t HWOM								:1;
		__IO uint32_t HWINVC							:1;
		__IO uint32_t HWSOC								:1;
		__IO uint32_t									:3;

		__IO uint32_t									:8;
	}BIT;
}FTM_SYNCONF_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t INVnEN							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:24;
	}BIT;
}FTM_INVCTRL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CHnOC								:8;
		__IO uint32_t CHnOCV							:8;
		__IO uint32_t									:16;
	}BIT;
}FTM_SWOCTRL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CHnSEL							:8;

		__IO uint32_t HCSEL								:1;
		__IO uint32_t LDOK								:1;
		__IO uint32_t GLEN								:1;
		__IO uint32_t GLDOK								:1;
		__IO uint32_t									:4;

		__IO uint32_t									:16;
	}BIT;
}FTM_PWMLOAD_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t HCVAL								:16;
		__IO uint32_t									:16;
	}BIT;
}FTM_HCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DTVAL								:6;
		__IO uint32_t DTPS								:2;

		__IO uint32_t									:8;

		__IO uint32_t DTVALEX							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:8;
	}BIT;
}FTM_PAIR0DEADTIME_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DTVAL								:6;
		__IO uint32_t DTPS								:2;

		__IO uint32_t									:8;

		__IO uint32_t DTVALEX							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:8;
	}BIT;
}FTM_PAIR1DEADTIME_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DTVAL								:6;
		__IO uint32_t DTPS								:2;

		__IO uint32_t									:8;

		__IO uint32_t DTVALEX							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:8;
	}BIT;
}FTM_PAIR2DEADTIME_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DTVAL								:6;
		__IO uint32_t DTPS								:2;

		__IO uint32_t									:8;

		__IO uint32_t DTVALEX							:4;
		__IO uint32_t									:4;

		__IO uint32_t									:8;
	}BIT;
}FTM_PAIR3DEADTIME_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t									:8;

		__IO uint32_t									:3;
		__IO uint32_t FRACMOD							:5;

		__IO uint32_t MOD								:16;
	}BIT;
}FTM_MOD_MIRROR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t									:8;

		__IO uint32_t									:3;
		__IO uint32_t FRACVAL							:5;

		__IO uint32_t VAL								:16;
	}BIT;
}FTM_CV_MIRROR_Type;
/* ----------------------------------------------------------------------------
   -- FTM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FTM_Peripheral_Access_Layer FTM Peripheral Access Layer
 * @{
 */


/** FTM - Size of Registers Arrays */
#define FTM_CONTROLS_COUNT                       8u

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define FTM_CV_MIRROR_COUNT                      8u
#endif

/** FTM - Register Layout Typedef */
typedef struct {
	FTM_SC_Type SC;                                /**< Status And Control, offset: 0x0 */
	FTM_CNT_Type CNT;                               /**< Counter, offset: 0x4 */
	FTM_MOD_Type MOD;                               /**< Modulo, offset: 0x8 */
	struct {                                         /* offset: 0xC, array step: 0x8 */
		FTM_CnSC_Type CnSC;                              /**< Channel (n) Status And Control, array offset: 0xC, array step: 0x8 */
		FTM_CnV_Type CnV;                               /**< Channel (n) Value, array offset: 0x10, array step: 0x8 */
	} CONTROLS[FTM_CONTROLS_COUNT];
	FTM_CNTIN_Type CNTIN;                             /**< Counter Initial Value, offset: 0x4C */
	FTM_STATUS_Type STATUS;                            /**< Capture And Compare Status, offset: 0x50 */
	FTM_MODE_Type MODE;                              /**< Features Mode Selection, offset: 0x54 */
	FTM_SYNC_Type SYNC;                              /**< Synchronization, offset: 0x58 */
	FTM_OUTINIT_Type OUTINIT;                           /**< Initial State For Channels Output, offset: 0x5C */
	FTM_OUTMASK_Type OUTMASK;                           /**< Output Mask, offset: 0x60 */
	FTM_COMBINE_Type COMBINE;                           /**< Function For Linked Channels, offset: 0x64 */
	FTM_DEADTIME_Type DEADTIME;                          /**< Deadtime Configuration, offset: 0x68 */
	FTM_EXTTRIG_Type EXTTRIG;                           /**< FTM External Trigger, offset: 0x6C */
	FTM_POL_Type POL;                               /**< Channels Polarity, offset: 0x70 */
	FTM_FMS_Type FMS;                               /**< Fault Mode Status, offset: 0x74 */
	FTM_FILTER_Type FILTER;                            /**< Input Capture Filter Control, offset: 0x78 */
	FTM_FLTCTRL_Type FLTCTRL;                           /**< Fault Control, offset: 0x7C */
	FTM_QDCTRL_Type QDCTRL;                            /**< Quadrature Decoder Control And Status, offset: 0x80 */
	FTM_CONF_Type CONF;                              /**< Configuration, offset: 0x84 */
	FTM_FLTPOL_Type FLTPOL;                            /**< FTM Fault Input Polarity, offset: 0x88 */
	FTM_SYNCONF_Type SYNCONF;                           /**< Synchronization Configuration, offset: 0x8C */
	FTM_INVCTRL_Type INVCTRL;                           /**< FTM Inverting Control, offset: 0x90 */
	FTM_SWOCTRL_Type SWOCTRL;                           /**< FTM Software Output Control, offset: 0x94 */
	FTM_PWMLOAD_Type PWMLOAD;                           /**< FTM PWM Load, offset: 0x98 */
	FTM_HCR_Type HCR;                               /**< Half Cycle Register, offset: 0x9C */
	FTM_PAIR0DEADTIME_Type PAIR0DEADTIME;                     /**< Pair 0 Deadtime Configuration, offset: 0xA0 */
	uint8_t RESERVED_0[4];
	FTM_PAIR1DEADTIME_Type PAIR1DEADTIME;                     /**< Pair 1 Deadtime Configuration, offset: 0xA8 */
	uint8_t RESERVED_1[4];
	FTM_PAIR2DEADTIME_Type PAIR2DEADTIME;                     /**< Pair 2 Deadtime Configuration, offset: 0xB0 */
	uint8_t RESERVED_2[4];
	FTM_PAIR3DEADTIME_Type PAIR3DEADTIME;                     /**< Pair 3 Deadtime Configuration, offset: 0xB8 */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	uint8_t RESERVED_3[324];
	FTM_MOD_MIRROR_Type MOD_MIRROR;                        /**< Mirror of Modulo Value, offset: 0x200 */
	FTM_CV_MIRROR_Type CV_MIRROR[FTM_CV_MIRROR_COUNT];    /**< Mirror of Channel (n) Match Value, array offset: 0x204, array step: 0x4 */
#endif
} FTM_Type, *FTM_MemMapPtr;

 /** Number of instances of the FTM module. */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define FTM_INSTANCE_COUNT                       (2u)
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__))
#define FTM_INSTANCE_COUNT                       (4u)
#elif (defined (__Target_S32K146__))
#define FTM_INSTANCE_COUNT                       (6u)
#elif (defined (__Target_S32K148__))
#define FTM_INSTANCE_COUNT                       (8u)
#endif

/* FTM - Peripheral instance base addresses */
/** Peripheral FTM0 base address */
#define FTM0_BASE                                (0x40038000u)
/** Peripheral FTM0 base pointer */
#define FTM0                                     ((FTM_Type *)FTM0_BASE)
/** Peripheral FTM1 base address */
#define FTM1_BASE                                (0x40039000u)
/** Peripheral FTM1 base pointer */
#define FTM1                                     ((FTM_Type *)FTM1_BASE)

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
/** Array initializer of FTM peripheral base addresses */
#define FTM_BASE_ADDRS                           { FTM0_BASE, FTM1_BASE }
/** Array initializer of FTM peripheral base pointers */
#define FTM_BASE_PTRS                            { FTM0, FTM1 }
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Peripheral FTM2 base address */
#define FTM2_BASE                                (0x4003A000u)
/** Peripheral FTM2 base pointer */
#define FTM2                                     ((FTM_Type *)FTM2_BASE)
/** Peripheral FTM3 base address */
#define FTM3_BASE                                (0x40026000u)
/** Peripheral FTM3 base pointer */
#define FTM3                                     ((FTM_Type *)FTM3_BASE)

#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Peripheral FTM4 base address */
#define FTM4_BASE                                (0x4006E000u)
/** Peripheral FTM4 base pointer */
#define FTM4                                     ((FTM_Type *)FTM4_BASE)
/** Peripheral FTM5 base address */
#define FTM5_BASE                                (0x4006F000u)
/** Peripheral FTM5 base pointer */
#define FTM5                                     ((FTM_Type *)FTM5_BASE)
#endif

#if (defined (__Target_S32K148__))
/** Peripheral FTM6 base address */
#define FTM6_BASE                                (0x40070000u)
/** Peripheral FTM6 base pointer */
#define FTM6                                     ((FTM_Type *)FTM6_BASE)
/** Peripheral FTM7 base address */
#define FTM7_BASE                                (0x40071000u)
/** Peripheral FTM7 base pointer */
#define FTM7                                     ((FTM_Type *)FTM7_BASE)
#endif

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__))
/** Array initializer of FTM peripheral base addresses */
#define FTM_BASE_ADDRS                           { FTM0_BASE, FTM1_BASE, FTM2_BASE, FTM3_BASE }
/** Array initializer of FTM peripheral base pointers */
#define FTM_BASE_PTRS                            { FTM0, FTM1, FTM2, FTM3 }
#elif (defined (__Target_S32K146__)
/** Array initializer of FTM peripheral base addresses */
#define FTM_BASE_ADDRS                           { FTM0_BASE, FTM1_BASE, FTM2_BASE, FTM3_BASE, FTM4_BASE, FTM5_BASE }
/** Array initializer of FTM peripheral base pointers */
#define FTM_BASE_PTRS                            { FTM0, FTM1, FTM2, FTM3, FTM4, FTM5 }
#elif (defined (__Target_S32K148__))
/** Array initializer of FTM peripheral base addresses */
#define FTM_BASE_ADDRS                           { FTM0_BASE, FTM1_BASE, FTM2_BASE, FTM3_BASE, FTM4_BASE, FTM5_BASE, FTM6_BASE, FTM7_BASE }
/** Array initializer of FTM peripheral base pointers */
#define FTM_BASE_PTRS                            { FTM0, FTM1, FTM2, FTM3, FTM4, FTM5, FTM6, FTM7 }
#endif
#endif
 /** Number of interrupt vector arrays for the FTM module. */
#define FTM_IRQS_ARR_COUNT                       (4u)
 /** Number of interrupt channels for the FTM module. */
#define FTM_IRQS_CH_COUNT                        (8u)
 /** Number of interrupt channels for the Fault type of FTM module. */
#define FTM_Fault_IRQS_CH_COUNT                  (1u)
 /** Number of interrupt channels for the Overflow type of FTM module. */
#define FTM_Overflow_IRQS_CH_COUNT               (1u)
 /** Number of interrupt channels for the Reload type of FTM module. */
#define FTM_Reload_IRQS_CH_COUNT                 (1u)

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
/** Interrupt vectors for the FTM peripheral type */
#define FTM_IRQS                                 { { FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn, FTM0_Ch0_7_IRQn }, \
                                                   { FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn, FTM1_Ch0_7_IRQn } }
#define FTM_Fault_IRQS                           { FTM0_Fault_IRQn, FTM1_Fault_IRQn }
#define FTM_Overflow_IRQS                        { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn }
#define FTM_Reload_IRQS                          { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn }
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__))
/** Interrupt vectors for the FTM peripheral type */
#define FTM_IRQS                                 { { FTM0_Ch0_Ch1_IRQn, FTM0_Ch0_Ch1_IRQn, FTM0_Ch2_Ch3_IRQn, FTM0_Ch2_Ch3_IRQn, FTM0_Ch4_Ch5_IRQn, FTM0_Ch4_Ch5_IRQn, FTM0_Ch6_Ch7_IRQn, FTM0_Ch6_Ch7_IRQn }, \
                                                   { FTM1_Ch0_Ch1_IRQn, FTM1_Ch0_Ch1_IRQn, FTM1_Ch2_Ch3_IRQn, FTM1_Ch2_Ch3_IRQn, FTM1_Ch4_Ch5_IRQn, FTM1_Ch4_Ch5_IRQn, FTM1_Ch6_Ch7_IRQn, FTM1_Ch6_Ch7_IRQn }, \
                                                   { FTM2_Ch0_Ch1_IRQn, FTM2_Ch0_Ch1_IRQn, FTM2_Ch2_Ch3_IRQn, FTM2_Ch2_Ch3_IRQn, FTM2_Ch4_Ch5_IRQn, FTM2_Ch4_Ch5_IRQn, FTM2_Ch6_Ch7_IRQn, FTM2_Ch6_Ch7_IRQn }, \
                                                   { FTM3_Ch0_Ch1_IRQn, FTM3_Ch0_Ch1_IRQn, FTM3_Ch2_Ch3_IRQn, FTM3_Ch2_Ch3_IRQn, FTM3_Ch4_Ch5_IRQn, FTM3_Ch4_Ch5_IRQn, FTM3_Ch6_Ch7_IRQn, FTM3_Ch6_Ch7_IRQn } }
#define FTM_Fault_IRQS                           { FTM0_Fault_IRQn, FTM1_Fault_IRQn, FTM2_Fault_IRQn, FTM3_Fault_IRQn }
#define FTM_Overflow_IRQS                        { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn, FTM2_Ovf_Reload_IRQn, FTM3_Ovf_Reload_IRQn }
#define FTM_Reload_IRQS                          { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn, FTM2_Ovf_Reload_IRQn, FTM3_Ovf_Reload_IRQn }
#elif (defined (__Target_S32K146__)
/** Interrupt vectors for the FTM peripheral type */
#define FTM_IRQS                                 { { FTM0_Ch0_Ch1_IRQn, FTM0_Ch0_Ch1_IRQn, FTM0_Ch2_Ch3_IRQn, FTM0_Ch2_Ch3_IRQn, FTM0_Ch4_Ch5_IRQn, FTM0_Ch4_Ch5_IRQn, FTM0_Ch6_Ch7_IRQn, FTM0_Ch6_Ch7_IRQn }, \
                                                   { FTM1_Ch0_Ch1_IRQn, FTM1_Ch0_Ch1_IRQn, FTM1_Ch2_Ch3_IRQn, FTM1_Ch2_Ch3_IRQn, FTM1_Ch4_Ch5_IRQn, FTM1_Ch4_Ch5_IRQn, FTM1_Ch6_Ch7_IRQn, FTM1_Ch6_Ch7_IRQn }, \
                                                   { FTM2_Ch0_Ch1_IRQn, FTM2_Ch0_Ch1_IRQn, FTM2_Ch2_Ch3_IRQn, FTM2_Ch2_Ch3_IRQn, FTM2_Ch4_Ch5_IRQn, FTM2_Ch4_Ch5_IRQn, FTM2_Ch6_Ch7_IRQn, FTM2_Ch6_Ch7_IRQn }, \
                                                   { FTM3_Ch0_Ch1_IRQn, FTM3_Ch0_Ch1_IRQn, FTM3_Ch2_Ch3_IRQn, FTM3_Ch2_Ch3_IRQn, FTM3_Ch4_Ch5_IRQn, FTM3_Ch4_Ch5_IRQn, FTM3_Ch6_Ch7_IRQn, FTM3_Ch6_Ch7_IRQn }, \
                                                   { FTM4_Ch0_Ch1_IRQn, FTM4_Ch0_Ch1_IRQn, FTM4_Ch2_Ch3_IRQn, FTM4_Ch2_Ch3_IRQn, FTM4_Ch4_Ch5_IRQn, FTM4_Ch4_Ch5_IRQn, FTM4_Ch6_Ch7_IRQn, FTM4_Ch6_Ch7_IRQn }, \
                                                   { FTM5_Ch0_Ch1_IRQn, FTM5_Ch0_Ch1_IRQn, FTM5_Ch2_Ch3_IRQn, FTM5_Ch2_Ch3_IRQn, FTM5_Ch4_Ch5_IRQn, FTM5_Ch4_Ch5_IRQn, FTM5_Ch6_Ch7_IRQn, FTM5_Ch6_Ch7_IRQn } }
#define FTM_Fault_IRQS                           { FTM0_Fault_IRQn, FTM1_Fault_IRQn, FTM2_Fault_IRQn, FTM3_Fault_IRQn, FTM4_Fault_IRQn, FTM5_Fault_IRQn }
#define FTM_Overflow_IRQS                        { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn, FTM2_Ovf_Reload_IRQn, FTM3_Ovf_Reload_IRQn, FTM4_Ovf_Reload_IRQn, FTM5_Ovf_Reload_IRQn }
#define FTM_Reload_IRQS                          { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn, FTM2_Ovf_Reload_IRQn, FTM3_Ovf_Reload_IRQn, FTM4_Ovf_Reload_IRQn, FTM5_Ovf_Reload_IRQn }
#elif (defined (__Target_S32K148__))
/** Interrupt vectors for the FTM peripheral type */
#define FTM_IRQS                                 { { FTM0_Ch0_Ch1_IRQn, FTM0_Ch0_Ch1_IRQn, FTM0_Ch2_Ch3_IRQn, FTM0_Ch2_Ch3_IRQn, FTM0_Ch4_Ch5_IRQn, FTM0_Ch4_Ch5_IRQn, FTM0_Ch6_Ch7_IRQn, FTM0_Ch6_Ch7_IRQn }, \
                                                   { FTM1_Ch0_Ch1_IRQn, FTM1_Ch0_Ch1_IRQn, FTM1_Ch2_Ch3_IRQn, FTM1_Ch2_Ch3_IRQn, FTM1_Ch4_Ch5_IRQn, FTM1_Ch4_Ch5_IRQn, FTM1_Ch6_Ch7_IRQn, FTM1_Ch6_Ch7_IRQn }, \
                                                   { FTM2_Ch0_Ch1_IRQn, FTM2_Ch0_Ch1_IRQn, FTM2_Ch2_Ch3_IRQn, FTM2_Ch2_Ch3_IRQn, FTM2_Ch4_Ch5_IRQn, FTM2_Ch4_Ch5_IRQn, FTM2_Ch6_Ch7_IRQn, FTM2_Ch6_Ch7_IRQn }, \
                                                   { FTM3_Ch0_Ch1_IRQn, FTM3_Ch0_Ch1_IRQn, FTM3_Ch2_Ch3_IRQn, FTM3_Ch2_Ch3_IRQn, FTM3_Ch4_Ch5_IRQn, FTM3_Ch4_Ch5_IRQn, FTM3_Ch6_Ch7_IRQn, FTM3_Ch6_Ch7_IRQn }, \
                                                   { FTM4_Ch0_Ch1_IRQn, FTM4_Ch0_Ch1_IRQn, FTM4_Ch2_Ch3_IRQn, FTM4_Ch2_Ch3_IRQn, FTM4_Ch4_Ch5_IRQn, FTM4_Ch4_Ch5_IRQn, FTM4_Ch6_Ch7_IRQn, FTM4_Ch6_Ch7_IRQn }, \
                                                   { FTM5_Ch0_Ch1_IRQn, FTM5_Ch0_Ch1_IRQn, FTM5_Ch2_Ch3_IRQn, FTM5_Ch2_Ch3_IRQn, FTM5_Ch4_Ch5_IRQn, FTM5_Ch4_Ch5_IRQn, FTM5_Ch6_Ch7_IRQn, FTM5_Ch6_Ch7_IRQn }, \
                                                   { FTM6_Ch0_Ch1_IRQn, FTM6_Ch0_Ch1_IRQn, FTM6_Ch2_Ch3_IRQn, FTM6_Ch2_Ch3_IRQn, FTM6_Ch4_Ch5_IRQn, FTM6_Ch4_Ch5_IRQn, FTM6_Ch6_Ch7_IRQn, FTM6_Ch6_Ch7_IRQn }, \
                                                   { FTM7_Ch0_Ch1_IRQn, FTM7_Ch0_Ch1_IRQn, FTM7_Ch2_Ch3_IRQn, FTM7_Ch2_Ch3_IRQn, FTM7_Ch4_Ch5_IRQn, FTM7_Ch4_Ch5_IRQn, FTM7_Ch6_Ch7_IRQn, FTM7_Ch6_Ch7_IRQn } }
#define FTM_Fault_IRQS                           { FTM0_Fault_IRQn, FTM1_Fault_IRQn, FTM2_Fault_IRQn, FTM3_Fault_IRQn, FTM4_Fault_IRQn, FTM5_Fault_IRQn, FTM6_Fault_IRQn, FTM7_Fault_IRQn }
#define FTM_Overflow_IRQS                        { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn, FTM2_Ovf_Reload_IRQn, FTM3_Ovf_Reload_IRQn, FTM4_Ovf_Reload_IRQn, FTM5_Ovf_Reload_IRQn, FTM6_Ovf_Reload_IRQn, FTM7_Ovf_Reload_IRQn }
#define FTM_Reload_IRQS                          { FTM0_Ovf_Reload_IRQn, FTM1_Ovf_Reload_IRQn, FTM2_Ovf_Reload_IRQn, FTM3_Ovf_Reload_IRQn, FTM4_Ovf_Reload_IRQn, FTM5_Ovf_Reload_IRQn, FTM6_Ovf_Reload_IRQn, FTM7_Ovf_Reload_IRQn }
#endif
/* ----------------------------------------------------------------------------
   -- FTM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FTM_Register_Masks FTM Register Masks
 * @{
 */

/* SC Bit Fields */
#define FTM_SC_PS_MASK                           0x7u
#define FTM_SC_PS_SHIFT                          0u
#define FTM_SC_PS_WIDTH                          3u
#define FTM_SC_PS(x)                             (((uint32_t)(((uint32_t)(x))<<FTM_SC_PS_SHIFT))&FTM_SC_PS_MASK)
#define FTM_SC_CLKS_MASK                         0x18u
#define FTM_SC_CLKS_SHIFT                        3u
#define FTM_SC_CLKS_WIDTH                        2u
#define FTM_SC_CLKS(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_CLKS_SHIFT))&FTM_SC_CLKS_MASK)
#define FTM_SC_CPWMS_MASK                        0x20u
#define FTM_SC_CPWMS_SHIFT                       5u
#define FTM_SC_CPWMS_WIDTH                       1u
#define FTM_SC_CPWMS(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_SC_CPWMS_SHIFT))&FTM_SC_CPWMS_MASK)
#define FTM_SC_RIE_MASK                          0x40u
#define FTM_SC_RIE_SHIFT                         6u
#define FTM_SC_RIE_WIDTH                         1u
#define FTM_SC_RIE(x)                            (((uint32_t)(((uint32_t)(x))<<FTM_SC_RIE_SHIFT))&FTM_SC_RIE_MASK)
#define FTM_SC_RF_MASK                           0x80u
#define FTM_SC_RF_SHIFT                          7u
#define FTM_SC_RF_WIDTH                          1u
#define FTM_SC_RF(x)                             (((uint32_t)(((uint32_t)(x))<<FTM_SC_RF_SHIFT))&FTM_SC_RF_MASK)
#define FTM_SC_TOIE_MASK                         0x100u
#define FTM_SC_TOIE_SHIFT                        8u
#define FTM_SC_TOIE_WIDTH                        1u
#define FTM_SC_TOIE(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_TOIE_SHIFT))&FTM_SC_TOIE_MASK)
#define FTM_SC_TOF_MASK                          0x200u
#define FTM_SC_TOF_SHIFT                         9u
#define FTM_SC_TOF_WIDTH                         1u
#define FTM_SC_TOF(x)                            (((uint32_t)(((uint32_t)(x))<<FTM_SC_TOF_SHIFT))&FTM_SC_TOF_MASK)
#define FTM_SC_PWMEN0_MASK                       0x10000u
#define FTM_SC_PWMEN0_SHIFT                      16u
#define FTM_SC_PWMEN0_WIDTH                      1u
#define FTM_SC_PWMEN0(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN0_SHIFT))&FTM_SC_PWMEN0_MASK)
#define FTM_SC_PWMEN1_MASK                       0x20000u
#define FTM_SC_PWMEN1_SHIFT                      17u
#define FTM_SC_PWMEN1_WIDTH                      1u
#define FTM_SC_PWMEN1(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN1_SHIFT))&FTM_SC_PWMEN1_MASK)
#define FTM_SC_PWMEN2_MASK                       0x40000u
#define FTM_SC_PWMEN2_SHIFT                      18u
#define FTM_SC_PWMEN2_WIDTH                      1u
#define FTM_SC_PWMEN2(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN2_SHIFT))&FTM_SC_PWMEN2_MASK)
#define FTM_SC_PWMEN3_MASK                       0x80000u
#define FTM_SC_PWMEN3_SHIFT                      19u
#define FTM_SC_PWMEN3_WIDTH                      1u
#define FTM_SC_PWMEN3(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN3_SHIFT))&FTM_SC_PWMEN3_MASK)
#define FTM_SC_PWMEN4_MASK                       0x100000u
#define FTM_SC_PWMEN4_SHIFT                      20u
#define FTM_SC_PWMEN4_WIDTH                      1u
#define FTM_SC_PWMEN4(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN4_SHIFT))&FTM_SC_PWMEN4_MASK)
#define FTM_SC_PWMEN5_MASK                       0x200000u
#define FTM_SC_PWMEN5_SHIFT                      21u
#define FTM_SC_PWMEN5_WIDTH                      1u
#define FTM_SC_PWMEN5(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN5_SHIFT))&FTM_SC_PWMEN5_MASK)
#define FTM_SC_PWMEN6_MASK                       0x400000u
#define FTM_SC_PWMEN6_SHIFT                      22u
#define FTM_SC_PWMEN6_WIDTH                      1u
#define FTM_SC_PWMEN6(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN6_SHIFT))&FTM_SC_PWMEN6_MASK)
#define FTM_SC_PWMEN7_MASK                       0x800000u
#define FTM_SC_PWMEN7_SHIFT                      23u
#define FTM_SC_PWMEN7_WIDTH                      1u
#define FTM_SC_PWMEN7(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_SC_PWMEN7_SHIFT))&FTM_SC_PWMEN7_MASK)
#define FTM_SC_FLTPS_MASK                        0xF000000u
#define FTM_SC_FLTPS_SHIFT                       24u
#define FTM_SC_FLTPS_WIDTH                       4u
#define FTM_SC_FLTPS(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_SC_FLTPS_SHIFT))&FTM_SC_FLTPS_MASK)
/* CNT Bit Fields */
#define FTM_CNT_COUNT_MASK                       0xFFFFu
#define FTM_CNT_COUNT_SHIFT                      0u
#define FTM_CNT_COUNT_WIDTH                      16u
#define FTM_CNT_COUNT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CNT_COUNT_SHIFT))&FTM_CNT_COUNT_MASK)
/* MOD Bit Fields */
#define FTM_MOD_MOD_MASK                         0xFFFFu
#define FTM_MOD_MOD_SHIFT                        0u
#define FTM_MOD_MOD_WIDTH                        16u
#define FTM_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MOD_SHIFT))&FTM_MOD_MOD_MASK)
/* CnSC Bit Fields */
#define FTM_CnSC_DMA_MASK                        0x1u
#define FTM_CnSC_DMA_SHIFT                       0u
#define FTM_CnSC_DMA_WIDTH                       1u
#define FTM_CnSC_DMA(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_DMA_SHIFT))&FTM_CnSC_DMA_MASK)
#define FTM_CnSC_ICRST_MASK                      0x2u
#define FTM_CnSC_ICRST_SHIFT                     1u
#define FTM_CnSC_ICRST_WIDTH                     1u
#define FTM_CnSC_ICRST(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ICRST_SHIFT))&FTM_CnSC_ICRST_MASK)
#define FTM_CnSC_ELSA_MASK                       0x4u
#define FTM_CnSC_ELSA_SHIFT                      2u
#define FTM_CnSC_ELSA_WIDTH                      1u
#define FTM_CnSC_ELSA(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELSA_SHIFT))&FTM_CnSC_ELSA_MASK)
#define FTM_CnSC_ELSB_MASK                       0x8u
#define FTM_CnSC_ELSB_SHIFT                      3u
#define FTM_CnSC_ELSB_WIDTH                      1u
#define FTM_CnSC_ELSB(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELSB_SHIFT))&FTM_CnSC_ELSB_MASK)
#define FTM_CnSC_MSA_MASK                        0x10u
#define FTM_CnSC_MSA_SHIFT                       4u
#define FTM_CnSC_MSA_WIDTH                       1u
#define FTM_CnSC_MSA(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MSA_SHIFT))&FTM_CnSC_MSA_MASK)
#define FTM_CnSC_MSB_MASK                        0x20u
#define FTM_CnSC_MSB_SHIFT                       5u
#define FTM_CnSC_MSB_WIDTH                       1u
#define FTM_CnSC_MSB(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MSB_SHIFT))&FTM_CnSC_MSB_MASK)
#define FTM_CnSC_CHIE_MASK                       0x40u
#define FTM_CnSC_CHIE_SHIFT                      6u
#define FTM_CnSC_CHIE_WIDTH                      1u
#define FTM_CnSC_CHIE(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHIE_SHIFT))&FTM_CnSC_CHIE_MASK)
#define FTM_CnSC_CHF_MASK                        0x80u
#define FTM_CnSC_CHF_SHIFT                       7u
#define FTM_CnSC_CHF_WIDTH                       1u
#define FTM_CnSC_CHF(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHF_SHIFT))&FTM_CnSC_CHF_MASK)
#define FTM_CnSC_TRIGMODE_MASK                   0x100u
#define FTM_CnSC_TRIGMODE_SHIFT                  8u
#define FTM_CnSC_TRIGMODE_WIDTH                  1u
#define FTM_CnSC_TRIGMODE(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_TRIGMODE_SHIFT))&FTM_CnSC_TRIGMODE_MASK)
#define FTM_CnSC_CHIS_MASK                       0x200u
#define FTM_CnSC_CHIS_SHIFT                      9u
#define FTM_CnSC_CHIS_WIDTH                      1u
#define FTM_CnSC_CHIS(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHIS_SHIFT))&FTM_CnSC_CHIS_MASK)
#define FTM_CnSC_CHOV_MASK                       0x400u
#define FTM_CnSC_CHOV_SHIFT                      10u
#define FTM_CnSC_CHOV_WIDTH                      1u
#define FTM_CnSC_CHOV(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHOV_SHIFT))&FTM_CnSC_CHOV_MASK)
/* CnV Bit Fields */
#define FTM_CnV_VAL_MASK                         0xFFFFu
#define FTM_CnV_VAL_SHIFT                        0u
#define FTM_CnV_VAL_WIDTH                        16u
#define FTM_CnV_VAL(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_CnV_VAL_SHIFT))&FTM_CnV_VAL_MASK)
/* CNTIN Bit Fields */
#define FTM_CNTIN_INIT_MASK                      0xFFFFu
#define FTM_CNTIN_INIT_SHIFT                     0u
#define FTM_CNTIN_INIT_WIDTH                     16u
#define FTM_CNTIN_INIT(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_CNTIN_INIT_SHIFT))&FTM_CNTIN_INIT_MASK)
/* STATUS Bit Fields */
#define FTM_STATUS_CH0F_MASK                     0x1u
#define FTM_STATUS_CH0F_SHIFT                    0u
#define FTM_STATUS_CH0F_WIDTH                    1u
#define FTM_STATUS_CH0F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH0F_SHIFT))&FTM_STATUS_CH0F_MASK)
#define FTM_STATUS_CH1F_MASK                     0x2u
#define FTM_STATUS_CH1F_SHIFT                    1u
#define FTM_STATUS_CH1F_WIDTH                    1u
#define FTM_STATUS_CH1F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH1F_SHIFT))&FTM_STATUS_CH1F_MASK)
#define FTM_STATUS_CH2F_MASK                     0x4u
#define FTM_STATUS_CH2F_SHIFT                    2u
#define FTM_STATUS_CH2F_WIDTH                    1u
#define FTM_STATUS_CH2F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH2F_SHIFT))&FTM_STATUS_CH2F_MASK)
#define FTM_STATUS_CH3F_MASK                     0x8u
#define FTM_STATUS_CH3F_SHIFT                    3u
#define FTM_STATUS_CH3F_WIDTH                    1u
#define FTM_STATUS_CH3F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH3F_SHIFT))&FTM_STATUS_CH3F_MASK)
#define FTM_STATUS_CH4F_MASK                     0x10u
#define FTM_STATUS_CH4F_SHIFT                    4u
#define FTM_STATUS_CH4F_WIDTH                    1u
#define FTM_STATUS_CH4F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH4F_SHIFT))&FTM_STATUS_CH4F_MASK)
#define FTM_STATUS_CH5F_MASK                     0x20u
#define FTM_STATUS_CH5F_SHIFT                    5u
#define FTM_STATUS_CH5F_WIDTH                    1u
#define FTM_STATUS_CH5F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH5F_SHIFT))&FTM_STATUS_CH5F_MASK)
#define FTM_STATUS_CH6F_MASK                     0x40u
#define FTM_STATUS_CH6F_SHIFT                    6u
#define FTM_STATUS_CH6F_WIDTH                    1u
#define FTM_STATUS_CH6F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH6F_SHIFT))&FTM_STATUS_CH6F_MASK)
#define FTM_STATUS_CH7F_MASK                     0x80u
#define FTM_STATUS_CH7F_SHIFT                    7u
#define FTM_STATUS_CH7F_WIDTH                    1u
#define FTM_STATUS_CH7F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH7F_SHIFT))&FTM_STATUS_CH7F_MASK)
/* MODE Bit Fields */
#define FTM_MODE_FTMEN_MASK                      0x1u
#define FTM_MODE_FTMEN_SHIFT                     0u
#define FTM_MODE_FTMEN_WIDTH                     1u
#define FTM_MODE_FTMEN(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FTMEN_SHIFT))&FTM_MODE_FTMEN_MASK)
#define FTM_MODE_INIT_MASK                       0x2u
#define FTM_MODE_INIT_SHIFT                      1u
#define FTM_MODE_INIT_WIDTH                      1u
#define FTM_MODE_INIT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_MODE_INIT_SHIFT))&FTM_MODE_INIT_MASK)
#define FTM_MODE_WPDIS_MASK                      0x4u
#define FTM_MODE_WPDIS_SHIFT                     2u
#define FTM_MODE_WPDIS_WIDTH                     1u
#define FTM_MODE_WPDIS(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_MODE_WPDIS_SHIFT))&FTM_MODE_WPDIS_MASK)
#define FTM_MODE_PWMSYNC_MASK                    0x8u
#define FTM_MODE_PWMSYNC_SHIFT                   3u
#define FTM_MODE_PWMSYNC_WIDTH                   1u
#define FTM_MODE_PWMSYNC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_PWMSYNC_SHIFT))&FTM_MODE_PWMSYNC_MASK)
#define FTM_MODE_CAPTEST_MASK                    0x10u
#define FTM_MODE_CAPTEST_SHIFT                   4u
#define FTM_MODE_CAPTEST_WIDTH                   1u
#define FTM_MODE_CAPTEST(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_CAPTEST_SHIFT))&FTM_MODE_CAPTEST_MASK)
#define FTM_MODE_FAULTM_MASK                     0x60u
#define FTM_MODE_FAULTM_SHIFT                    5u
#define FTM_MODE_FAULTM_WIDTH                    2u
#define FTM_MODE_FAULTM(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTM_SHIFT))&FTM_MODE_FAULTM_MASK)
#define FTM_MODE_FAULTIE_MASK                    0x80u
#define FTM_MODE_FAULTIE_SHIFT                   7u
#define FTM_MODE_FAULTIE_WIDTH                   1u
#define FTM_MODE_FAULTIE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTIE_SHIFT))&FTM_MODE_FAULTIE_MASK)
/* SYNC Bit Fields */
#define FTM_SYNC_CNTMIN_MASK                     0x1u
#define FTM_SYNC_CNTMIN_SHIFT                    0u
#define FTM_SYNC_CNTMIN_WIDTH                    1u
#define FTM_SYNC_CNTMIN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_CNTMIN_SHIFT))&FTM_SYNC_CNTMIN_MASK)
#define FTM_SYNC_CNTMAX_MASK                     0x2u
#define FTM_SYNC_CNTMAX_SHIFT                    1u
#define FTM_SYNC_CNTMAX_WIDTH                    1u
#define FTM_SYNC_CNTMAX(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_CNTMAX_SHIFT))&FTM_SYNC_CNTMAX_MASK)
#define FTM_SYNC_REINIT_MASK                     0x4u
#define FTM_SYNC_REINIT_SHIFT                    2u
#define FTM_SYNC_REINIT_WIDTH                    1u
#define FTM_SYNC_REINIT(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_REINIT_SHIFT))&FTM_SYNC_REINIT_MASK)
#define FTM_SYNC_SYNCHOM_MASK                    0x8u
#define FTM_SYNC_SYNCHOM_SHIFT                   3u
#define FTM_SYNC_SYNCHOM_WIDTH                   1u
#define FTM_SYNC_SYNCHOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_SYNCHOM_SHIFT))&FTM_SYNC_SYNCHOM_MASK)
#define FTM_SYNC_TRIG0_MASK                      0x10u
#define FTM_SYNC_TRIG0_SHIFT                     4u
#define FTM_SYNC_TRIG0_WIDTH                     1u
#define FTM_SYNC_TRIG0(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG0_SHIFT))&FTM_SYNC_TRIG0_MASK)
#define FTM_SYNC_TRIG1_MASK                      0x20u
#define FTM_SYNC_TRIG1_SHIFT                     5u
#define FTM_SYNC_TRIG1_WIDTH                     1u
#define FTM_SYNC_TRIG1(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG1_SHIFT))&FTM_SYNC_TRIG1_MASK)
#define FTM_SYNC_TRIG2_MASK                      0x40u
#define FTM_SYNC_TRIG2_SHIFT                     6u
#define FTM_SYNC_TRIG2_WIDTH                     1u
#define FTM_SYNC_TRIG2(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG2_SHIFT))&FTM_SYNC_TRIG2_MASK)
#define FTM_SYNC_SWSYNC_MASK                     0x80u
#define FTM_SYNC_SWSYNC_SHIFT                    7u
#define FTM_SYNC_SWSYNC_WIDTH                    1u
#define FTM_SYNC_SWSYNC(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_SWSYNC_SHIFT))&FTM_SYNC_SWSYNC_MASK)
/* OUTINIT Bit Fields */
#define FTM_OUTINIT_CH0OI_MASK                   0x1u
#define FTM_OUTINIT_CH0OI_SHIFT                  0u
#define FTM_OUTINIT_CH0OI_WIDTH                  1u
#define FTM_OUTINIT_CH0OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH0OI_SHIFT))&FTM_OUTINIT_CH0OI_MASK)
#define FTM_OUTINIT_CH1OI_MASK                   0x2u
#define FTM_OUTINIT_CH1OI_SHIFT                  1u
#define FTM_OUTINIT_CH1OI_WIDTH                  1u
#define FTM_OUTINIT_CH1OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH1OI_SHIFT))&FTM_OUTINIT_CH1OI_MASK)
#define FTM_OUTINIT_CH2OI_MASK                   0x4u
#define FTM_OUTINIT_CH2OI_SHIFT                  2u
#define FTM_OUTINIT_CH2OI_WIDTH                  1u
#define FTM_OUTINIT_CH2OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH2OI_SHIFT))&FTM_OUTINIT_CH2OI_MASK)
#define FTM_OUTINIT_CH3OI_MASK                   0x8u
#define FTM_OUTINIT_CH3OI_SHIFT                  3u
#define FTM_OUTINIT_CH3OI_WIDTH                  1u
#define FTM_OUTINIT_CH3OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH3OI_SHIFT))&FTM_OUTINIT_CH3OI_MASK)
#define FTM_OUTINIT_CH4OI_MASK                   0x10u
#define FTM_OUTINIT_CH4OI_SHIFT                  4u
#define FTM_OUTINIT_CH4OI_WIDTH                  1u
#define FTM_OUTINIT_CH4OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH4OI_SHIFT))&FTM_OUTINIT_CH4OI_MASK)
#define FTM_OUTINIT_CH5OI_MASK                   0x20u
#define FTM_OUTINIT_CH5OI_SHIFT                  5u
#define FTM_OUTINIT_CH5OI_WIDTH                  1u
#define FTM_OUTINIT_CH5OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH5OI_SHIFT))&FTM_OUTINIT_CH5OI_MASK)
#define FTM_OUTINIT_CH6OI_MASK                   0x40u
#define FTM_OUTINIT_CH6OI_SHIFT                  6u
#define FTM_OUTINIT_CH6OI_WIDTH                  1u
#define FTM_OUTINIT_CH6OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH6OI_SHIFT))&FTM_OUTINIT_CH6OI_MASK)
#define FTM_OUTINIT_CH7OI_MASK                   0x80u
#define FTM_OUTINIT_CH7OI_SHIFT                  7u
#define FTM_OUTINIT_CH7OI_WIDTH                  1u
#define FTM_OUTINIT_CH7OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH7OI_SHIFT))&FTM_OUTINIT_CH7OI_MASK)
/* OUTMASK Bit Fields */
#define FTM_OUTMASK_CH0OM_MASK                   0x1u
#define FTM_OUTMASK_CH0OM_SHIFT                  0u
#define FTM_OUTMASK_CH0OM_WIDTH                  1u
#define FTM_OUTMASK_CH0OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH0OM_SHIFT))&FTM_OUTMASK_CH0OM_MASK)
#define FTM_OUTMASK_CH1OM_MASK                   0x2u
#define FTM_OUTMASK_CH1OM_SHIFT                  1u
#define FTM_OUTMASK_CH1OM_WIDTH                  1u
#define FTM_OUTMASK_CH1OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH1OM_SHIFT))&FTM_OUTMASK_CH1OM_MASK)
#define FTM_OUTMASK_CH2OM_MASK                   0x4u
#define FTM_OUTMASK_CH2OM_SHIFT                  2u
#define FTM_OUTMASK_CH2OM_WIDTH                  1u
#define FTM_OUTMASK_CH2OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH2OM_SHIFT))&FTM_OUTMASK_CH2OM_MASK)
#define FTM_OUTMASK_CH3OM_MASK                   0x8u
#define FTM_OUTMASK_CH3OM_SHIFT                  3u
#define FTM_OUTMASK_CH3OM_WIDTH                  1u
#define FTM_OUTMASK_CH3OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH3OM_SHIFT))&FTM_OUTMASK_CH3OM_MASK)
#define FTM_OUTMASK_CH4OM_MASK                   0x10u
#define FTM_OUTMASK_CH4OM_SHIFT                  4u
#define FTM_OUTMASK_CH4OM_WIDTH                  1u
#define FTM_OUTMASK_CH4OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH4OM_SHIFT))&FTM_OUTMASK_CH4OM_MASK)
#define FTM_OUTMASK_CH5OM_MASK                   0x20u
#define FTM_OUTMASK_CH5OM_SHIFT                  5u
#define FTM_OUTMASK_CH5OM_WIDTH                  1u
#define FTM_OUTMASK_CH5OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH5OM_SHIFT))&FTM_OUTMASK_CH5OM_MASK)
#define FTM_OUTMASK_CH6OM_MASK                   0x40u
#define FTM_OUTMASK_CH6OM_SHIFT                  6u
#define FTM_OUTMASK_CH6OM_WIDTH                  1u
#define FTM_OUTMASK_CH6OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH6OM_SHIFT))&FTM_OUTMASK_CH6OM_MASK)
#define FTM_OUTMASK_CH7OM_MASK                   0x80u
#define FTM_OUTMASK_CH7OM_SHIFT                  7u
#define FTM_OUTMASK_CH7OM_WIDTH                  1u
#define FTM_OUTMASK_CH7OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH7OM_SHIFT))&FTM_OUTMASK_CH7OM_MASK)
/* COMBINE Bit Fields */
#define FTM_COMBINE_COMBINE0_MASK                0x1u
#define FTM_COMBINE_COMBINE0_SHIFT               0u
#define FTM_COMBINE_COMBINE0_WIDTH               1u
#define FTM_COMBINE_COMBINE0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE0_SHIFT))&FTM_COMBINE_COMBINE0_MASK)
#define FTM_COMBINE_COMP0_MASK                   0x2u
#define FTM_COMBINE_COMP0_SHIFT                  1u
#define FTM_COMBINE_COMP0_WIDTH                  1u
#define FTM_COMBINE_COMP0(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP0_SHIFT))&FTM_COMBINE_COMP0_MASK)
#define FTM_COMBINE_DECAPEN0_MASK                0x4u
#define FTM_COMBINE_DECAPEN0_SHIFT               2u
#define FTM_COMBINE_DECAPEN0_WIDTH               1u
#define FTM_COMBINE_DECAPEN0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN0_SHIFT))&FTM_COMBINE_DECAPEN0_MASK)
#define FTM_COMBINE_DECAP0_MASK                  0x8u
#define FTM_COMBINE_DECAP0_SHIFT                 3u
#define FTM_COMBINE_DECAP0_WIDTH                 1u
#define FTM_COMBINE_DECAP0(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP0_SHIFT))&FTM_COMBINE_DECAP0_MASK)
#define FTM_COMBINE_DTEN0_MASK                   0x10u
#define FTM_COMBINE_DTEN0_SHIFT                  4u
#define FTM_COMBINE_DTEN0_WIDTH                  1u
#define FTM_COMBINE_DTEN0(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN0_SHIFT))&FTM_COMBINE_DTEN0_MASK)
#define FTM_COMBINE_SYNCEN0_MASK                 0x20u
#define FTM_COMBINE_SYNCEN0_SHIFT                5u
#define FTM_COMBINE_SYNCEN0_WIDTH                1u
#define FTM_COMBINE_SYNCEN0(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN0_SHIFT))&FTM_COMBINE_SYNCEN0_MASK)
#define FTM_COMBINE_FAULTEN0_MASK                0x40u
#define FTM_COMBINE_FAULTEN0_SHIFT               6u
#define FTM_COMBINE_FAULTEN0_WIDTH               1u
#define FTM_COMBINE_FAULTEN0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN0_SHIFT))&FTM_COMBINE_FAULTEN0_MASK)
#define FTM_COMBINE_MCOMBINE0_MASK               0x80u
#define FTM_COMBINE_MCOMBINE0_SHIFT              7u
#define FTM_COMBINE_MCOMBINE0_WIDTH              1u
#define FTM_COMBINE_MCOMBINE0(x)                 (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_MCOMBINE0_SHIFT))&FTM_COMBINE_MCOMBINE0_MASK)
#define FTM_COMBINE_COMBINE1_MASK                0x100u
#define FTM_COMBINE_COMBINE1_SHIFT               8u
#define FTM_COMBINE_COMBINE1_WIDTH               1u
#define FTM_COMBINE_COMBINE1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE1_SHIFT))&FTM_COMBINE_COMBINE1_MASK)
#define FTM_COMBINE_COMP1_MASK                   0x200u
#define FTM_COMBINE_COMP1_SHIFT                  9u
#define FTM_COMBINE_COMP1_WIDTH                  1u
#define FTM_COMBINE_COMP1(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP1_SHIFT))&FTM_COMBINE_COMP1_MASK)
#define FTM_COMBINE_DECAPEN1_MASK                0x400u
#define FTM_COMBINE_DECAPEN1_SHIFT               10u
#define FTM_COMBINE_DECAPEN1_WIDTH               1u
#define FTM_COMBINE_DECAPEN1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN1_SHIFT))&FTM_COMBINE_DECAPEN1_MASK)
#define FTM_COMBINE_DECAP1_MASK                  0x800u
#define FTM_COMBINE_DECAP1_SHIFT                 11u
#define FTM_COMBINE_DECAP1_WIDTH                 1u
#define FTM_COMBINE_DECAP1(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP1_SHIFT))&FTM_COMBINE_DECAP1_MASK)
#define FTM_COMBINE_DTEN1_MASK                   0x1000u
#define FTM_COMBINE_DTEN1_SHIFT                  12u
#define FTM_COMBINE_DTEN1_WIDTH                  1u
#define FTM_COMBINE_DTEN1(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN1_SHIFT))&FTM_COMBINE_DTEN1_MASK)
#define FTM_COMBINE_SYNCEN1_MASK                 0x2000u
#define FTM_COMBINE_SYNCEN1_SHIFT                13u
#define FTM_COMBINE_SYNCEN1_WIDTH                1u
#define FTM_COMBINE_SYNCEN1(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN1_SHIFT))&FTM_COMBINE_SYNCEN1_MASK)
#define FTM_COMBINE_FAULTEN1_MASK                0x4000u
#define FTM_COMBINE_FAULTEN1_SHIFT               14u
#define FTM_COMBINE_FAULTEN1_WIDTH               1u
#define FTM_COMBINE_FAULTEN1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN1_SHIFT))&FTM_COMBINE_FAULTEN1_MASK)
#define FTM_COMBINE_MCOMBINE1_MASK               0x8000u
#define FTM_COMBINE_MCOMBINE1_SHIFT              15u
#define FTM_COMBINE_MCOMBINE1_WIDTH              1u
#define FTM_COMBINE_MCOMBINE1(x)                 (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_MCOMBINE1_SHIFT))&FTM_COMBINE_MCOMBINE1_MASK)
#define FTM_COMBINE_COMBINE2_MASK                0x10000u
#define FTM_COMBINE_COMBINE2_SHIFT               16u
#define FTM_COMBINE_COMBINE2_WIDTH               1u
#define FTM_COMBINE_COMBINE2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE2_SHIFT))&FTM_COMBINE_COMBINE2_MASK)
#define FTM_COMBINE_COMP2_MASK                   0x20000u
#define FTM_COMBINE_COMP2_SHIFT                  17u
#define FTM_COMBINE_COMP2_WIDTH                  1u
#define FTM_COMBINE_COMP2(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP2_SHIFT))&FTM_COMBINE_COMP2_MASK)
#define FTM_COMBINE_DECAPEN2_MASK                0x40000u
#define FTM_COMBINE_DECAPEN2_SHIFT               18u
#define FTM_COMBINE_DECAPEN2_WIDTH               1u
#define FTM_COMBINE_DECAPEN2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN2_SHIFT))&FTM_COMBINE_DECAPEN2_MASK)
#define FTM_COMBINE_DECAP2_MASK                  0x80000u
#define FTM_COMBINE_DECAP2_SHIFT                 19u
#define FTM_COMBINE_DECAP2_WIDTH                 1u
#define FTM_COMBINE_DECAP2(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP2_SHIFT))&FTM_COMBINE_DECAP2_MASK)
#define FTM_COMBINE_DTEN2_MASK                   0x100000u
#define FTM_COMBINE_DTEN2_SHIFT                  20u
#define FTM_COMBINE_DTEN2_WIDTH                  1u
#define FTM_COMBINE_DTEN2(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN2_SHIFT))&FTM_COMBINE_DTEN2_MASK)
#define FTM_COMBINE_SYNCEN2_MASK                 0x200000u
#define FTM_COMBINE_SYNCEN2_SHIFT                21u
#define FTM_COMBINE_SYNCEN2_WIDTH                1u
#define FTM_COMBINE_SYNCEN2(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN2_SHIFT))&FTM_COMBINE_SYNCEN2_MASK)
#define FTM_COMBINE_FAULTEN2_MASK                0x400000u
#define FTM_COMBINE_FAULTEN2_SHIFT               22u
#define FTM_COMBINE_FAULTEN2_WIDTH               1u
#define FTM_COMBINE_FAULTEN2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN2_SHIFT))&FTM_COMBINE_FAULTEN2_MASK)
#define FTM_COMBINE_MCOMBINE2_MASK               0x800000u
#define FTM_COMBINE_MCOMBINE2_SHIFT              23u
#define FTM_COMBINE_MCOMBINE2_WIDTH              1u
#define FTM_COMBINE_MCOMBINE2(x)                 (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_MCOMBINE2_SHIFT))&FTM_COMBINE_MCOMBINE2_MASK)
#define FTM_COMBINE_COMBINE3_MASK                0x1000000u
#define FTM_COMBINE_COMBINE3_SHIFT               24u
#define FTM_COMBINE_COMBINE3_WIDTH               1u
#define FTM_COMBINE_COMBINE3(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE3_SHIFT))&FTM_COMBINE_COMBINE3_MASK)
#define FTM_COMBINE_COMP3_MASK                   0x2000000u
#define FTM_COMBINE_COMP3_SHIFT                  25u
#define FTM_COMBINE_COMP3_WIDTH                  1u
#define FTM_COMBINE_COMP3(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP3_SHIFT))&FTM_COMBINE_COMP3_MASK)
#define FTM_COMBINE_DECAPEN3_MASK                0x4000000u
#define FTM_COMBINE_DECAPEN3_SHIFT               26u
#define FTM_COMBINE_DECAPEN3_WIDTH               1u
#define FTM_COMBINE_DECAPEN3(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN3_SHIFT))&FTM_COMBINE_DECAPEN3_MASK)
#define FTM_COMBINE_DECAP3_MASK                  0x8000000u
#define FTM_COMBINE_DECAP3_SHIFT                 27u
#define FTM_COMBINE_DECAP3_WIDTH                 1u
#define FTM_COMBINE_DECAP3(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP3_SHIFT))&FTM_COMBINE_DECAP3_MASK)
#define FTM_COMBINE_DTEN3_MASK                   0x10000000u
#define FTM_COMBINE_DTEN3_SHIFT                  28u
#define FTM_COMBINE_DTEN3_WIDTH                  1u
#define FTM_COMBINE_DTEN3(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN3_SHIFT))&FTM_COMBINE_DTEN3_MASK)
#define FTM_COMBINE_SYNCEN3_MASK                 0x20000000u
#define FTM_COMBINE_SYNCEN3_SHIFT                29u
#define FTM_COMBINE_SYNCEN3_WIDTH                1u
#define FTM_COMBINE_SYNCEN3(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN3_SHIFT))&FTM_COMBINE_SYNCEN3_MASK)
#define FTM_COMBINE_FAULTEN3_MASK                0x40000000u
#define FTM_COMBINE_FAULTEN3_SHIFT               30u
#define FTM_COMBINE_FAULTEN3_WIDTH               1u
#define FTM_COMBINE_FAULTEN3(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN3_SHIFT))&FTM_COMBINE_FAULTEN3_MASK)
#define FTM_COMBINE_MCOMBINE3_MASK               0x80000000u
#define FTM_COMBINE_MCOMBINE3_SHIFT              31u
#define FTM_COMBINE_MCOMBINE3_WIDTH              1u
#define FTM_COMBINE_MCOMBINE3(x)                 (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_MCOMBINE3_SHIFT))&FTM_COMBINE_MCOMBINE3_MASK)
/* DEADTIME Bit Fields */
#define FTM_DEADTIME_DTVAL_MASK                  0x3Fu
#define FTM_DEADTIME_DTVAL_SHIFT                 0u
#define FTM_DEADTIME_DTVAL_WIDTH                 6u
#define FTM_DEADTIME_DTVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTVAL_SHIFT))&FTM_DEADTIME_DTVAL_MASK)
#define FTM_DEADTIME_DTPS_MASK                   0xC0u
#define FTM_DEADTIME_DTPS_SHIFT                  6u
#define FTM_DEADTIME_DTPS_WIDTH                  2u
#define FTM_DEADTIME_DTPS(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTPS_SHIFT))&FTM_DEADTIME_DTPS_MASK)
#define FTM_DEADTIME_DTVALEX_MASK                0xF0000u
#define FTM_DEADTIME_DTVALEX_SHIFT               16u
#define FTM_DEADTIME_DTVALEX_WIDTH               4u
#define FTM_DEADTIME_DTVALEX(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTVALEX_SHIFT))&FTM_DEADTIME_DTVALEX_MASK)
/* EXTTRIG Bit Fields */
#define FTM_EXTTRIG_CH2TRIG_MASK                 0x1u
#define FTM_EXTTRIG_CH2TRIG_SHIFT                0u
#define FTM_EXTTRIG_CH2TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH2TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH2TRIG_SHIFT))&FTM_EXTTRIG_CH2TRIG_MASK)
#define FTM_EXTTRIG_CH3TRIG_MASK                 0x2u
#define FTM_EXTTRIG_CH3TRIG_SHIFT                1u
#define FTM_EXTTRIG_CH3TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH3TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH3TRIG_SHIFT))&FTM_EXTTRIG_CH3TRIG_MASK)
#define FTM_EXTTRIG_CH4TRIG_MASK                 0x4u
#define FTM_EXTTRIG_CH4TRIG_SHIFT                2u
#define FTM_EXTTRIG_CH4TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH4TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH4TRIG_SHIFT))&FTM_EXTTRIG_CH4TRIG_MASK)
#define FTM_EXTTRIG_CH5TRIG_MASK                 0x8u
#define FTM_EXTTRIG_CH5TRIG_SHIFT                3u
#define FTM_EXTTRIG_CH5TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH5TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH5TRIG_SHIFT))&FTM_EXTTRIG_CH5TRIG_MASK)
#define FTM_EXTTRIG_CH0TRIG_MASK                 0x10u
#define FTM_EXTTRIG_CH0TRIG_SHIFT                4u
#define FTM_EXTTRIG_CH0TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH0TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH0TRIG_SHIFT))&FTM_EXTTRIG_CH0TRIG_MASK)
#define FTM_EXTTRIG_CH1TRIG_MASK                 0x20u
#define FTM_EXTTRIG_CH1TRIG_SHIFT                5u
#define FTM_EXTTRIG_CH1TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH1TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH1TRIG_SHIFT))&FTM_EXTTRIG_CH1TRIG_MASK)
#define FTM_EXTTRIG_INITTRIGEN_MASK              0x40u
#define FTM_EXTTRIG_INITTRIGEN_SHIFT             6u
#define FTM_EXTTRIG_INITTRIGEN_WIDTH             1u
#define FTM_EXTTRIG_INITTRIGEN(x)                (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_INITTRIGEN_SHIFT))&FTM_EXTTRIG_INITTRIGEN_MASK)
#define FTM_EXTTRIG_TRIGF_MASK                   0x80u
#define FTM_EXTTRIG_TRIGF_SHIFT                  7u
#define FTM_EXTTRIG_TRIGF_WIDTH                  1u
#define FTM_EXTTRIG_TRIGF(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_TRIGF_SHIFT))&FTM_EXTTRIG_TRIGF_MASK)
#define FTM_EXTTRIG_CH6TRIG_MASK                 0x100u
#define FTM_EXTTRIG_CH6TRIG_SHIFT                8u
#define FTM_EXTTRIG_CH6TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH6TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH6TRIG_SHIFT))&FTM_EXTTRIG_CH6TRIG_MASK)
#define FTM_EXTTRIG_CH7TRIG_MASK                 0x200u
#define FTM_EXTTRIG_CH7TRIG_SHIFT                9u
#define FTM_EXTTRIG_CH7TRIG_WIDTH                1u
#define FTM_EXTTRIG_CH7TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH7TRIG_SHIFT))&FTM_EXTTRIG_CH7TRIG_MASK)
/* POL Bit Fields */
#define FTM_POL_POL0_MASK                        0x1u
#define FTM_POL_POL0_SHIFT                       0u
#define FTM_POL_POL0_WIDTH                       1u
#define FTM_POL_POL0(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL0_SHIFT))&FTM_POL_POL0_MASK)
#define FTM_POL_POL1_MASK                        0x2u
#define FTM_POL_POL1_SHIFT                       1u
#define FTM_POL_POL1_WIDTH                       1u
#define FTM_POL_POL1(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL1_SHIFT))&FTM_POL_POL1_MASK)
#define FTM_POL_POL2_MASK                        0x4u
#define FTM_POL_POL2_SHIFT                       2u
#define FTM_POL_POL2_WIDTH                       1u
#define FTM_POL_POL2(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL2_SHIFT))&FTM_POL_POL2_MASK)
#define FTM_POL_POL3_MASK                        0x8u
#define FTM_POL_POL3_SHIFT                       3u
#define FTM_POL_POL3_WIDTH                       1u
#define FTM_POL_POL3(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL3_SHIFT))&FTM_POL_POL3_MASK)
#define FTM_POL_POL4_MASK                        0x10u
#define FTM_POL_POL4_SHIFT                       4u
#define FTM_POL_POL4_WIDTH                       1u
#define FTM_POL_POL4(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL4_SHIFT))&FTM_POL_POL4_MASK)
#define FTM_POL_POL5_MASK                        0x20u
#define FTM_POL_POL5_SHIFT                       5u
#define FTM_POL_POL5_WIDTH                       1u
#define FTM_POL_POL5(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL5_SHIFT))&FTM_POL_POL5_MASK)
#define FTM_POL_POL6_MASK                        0x40u
#define FTM_POL_POL6_SHIFT                       6u
#define FTM_POL_POL6_WIDTH                       1u
#define FTM_POL_POL6(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL6_SHIFT))&FTM_POL_POL6_MASK)
#define FTM_POL_POL7_MASK                        0x80u
#define FTM_POL_POL7_SHIFT                       7u
#define FTM_POL_POL7_WIDTH                       1u
#define FTM_POL_POL7(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL7_SHIFT))&FTM_POL_POL7_MASK)
/* FMS Bit Fields */
#define FTM_FMS_FAULTF0_MASK                     0x1u
#define FTM_FMS_FAULTF0_SHIFT                    0u
#define FTM_FMS_FAULTF0_WIDTH                    1u
#define FTM_FMS_FAULTF0(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF0_SHIFT))&FTM_FMS_FAULTF0_MASK)
#define FTM_FMS_FAULTF1_MASK                     0x2u
#define FTM_FMS_FAULTF1_SHIFT                    1u
#define FTM_FMS_FAULTF1_WIDTH                    1u
#define FTM_FMS_FAULTF1(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF1_SHIFT))&FTM_FMS_FAULTF1_MASK)
#define FTM_FMS_FAULTF2_MASK                     0x4u
#define FTM_FMS_FAULTF2_SHIFT                    2u
#define FTM_FMS_FAULTF2_WIDTH                    1u
#define FTM_FMS_FAULTF2(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF2_SHIFT))&FTM_FMS_FAULTF2_MASK)
#define FTM_FMS_FAULTF3_MASK                     0x8u
#define FTM_FMS_FAULTF3_SHIFT                    3u
#define FTM_FMS_FAULTF3_WIDTH                    1u
#define FTM_FMS_FAULTF3(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF3_SHIFT))&FTM_FMS_FAULTF3_MASK)
#define FTM_FMS_FAULTIN_MASK                     0x20u
#define FTM_FMS_FAULTIN_SHIFT                    5u
#define FTM_FMS_FAULTIN_WIDTH                    1u
#define FTM_FMS_FAULTIN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTIN_SHIFT))&FTM_FMS_FAULTIN_MASK)
#define FTM_FMS_WPEN_MASK                        0x40u
#define FTM_FMS_WPEN_SHIFT                       6u
#define FTM_FMS_WPEN_WIDTH                       1u
#define FTM_FMS_WPEN(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_FMS_WPEN_SHIFT))&FTM_FMS_WPEN_MASK)
#define FTM_FMS_FAULTF_MASK                      0x80u
#define FTM_FMS_FAULTF_SHIFT                     7u
#define FTM_FMS_FAULTF_WIDTH                     1u
#define FTM_FMS_FAULTF(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF_SHIFT))&FTM_FMS_FAULTF_MASK)
/* FILTER Bit Fields */
#define FTM_FILTER_CH0FVAL_MASK                  0xFu
#define FTM_FILTER_CH0FVAL_SHIFT                 0u
#define FTM_FILTER_CH0FVAL_WIDTH                 4u
#define FTM_FILTER_CH0FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH0FVAL_SHIFT))&FTM_FILTER_CH0FVAL_MASK)
#define FTM_FILTER_CH1FVAL_MASK                  0xF0u
#define FTM_FILTER_CH1FVAL_SHIFT                 4u
#define FTM_FILTER_CH1FVAL_WIDTH                 4u
#define FTM_FILTER_CH1FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH1FVAL_SHIFT))&FTM_FILTER_CH1FVAL_MASK)
#define FTM_FILTER_CH2FVAL_MASK                  0xF00u
#define FTM_FILTER_CH2FVAL_SHIFT                 8u
#define FTM_FILTER_CH2FVAL_WIDTH                 4u
#define FTM_FILTER_CH2FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH2FVAL_SHIFT))&FTM_FILTER_CH2FVAL_MASK)
#define FTM_FILTER_CH3FVAL_MASK                  0xF000u
#define FTM_FILTER_CH3FVAL_SHIFT                 12u
#define FTM_FILTER_CH3FVAL_WIDTH                 4u
#define FTM_FILTER_CH3FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH3FVAL_SHIFT))&FTM_FILTER_CH3FVAL_MASK)
/* FLTCTRL Bit Fields */
#define FTM_FLTCTRL_FAULT0EN_MASK                0x1u
#define FTM_FLTCTRL_FAULT0EN_SHIFT               0u
#define FTM_FLTCTRL_FAULT0EN_WIDTH               1u
#define FTM_FLTCTRL_FAULT0EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT0EN_SHIFT))&FTM_FLTCTRL_FAULT0EN_MASK)
#define FTM_FLTCTRL_FAULT1EN_MASK                0x2u
#define FTM_FLTCTRL_FAULT1EN_SHIFT               1u
#define FTM_FLTCTRL_FAULT1EN_WIDTH               1u
#define FTM_FLTCTRL_FAULT1EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT1EN_SHIFT))&FTM_FLTCTRL_FAULT1EN_MASK)
#define FTM_FLTCTRL_FAULT2EN_MASK                0x4u
#define FTM_FLTCTRL_FAULT2EN_SHIFT               2u
#define FTM_FLTCTRL_FAULT2EN_WIDTH               1u
#define FTM_FLTCTRL_FAULT2EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT2EN_SHIFT))&FTM_FLTCTRL_FAULT2EN_MASK)
#define FTM_FLTCTRL_FAULT3EN_MASK                0x8u
#define FTM_FLTCTRL_FAULT3EN_SHIFT               3u
#define FTM_FLTCTRL_FAULT3EN_WIDTH               1u
#define FTM_FLTCTRL_FAULT3EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT3EN_SHIFT))&FTM_FLTCTRL_FAULT3EN_MASK)
#define FTM_FLTCTRL_FFLTR0EN_MASK                0x10u
#define FTM_FLTCTRL_FFLTR0EN_SHIFT               4u
#define FTM_FLTCTRL_FFLTR0EN_WIDTH               1u
#define FTM_FLTCTRL_FFLTR0EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR0EN_SHIFT))&FTM_FLTCTRL_FFLTR0EN_MASK)
#define FTM_FLTCTRL_FFLTR1EN_MASK                0x20u
#define FTM_FLTCTRL_FFLTR1EN_SHIFT               5u
#define FTM_FLTCTRL_FFLTR1EN_WIDTH               1u
#define FTM_FLTCTRL_FFLTR1EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR1EN_SHIFT))&FTM_FLTCTRL_FFLTR1EN_MASK)
#define FTM_FLTCTRL_FFLTR2EN_MASK                0x40u
#define FTM_FLTCTRL_FFLTR2EN_SHIFT               6u
#define FTM_FLTCTRL_FFLTR2EN_WIDTH               1u
#define FTM_FLTCTRL_FFLTR2EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR2EN_SHIFT))&FTM_FLTCTRL_FFLTR2EN_MASK)
#define FTM_FLTCTRL_FFLTR3EN_MASK                0x80u
#define FTM_FLTCTRL_FFLTR3EN_SHIFT               7u
#define FTM_FLTCTRL_FFLTR3EN_WIDTH               1u
#define FTM_FLTCTRL_FFLTR3EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR3EN_SHIFT))&FTM_FLTCTRL_FFLTR3EN_MASK)
#define FTM_FLTCTRL_FFVAL_MASK                   0xF00u
#define FTM_FLTCTRL_FFVAL_SHIFT                  8u
#define FTM_FLTCTRL_FFVAL_WIDTH                  4u
#define FTM_FLTCTRL_FFVAL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFVAL_SHIFT))&FTM_FLTCTRL_FFVAL_MASK)
#define FTM_FLTCTRL_FSTATE_MASK                  0x8000u
#define FTM_FLTCTRL_FSTATE_SHIFT                 15u
#define FTM_FLTCTRL_FSTATE_WIDTH                 1u
#define FTM_FLTCTRL_FSTATE(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FSTATE_SHIFT))&FTM_FLTCTRL_FSTATE_MASK)
/* QDCTRL Bit Fields */
#define FTM_QDCTRL_QUADEN_MASK                   0x1u
#define FTM_QDCTRL_QUADEN_SHIFT                  0u
#define FTM_QDCTRL_QUADEN_WIDTH                  1u
#define FTM_QDCTRL_QUADEN(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_QUADEN_SHIFT))&FTM_QDCTRL_QUADEN_MASK)
#define FTM_QDCTRL_TOFDIR_MASK                   0x2u
#define FTM_QDCTRL_TOFDIR_SHIFT                  1u
#define FTM_QDCTRL_TOFDIR_WIDTH                  1u
#define FTM_QDCTRL_TOFDIR(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_TOFDIR_SHIFT))&FTM_QDCTRL_TOFDIR_MASK)
#define FTM_QDCTRL_QUADIR_MASK                   0x4u
#define FTM_QDCTRL_QUADIR_SHIFT                  2u
#define FTM_QDCTRL_QUADIR_WIDTH                  1u
#define FTM_QDCTRL_QUADIR(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_QUADIR_SHIFT))&FTM_QDCTRL_QUADIR_MASK)
#define FTM_QDCTRL_QUADMODE_MASK                 0x8u
#define FTM_QDCTRL_QUADMODE_SHIFT                3u
#define FTM_QDCTRL_QUADMODE_WIDTH                1u
#define FTM_QDCTRL_QUADMODE(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_QUADMODE_SHIFT))&FTM_QDCTRL_QUADMODE_MASK)
#define FTM_QDCTRL_PHBPOL_MASK                   0x10u
#define FTM_QDCTRL_PHBPOL_SHIFT                  4u
#define FTM_QDCTRL_PHBPOL_WIDTH                  1u
#define FTM_QDCTRL_PHBPOL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHBPOL_SHIFT))&FTM_QDCTRL_PHBPOL_MASK)
#define FTM_QDCTRL_PHAPOL_MASK                   0x20u
#define FTM_QDCTRL_PHAPOL_SHIFT                  5u
#define FTM_QDCTRL_PHAPOL_WIDTH                  1u
#define FTM_QDCTRL_PHAPOL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHAPOL_SHIFT))&FTM_QDCTRL_PHAPOL_MASK)
#define FTM_QDCTRL_PHBFLTREN_MASK                0x40u
#define FTM_QDCTRL_PHBFLTREN_SHIFT               6u
#define FTM_QDCTRL_PHBFLTREN_WIDTH               1u
#define FTM_QDCTRL_PHBFLTREN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHBFLTREN_SHIFT))&FTM_QDCTRL_PHBFLTREN_MASK)
#define FTM_QDCTRL_PHAFLTREN_MASK                0x80u
#define FTM_QDCTRL_PHAFLTREN_SHIFT               7u
#define FTM_QDCTRL_PHAFLTREN_WIDTH               1u
#define FTM_QDCTRL_PHAFLTREN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_QDCTRL_PHAFLTREN_SHIFT))&FTM_QDCTRL_PHAFLTREN_MASK)
/* CONF Bit Fields */
#define FTM_CONF_LDFQ_MASK                       0x1Fu
#define FTM_CONF_LDFQ_SHIFT                      0u
#define FTM_CONF_LDFQ_WIDTH                      5u
#define FTM_CONF_LDFQ(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CONF_LDFQ_SHIFT))&FTM_CONF_LDFQ_MASK)
#define FTM_CONF_BDMMODE_MASK                    0xC0u
#define FTM_CONF_BDMMODE_SHIFT                   6u
#define FTM_CONF_BDMMODE_WIDTH                   2u
#define FTM_CONF_BDMMODE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_BDMMODE_SHIFT))&FTM_CONF_BDMMODE_MASK)
#define FTM_CONF_GTBEEN_MASK                     0x200u
#define FTM_CONF_GTBEEN_SHIFT                    9u
#define FTM_CONF_GTBEEN_WIDTH                    1u
#define FTM_CONF_GTBEEN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_GTBEEN_SHIFT))&FTM_CONF_GTBEEN_MASK)
#define FTM_CONF_GTBEOUT_MASK                    0x400u
#define FTM_CONF_GTBEOUT_SHIFT                   10u
#define FTM_CONF_GTBEOUT_WIDTH                   1u
#define FTM_CONF_GTBEOUT(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_GTBEOUT_SHIFT))&FTM_CONF_GTBEOUT_MASK)
#define FTM_CONF_ITRIGR_MASK                     0x800u
#define FTM_CONF_ITRIGR_SHIFT                    11u
#define FTM_CONF_ITRIGR_WIDTH                    1u
#define FTM_CONF_ITRIGR(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_ITRIGR_SHIFT))&FTM_CONF_ITRIGR_MASK)
/* FLTPOL Bit Fields */
#define FTM_FLTPOL_FLT0POL_MASK                  0x1u
#define FTM_FLTPOL_FLT0POL_SHIFT                 0u
#define FTM_FLTPOL_FLT0POL_WIDTH                 1u
#define FTM_FLTPOL_FLT0POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT0POL_SHIFT))&FTM_FLTPOL_FLT0POL_MASK)
#define FTM_FLTPOL_FLT1POL_MASK                  0x2u
#define FTM_FLTPOL_FLT1POL_SHIFT                 1u
#define FTM_FLTPOL_FLT1POL_WIDTH                 1u
#define FTM_FLTPOL_FLT1POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT1POL_SHIFT))&FTM_FLTPOL_FLT1POL_MASK)
#define FTM_FLTPOL_FLT2POL_MASK                  0x4u
#define FTM_FLTPOL_FLT2POL_SHIFT                 2u
#define FTM_FLTPOL_FLT2POL_WIDTH                 1u
#define FTM_FLTPOL_FLT2POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT2POL_SHIFT))&FTM_FLTPOL_FLT2POL_MASK)
#define FTM_FLTPOL_FLT3POL_MASK                  0x8u
#define FTM_FLTPOL_FLT3POL_SHIFT                 3u
#define FTM_FLTPOL_FLT3POL_WIDTH                 1u
#define FTM_FLTPOL_FLT3POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT3POL_SHIFT))&FTM_FLTPOL_FLT3POL_MASK)
/* SYNCONF Bit Fields */
#define FTM_SYNCONF_HWTRIGMODE_MASK              0x1u
#define FTM_SYNCONF_HWTRIGMODE_SHIFT             0u
#define FTM_SYNCONF_HWTRIGMODE_WIDTH             1u
#define FTM_SYNCONF_HWTRIGMODE(x)                (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWTRIGMODE_SHIFT))&FTM_SYNCONF_HWTRIGMODE_MASK)
#define FTM_SYNCONF_CNTINC_MASK                  0x4u
#define FTM_SYNCONF_CNTINC_SHIFT                 2u
#define FTM_SYNCONF_CNTINC_WIDTH                 1u
#define FTM_SYNCONF_CNTINC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_CNTINC_SHIFT))&FTM_SYNCONF_CNTINC_MASK)
#define FTM_SYNCONF_INVC_MASK                    0x10u
#define FTM_SYNCONF_INVC_SHIFT                   4u
#define FTM_SYNCONF_INVC_WIDTH                   1u
#define FTM_SYNCONF_INVC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_INVC_SHIFT))&FTM_SYNCONF_INVC_MASK)
#define FTM_SYNCONF_SWOC_MASK                    0x20u
#define FTM_SYNCONF_SWOC_SHIFT                   5u
#define FTM_SYNCONF_SWOC_WIDTH                   1u
#define FTM_SYNCONF_SWOC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWOC_SHIFT))&FTM_SYNCONF_SWOC_MASK)
#define FTM_SYNCONF_SYNCMODE_MASK                0x80u
#define FTM_SYNCONF_SYNCMODE_SHIFT               7u
#define FTM_SYNCONF_SYNCMODE_WIDTH               1u
#define FTM_SYNCONF_SYNCMODE(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SYNCMODE_SHIFT))&FTM_SYNCONF_SYNCMODE_MASK)
#define FTM_SYNCONF_SWRSTCNT_MASK                0x100u
#define FTM_SYNCONF_SWRSTCNT_SHIFT               8u
#define FTM_SYNCONF_SWRSTCNT_WIDTH               1u
#define FTM_SYNCONF_SWRSTCNT(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWRSTCNT_SHIFT))&FTM_SYNCONF_SWRSTCNT_MASK)
#define FTM_SYNCONF_SWWRBUF_MASK                 0x200u
#define FTM_SYNCONF_SWWRBUF_SHIFT                9u
#define FTM_SYNCONF_SWWRBUF_WIDTH                1u
#define FTM_SYNCONF_SWWRBUF(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWWRBUF_SHIFT))&FTM_SYNCONF_SWWRBUF_MASK)
#define FTM_SYNCONF_SWOM_MASK                    0x400u
#define FTM_SYNCONF_SWOM_SHIFT                   10u
#define FTM_SYNCONF_SWOM_WIDTH                   1u
#define FTM_SYNCONF_SWOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWOM_SHIFT))&FTM_SYNCONF_SWOM_MASK)
#define FTM_SYNCONF_SWINVC_MASK                  0x800u
#define FTM_SYNCONF_SWINVC_SHIFT                 11u
#define FTM_SYNCONF_SWINVC_WIDTH                 1u
#define FTM_SYNCONF_SWINVC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWINVC_SHIFT))&FTM_SYNCONF_SWINVC_MASK)
#define FTM_SYNCONF_SWSOC_MASK                   0x1000u
#define FTM_SYNCONF_SWSOC_SHIFT                  12u
#define FTM_SYNCONF_SWSOC_WIDTH                  1u
#define FTM_SYNCONF_SWSOC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWSOC_SHIFT))&FTM_SYNCONF_SWSOC_MASK)
#define FTM_SYNCONF_HWRSTCNT_MASK                0x10000u
#define FTM_SYNCONF_HWRSTCNT_SHIFT               16u
#define FTM_SYNCONF_HWRSTCNT_WIDTH               1u
#define FTM_SYNCONF_HWRSTCNT(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWRSTCNT_SHIFT))&FTM_SYNCONF_HWRSTCNT_MASK)
#define FTM_SYNCONF_HWWRBUF_MASK                 0x20000u
#define FTM_SYNCONF_HWWRBUF_SHIFT                17u
#define FTM_SYNCONF_HWWRBUF_WIDTH                1u
#define FTM_SYNCONF_HWWRBUF(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWWRBUF_SHIFT))&FTM_SYNCONF_HWWRBUF_MASK)
#define FTM_SYNCONF_HWOM_MASK                    0x40000u
#define FTM_SYNCONF_HWOM_SHIFT                   18u
#define FTM_SYNCONF_HWOM_WIDTH                   1u
#define FTM_SYNCONF_HWOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWOM_SHIFT))&FTM_SYNCONF_HWOM_MASK)
#define FTM_SYNCONF_HWINVC_MASK                  0x80000u
#define FTM_SYNCONF_HWINVC_SHIFT                 19u
#define FTM_SYNCONF_HWINVC_WIDTH                 1u
#define FTM_SYNCONF_HWINVC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWINVC_SHIFT))&FTM_SYNCONF_HWINVC_MASK)
#define FTM_SYNCONF_HWSOC_MASK                   0x100000u
#define FTM_SYNCONF_HWSOC_SHIFT                  20u
#define FTM_SYNCONF_HWSOC_WIDTH                  1u
#define FTM_SYNCONF_HWSOC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWSOC_SHIFT))&FTM_SYNCONF_HWSOC_MASK)
/* INVCTRL Bit Fields */
#define FTM_INVCTRL_INV0EN_MASK                  0x1u
#define FTM_INVCTRL_INV0EN_SHIFT                 0u
#define FTM_INVCTRL_INV0EN_WIDTH                 1u
#define FTM_INVCTRL_INV0EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV0EN_SHIFT))&FTM_INVCTRL_INV0EN_MASK)
#define FTM_INVCTRL_INV1EN_MASK                  0x2u
#define FTM_INVCTRL_INV1EN_SHIFT                 1u
#define FTM_INVCTRL_INV1EN_WIDTH                 1u
#define FTM_INVCTRL_INV1EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV1EN_SHIFT))&FTM_INVCTRL_INV1EN_MASK)
#define FTM_INVCTRL_INV2EN_MASK                  0x4u
#define FTM_INVCTRL_INV2EN_SHIFT                 2u
#define FTM_INVCTRL_INV2EN_WIDTH                 1u
#define FTM_INVCTRL_INV2EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV2EN_SHIFT))&FTM_INVCTRL_INV2EN_MASK)
#define FTM_INVCTRL_INV3EN_MASK                  0x8u
#define FTM_INVCTRL_INV3EN_SHIFT                 3u
#define FTM_INVCTRL_INV3EN_WIDTH                 1u
#define FTM_INVCTRL_INV3EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV3EN_SHIFT))&FTM_INVCTRL_INV3EN_MASK)
/* SWOCTRL Bit Fields */
#define FTM_SWOCTRL_CH0OC_MASK                   0x1u
#define FTM_SWOCTRL_CH0OC_SHIFT                  0u
#define FTM_SWOCTRL_CH0OC_WIDTH                  1u
#define FTM_SWOCTRL_CH0OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH0OC_SHIFT))&FTM_SWOCTRL_CH0OC_MASK)
#define FTM_SWOCTRL_CH1OC_MASK                   0x2u
#define FTM_SWOCTRL_CH1OC_SHIFT                  1u
#define FTM_SWOCTRL_CH1OC_WIDTH                  1u
#define FTM_SWOCTRL_CH1OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH1OC_SHIFT))&FTM_SWOCTRL_CH1OC_MASK)
#define FTM_SWOCTRL_CH2OC_MASK                   0x4u
#define FTM_SWOCTRL_CH2OC_SHIFT                  2u
#define FTM_SWOCTRL_CH2OC_WIDTH                  1u
#define FTM_SWOCTRL_CH2OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH2OC_SHIFT))&FTM_SWOCTRL_CH2OC_MASK)
#define FTM_SWOCTRL_CH3OC_MASK                   0x8u
#define FTM_SWOCTRL_CH3OC_SHIFT                  3u
#define FTM_SWOCTRL_CH3OC_WIDTH                  1u
#define FTM_SWOCTRL_CH3OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH3OC_SHIFT))&FTM_SWOCTRL_CH3OC_MASK)
#define FTM_SWOCTRL_CH4OC_MASK                   0x10u
#define FTM_SWOCTRL_CH4OC_SHIFT                  4u
#define FTM_SWOCTRL_CH4OC_WIDTH                  1u
#define FTM_SWOCTRL_CH4OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH4OC_SHIFT))&FTM_SWOCTRL_CH4OC_MASK)
#define FTM_SWOCTRL_CH5OC_MASK                   0x20u
#define FTM_SWOCTRL_CH5OC_SHIFT                  5u
#define FTM_SWOCTRL_CH5OC_WIDTH                  1u
#define FTM_SWOCTRL_CH5OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH5OC_SHIFT))&FTM_SWOCTRL_CH5OC_MASK)
#define FTM_SWOCTRL_CH6OC_MASK                   0x40u
#define FTM_SWOCTRL_CH6OC_SHIFT                  6u
#define FTM_SWOCTRL_CH6OC_WIDTH                  1u
#define FTM_SWOCTRL_CH6OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH6OC_SHIFT))&FTM_SWOCTRL_CH6OC_MASK)
#define FTM_SWOCTRL_CH7OC_MASK                   0x80u
#define FTM_SWOCTRL_CH7OC_SHIFT                  7u
#define FTM_SWOCTRL_CH7OC_WIDTH                  1u
#define FTM_SWOCTRL_CH7OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH7OC_SHIFT))&FTM_SWOCTRL_CH7OC_MASK)
#define FTM_SWOCTRL_CH0OCV_MASK                  0x100u
#define FTM_SWOCTRL_CH0OCV_SHIFT                 8u
#define FTM_SWOCTRL_CH0OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH0OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH0OCV_SHIFT))&FTM_SWOCTRL_CH0OCV_MASK)
#define FTM_SWOCTRL_CH1OCV_MASK                  0x200u
#define FTM_SWOCTRL_CH1OCV_SHIFT                 9u
#define FTM_SWOCTRL_CH1OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH1OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH1OCV_SHIFT))&FTM_SWOCTRL_CH1OCV_MASK)
#define FTM_SWOCTRL_CH2OCV_MASK                  0x400u
#define FTM_SWOCTRL_CH2OCV_SHIFT                 10u
#define FTM_SWOCTRL_CH2OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH2OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH2OCV_SHIFT))&FTM_SWOCTRL_CH2OCV_MASK)
#define FTM_SWOCTRL_CH3OCV_MASK                  0x800u
#define FTM_SWOCTRL_CH3OCV_SHIFT                 11u
#define FTM_SWOCTRL_CH3OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH3OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH3OCV_SHIFT))&FTM_SWOCTRL_CH3OCV_MASK)
#define FTM_SWOCTRL_CH4OCV_MASK                  0x1000u
#define FTM_SWOCTRL_CH4OCV_SHIFT                 12u
#define FTM_SWOCTRL_CH4OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH4OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH4OCV_SHIFT))&FTM_SWOCTRL_CH4OCV_MASK)
#define FTM_SWOCTRL_CH5OCV_MASK                  0x2000u
#define FTM_SWOCTRL_CH5OCV_SHIFT                 13u
#define FTM_SWOCTRL_CH5OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH5OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH5OCV_SHIFT))&FTM_SWOCTRL_CH5OCV_MASK)
#define FTM_SWOCTRL_CH6OCV_MASK                  0x4000u
#define FTM_SWOCTRL_CH6OCV_SHIFT                 14u
#define FTM_SWOCTRL_CH6OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH6OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH6OCV_SHIFT))&FTM_SWOCTRL_CH6OCV_MASK)
#define FTM_SWOCTRL_CH7OCV_MASK                  0x8000u
#define FTM_SWOCTRL_CH7OCV_SHIFT                 15u
#define FTM_SWOCTRL_CH7OCV_WIDTH                 1u
#define FTM_SWOCTRL_CH7OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH7OCV_SHIFT))&FTM_SWOCTRL_CH7OCV_MASK)
/* PWMLOAD Bit Fields */
#define FTM_PWMLOAD_CH0SEL_MASK                  0x1u
#define FTM_PWMLOAD_CH0SEL_SHIFT                 0u
#define FTM_PWMLOAD_CH0SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH0SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH0SEL_SHIFT))&FTM_PWMLOAD_CH0SEL_MASK)
#define FTM_PWMLOAD_CH1SEL_MASK                  0x2u
#define FTM_PWMLOAD_CH1SEL_SHIFT                 1u
#define FTM_PWMLOAD_CH1SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH1SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH1SEL_SHIFT))&FTM_PWMLOAD_CH1SEL_MASK)
#define FTM_PWMLOAD_CH2SEL_MASK                  0x4u
#define FTM_PWMLOAD_CH2SEL_SHIFT                 2u
#define FTM_PWMLOAD_CH2SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH2SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH2SEL_SHIFT))&FTM_PWMLOAD_CH2SEL_MASK)
#define FTM_PWMLOAD_CH3SEL_MASK                  0x8u
#define FTM_PWMLOAD_CH3SEL_SHIFT                 3u
#define FTM_PWMLOAD_CH3SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH3SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH3SEL_SHIFT))&FTM_PWMLOAD_CH3SEL_MASK)
#define FTM_PWMLOAD_CH4SEL_MASK                  0x10u
#define FTM_PWMLOAD_CH4SEL_SHIFT                 4u
#define FTM_PWMLOAD_CH4SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH4SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH4SEL_SHIFT))&FTM_PWMLOAD_CH4SEL_MASK)
#define FTM_PWMLOAD_CH5SEL_MASK                  0x20u
#define FTM_PWMLOAD_CH5SEL_SHIFT                 5u
#define FTM_PWMLOAD_CH5SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH5SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH5SEL_SHIFT))&FTM_PWMLOAD_CH5SEL_MASK)
#define FTM_PWMLOAD_CH6SEL_MASK                  0x40u
#define FTM_PWMLOAD_CH6SEL_SHIFT                 6u
#define FTM_PWMLOAD_CH6SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH6SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH6SEL_SHIFT))&FTM_PWMLOAD_CH6SEL_MASK)
#define FTM_PWMLOAD_CH7SEL_MASK                  0x80u
#define FTM_PWMLOAD_CH7SEL_SHIFT                 7u
#define FTM_PWMLOAD_CH7SEL_WIDTH                 1u
#define FTM_PWMLOAD_CH7SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH7SEL_SHIFT))&FTM_PWMLOAD_CH7SEL_MASK)
#define FTM_PWMLOAD_HCSEL_MASK                   0x100u
#define FTM_PWMLOAD_HCSEL_SHIFT                  8u
#define FTM_PWMLOAD_HCSEL_WIDTH                  1u
#define FTM_PWMLOAD_HCSEL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_HCSEL_SHIFT))&FTM_PWMLOAD_HCSEL_MASK)
#define FTM_PWMLOAD_LDOK_MASK                    0x200u
#define FTM_PWMLOAD_LDOK_SHIFT                   9u
#define FTM_PWMLOAD_LDOK_WIDTH                   1u
#define FTM_PWMLOAD_LDOK(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_LDOK_SHIFT))&FTM_PWMLOAD_LDOK_MASK)
#define FTM_PWMLOAD_GLEN_MASK                    0x400u
#define FTM_PWMLOAD_GLEN_SHIFT                   10u
#define FTM_PWMLOAD_GLEN_WIDTH                   1u
#define FTM_PWMLOAD_GLEN(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_GLEN_SHIFT))&FTM_PWMLOAD_GLEN_MASK)
#define FTM_PWMLOAD_GLDOK_MASK                   0x800u
#define FTM_PWMLOAD_GLDOK_SHIFT                  11u
#define FTM_PWMLOAD_GLDOK_WIDTH                  1u
#define FTM_PWMLOAD_GLDOK(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_GLDOK_SHIFT))&FTM_PWMLOAD_GLDOK_MASK)
/* HCR Bit Fields */
#define FTM_HCR_HCVAL_MASK                       0xFFFFu
#define FTM_HCR_HCVAL_SHIFT                      0u
#define FTM_HCR_HCVAL_WIDTH                      16u
#define FTM_HCR_HCVAL(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_HCR_HCVAL_SHIFT))&FTM_HCR_HCVAL_MASK)
/* PAIR0DEADTIME Bit Fields */
#define FTM_PAIR0DEADTIME_DTVAL_MASK             0x3Fu
#define FTM_PAIR0DEADTIME_DTVAL_SHIFT            0u
#define FTM_PAIR0DEADTIME_DTVAL_WIDTH            6u
#define FTM_PAIR0DEADTIME_DTVAL(x)               (((uint32_t)(((uint32_t)(x))<<FTM_PAIR0DEADTIME_DTVAL_SHIFT))&FTM_PAIR0DEADTIME_DTVAL_MASK)
#define FTM_PAIR0DEADTIME_DTPS_MASK              0xC0u
#define FTM_PAIR0DEADTIME_DTPS_SHIFT             6u
#define FTM_PAIR0DEADTIME_DTPS_WIDTH             2u
#define FTM_PAIR0DEADTIME_DTPS(x)                (((uint32_t)(((uint32_t)(x))<<FTM_PAIR0DEADTIME_DTPS_SHIFT))&FTM_PAIR0DEADTIME_DTPS_MASK)
#define FTM_PAIR0DEADTIME_DTVALEX_MASK           0xF0000u
#define FTM_PAIR0DEADTIME_DTVALEX_SHIFT          16u
#define FTM_PAIR0DEADTIME_DTVALEX_WIDTH          4u
#define FTM_PAIR0DEADTIME_DTVALEX(x)             (((uint32_t)(((uint32_t)(x))<<FTM_PAIR0DEADTIME_DTVALEX_SHIFT))&FTM_PAIR0DEADTIME_DTVALEX_MASK)
/* PAIR1DEADTIME Bit Fields */
#define FTM_PAIR1DEADTIME_DTVAL_MASK             0x3Fu
#define FTM_PAIR1DEADTIME_DTVAL_SHIFT            0u
#define FTM_PAIR1DEADTIME_DTVAL_WIDTH            6u
#define FTM_PAIR1DEADTIME_DTVAL(x)               (((uint32_t)(((uint32_t)(x))<<FTM_PAIR1DEADTIME_DTVAL_SHIFT))&FTM_PAIR1DEADTIME_DTVAL_MASK)
#define FTM_PAIR1DEADTIME_DTPS_MASK              0xC0u
#define FTM_PAIR1DEADTIME_DTPS_SHIFT             6u
#define FTM_PAIR1DEADTIME_DTPS_WIDTH             2u
#define FTM_PAIR1DEADTIME_DTPS(x)                (((uint32_t)(((uint32_t)(x))<<FTM_PAIR1DEADTIME_DTPS_SHIFT))&FTM_PAIR1DEADTIME_DTPS_MASK)
#define FTM_PAIR1DEADTIME_DTVALEX_MASK           0xF0000u
#define FTM_PAIR1DEADTIME_DTVALEX_SHIFT          16u
#define FTM_PAIR1DEADTIME_DTVALEX_WIDTH          4u
#define FTM_PAIR1DEADTIME_DTVALEX(x)             (((uint32_t)(((uint32_t)(x))<<FTM_PAIR1DEADTIME_DTVALEX_SHIFT))&FTM_PAIR1DEADTIME_DTVALEX_MASK)
/* PAIR2DEADTIME Bit Fields */
#define FTM_PAIR2DEADTIME_DTVAL_MASK             0x3Fu
#define FTM_PAIR2DEADTIME_DTVAL_SHIFT            0u
#define FTM_PAIR2DEADTIME_DTVAL_WIDTH            6u
#define FTM_PAIR2DEADTIME_DTVAL(x)               (((uint32_t)(((uint32_t)(x))<<FTM_PAIR2DEADTIME_DTVAL_SHIFT))&FTM_PAIR2DEADTIME_DTVAL_MASK)
#define FTM_PAIR2DEADTIME_DTPS_MASK              0xC0u
#define FTM_PAIR2DEADTIME_DTPS_SHIFT             6u
#define FTM_PAIR2DEADTIME_DTPS_WIDTH             2u
#define FTM_PAIR2DEADTIME_DTPS(x)                (((uint32_t)(((uint32_t)(x))<<FTM_PAIR2DEADTIME_DTPS_SHIFT))&FTM_PAIR2DEADTIME_DTPS_MASK)
#define FTM_PAIR2DEADTIME_DTVALEX_MASK           0xF0000u
#define FTM_PAIR2DEADTIME_DTVALEX_SHIFT          16u
#define FTM_PAIR2DEADTIME_DTVALEX_WIDTH          4u
#define FTM_PAIR2DEADTIME_DTVALEX(x)             (((uint32_t)(((uint32_t)(x))<<FTM_PAIR2DEADTIME_DTVALEX_SHIFT))&FTM_PAIR2DEADTIME_DTVALEX_MASK)
/* PAIR3DEADTIME Bit Fields */
#define FTM_PAIR3DEADTIME_DTVAL_MASK             0x3Fu
#define FTM_PAIR3DEADTIME_DTVAL_SHIFT            0u
#define FTM_PAIR3DEADTIME_DTVAL_WIDTH            6u
#define FTM_PAIR3DEADTIME_DTVAL(x)               (((uint32_t)(((uint32_t)(x))<<FTM_PAIR3DEADTIME_DTVAL_SHIFT))&FTM_PAIR3DEADTIME_DTVAL_MASK)
#define FTM_PAIR3DEADTIME_DTPS_MASK              0xC0u
#define FTM_PAIR3DEADTIME_DTPS_SHIFT             6u
#define FTM_PAIR3DEADTIME_DTPS_WIDTH             2u
#define FTM_PAIR3DEADTIME_DTPS(x)                (((uint32_t)(((uint32_t)(x))<<FTM_PAIR3DEADTIME_DTPS_SHIFT))&FTM_PAIR3DEADTIME_DTPS_MASK)
#define FTM_PAIR3DEADTIME_DTVALEX_MASK           0xF0000u
#define FTM_PAIR3DEADTIME_DTVALEX_SHIFT          16u
#define FTM_PAIR3DEADTIME_DTVALEX_WIDTH          4u
#define FTM_PAIR3DEADTIME_DTVALEX(x)             (((uint32_t)(((uint32_t)(x))<<FTM_PAIR3DEADTIME_DTVALEX_SHIFT))&FTM_PAIR3DEADTIME_DTVALEX_MASK)

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/* MOD_MIRROR Bit Fields */
#define FTM_MOD_MIRROR_FRACMOD_MASK              0xF800u
#define FTM_MOD_MIRROR_FRACMOD_SHIFT             11u
#define FTM_MOD_MIRROR_FRACMOD_WIDTH             5u
#define FTM_MOD_MIRROR_FRACMOD(x)                (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MIRROR_FRACMOD_SHIFT))&FTM_MOD_MIRROR_FRACMOD_MASK)
#define FTM_MOD_MIRROR_MOD_MASK                  0xFFFF0000u
#define FTM_MOD_MIRROR_MOD_SHIFT                 16u
#define FTM_MOD_MIRROR_MOD_WIDTH                 16u
#define FTM_MOD_MIRROR_MOD(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MIRROR_MOD_SHIFT))&FTM_MOD_MIRROR_MOD_MASK)
/* CV_MIRROR Bit Fields */
#define FTM_CV_MIRROR_FRACVAL_MASK               0xF800u
#define FTM_CV_MIRROR_FRACVAL_SHIFT              11u
#define FTM_CV_MIRROR_FRACVAL_WIDTH              5u
#define FTM_CV_MIRROR_FRACVAL(x)                 (((uint32_t)(((uint32_t)(x))<<FTM_CV_MIRROR_FRACVAL_SHIFT))&FTM_CV_MIRROR_FRACVAL_MASK)
#define FTM_CV_MIRROR_VAL_MASK                   0xFFFF0000u
#define FTM_CV_MIRROR_VAL_SHIFT                  16u
#define FTM_CV_MIRROR_VAL_WIDTH                  16u
#define FTM_CV_MIRROR_VAL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_CV_MIRROR_VAL_SHIFT))&FTM_CV_MIRROR_VAL_MASK)
#endif
/*!
 * @}
 */ /* end of group FTM_Register_Masks */


/*!
 * @}
 */ /* end of group FTM_Peripheral_Access_Layer */


#endif /* S32K1XX_FTM_H_ */
