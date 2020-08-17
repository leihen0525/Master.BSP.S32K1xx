/*
 * S32K1xx.SIM.h
 *
 *  Created on: 2020年7月20日
 *      Author: Master.HE
 */

#ifndef S32K1XX_SIM_H_
#define S32K1XX_SIM_H_

#include "S32K1xx.Type.h"


typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t ADC_INTERLEAVE_EN				:4;
		__IO uint32_t CLKOUTSEL						:4;

		__IO uint32_t CLKOUTDIV						:3;
		__IO uint32_t CLKOUTEN						:1;
		__IO uint32_t TRACECLK_SEL					:1;
		__IO uint32_t PDB_BB_SEL					:1;
		__IO uint32_t								:2;

		__IO uint32_t ADC_SUPPLY					:3;
		__IO uint32_t ADC_SUPPLYEN					:1;
		__IO uint32_t SRAMU_RETEN					:1;
		__IO uint32_t SRAML_RETEN					:1;
		__IO uint32_t PDB_BB_SEL_1					:1;
		__IO uint32_t PDB_BB_SEL_2					:1;

		__IO uint32_t								:8;
	}BIT;
}SIM_CHIPCTL_Type;//??????

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:9;
		__IO uint32_t STOP1_MONITOR					:1;
		__IO uint32_t STOP2_MONITOR					:1;
		__IO uint32_t ECC_EEERAM_STAT				:1;
		__IO uint32_t ECC_MGRAM_STAT				:1;
		__IO uint32_t								:1;
		__IO uint32_t FTM_GTB_SPLIT_EN				:1;
		__IO uint32_t								:1;

		__IO uint32_t FTM0_OBE_CTRL					:1;
		__IO uint32_t FTM1_OBE_CTRL					:1;
		__IO uint32_t FTM2_OBE_CTRL					:1;
		__IO uint32_t FTM3_OBE_CTRL					:1;
		__IO uint32_t FTM4_OBE_CTRL					:1;
		__IO uint32_t FTM5_OBE_CTRL					:1;
		__IO uint32_t FTM6_OBE_CTRL					:1;
		__IO uint32_t FTM7_OBE_CTRL					:1;

		__IO uint32_t RMII_CLK_OBE					:1;
		__IO uint32_t RMII_CLK_SEL					:1;
		__IO uint32_t QSPI_CLK_SEL					:1;
		__IO uint32_t								:5;
	}BIT;
}SIM_MISCTRL0_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CGCMSCM						:1;
		__IO uint32_t CGCMPU						:1;
		__IO uint32_t CGCDMA						:1;
		__IO uint32_t CGCERM						:1;
		__IO uint32_t CGCEIM						:1;
		__IO uint32_t CGCGPIO						:1;
		__IO uint32_t								:2;

		__IO uint32_t								:24;
	}BIT;
}SIM_PLATCGC_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FTM0FLTxSEL					:3;
		__IO uint32_t								:1;
		__IO uint32_t FTM1FLTxSEL					:3;
		__IO uint32_t								:1;

		__IO uint32_t FTM2FLTxSEL					:3;
		__IO uint32_t								:1;
		__IO uint32_t FTM3FLTxSEL					:3;
		__IO uint32_t								:1;

		__IO uint32_t FTM4CLKSEL					:2;
		__IO uint32_t FTM5CLKSEL					:2;
		__IO uint32_t FTM6CLKSEL					:2;
		__IO uint32_t FTM7CLKSEL					:2;

		__IO uint32_t FTM0CLKSEL					:2;
		__IO uint32_t FTM1CLKSEL					:2;
		__IO uint32_t FTM2CLKSEL					:2;
		__IO uint32_t FTM3CLKSEL					:2;
	}BIT;
}SIM_FTMOPT0_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t LPO1KCLKEN					:1;
		__IO uint32_t LPO32KCLKEN					:1;
		__IO uint32_t LPOCLKSEL						:2;
		__IO uint32_t RTCCLKSEL						:2;
		__IO uint32_t								:2;

		__IO uint32_t								:24;
	}BIT;
}SIM_LPOCLKS_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t ADC0TRGSEL					:1;
		__IO uint32_t ADC0SWPRETRG					:3;
		__IO uint32_t ADC0PRETRGSEL					:2;
		__IO uint32_t								:2;

		__IO uint32_t ADC1TRGSEL					:1;
		__IO uint32_t ADC1SWPRETRG					:3;
		__IO uint32_t ADC1PRETRGSEL					:2;
		__IO uint32_t								:2;

		__IO uint32_t								:16;
	}BIT;
}SIM_ADCOPT_Type;

/*
typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FTM0SYNCBIT					:1;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM_FTMOPT1_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
		__IO uint32_t								:;
	}BIT;
}SIM__Type;

*/







/* ----------------------------------------------------------------------------
   -- SIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIM_Peripheral_Access_Layer SIM Peripheral Access Layer
 * @{
 */


/** SIM - Size of Registers Arrays */

/** SIM - Register Layout Typedef */
typedef struct {
	uint8_t RESERVED_0[4];
	SIM_CHIPCTL_Type CHIPCTL;                           /**< Chip Control register, offset: 0x4 */
	uint8_t RESERVED_1[4];
	SIM_FTMOPT0_Type FTMOPT0;                           /**< FTM Option Register 0, offset: 0xC */
	SIM_LPOCLKS_Type LPOCLKS;                           /**< LPO Clock Select Register, offset: 0x10 */
	uint8_t RESERVED_2[4];
	SIM_ADCOPT_Type ADCOPT;                            /**< ADC Options Register, offset: 0x18 */
	__IO uint32_t FTMOPT1;                           /**< FTM Option Register 1, offset: 0x1C */
	__IO uint32_t MISCTRL0;                          /**< Miscellaneous control register 0, offset: 0x20 */
	__I  uint32_t SDID;                              /**< System Device Identification Register, offset: 0x24 */
	uint8_t RESERVED_3[24];
	__IO uint32_t PLATCGC;                           /**< Platform Clock Gating Control Register, offset: 0x40 */
	uint8_t RESERVED_4[8];
	__IO uint32_t FCFG1;                             /**< Flash Configuration Register 1, offset: 0x4C */
	uint8_t RESERVED_5[4];
	__I  uint32_t UIDH;                              /**< Unique Identification Register High, offset: 0x54 */
	__I  uint32_t UIDMH;                             /**< Unique Identification Register Mid-High, offset: 0x58 */
	__I  uint32_t UIDML;                             /**< Unique Identification Register Mid Low, offset: 0x5C */
	__I  uint32_t UIDL;                              /**< Unique Identification Register Low, offset: 0x60 */
	uint8_t RESERVED_6[4];
	__IO uint32_t CLKDIV4;                           /**< System Clock Divider Register 4, offset: 0x68 */
	__IO uint32_t MISCTRL1;                          /**< Miscellaneous Control register 1, offset: 0x6C */
} SIM_Type, *SIM_MemMapPtr;

 /** Number of instances of the SIM module. */
#define SIM_INSTANCE_COUNT                       (1u)


/* SIM - Peripheral instance base addresses */
/** Peripheral SIM base address */
#define SIM_BASE                                 (0x40048000u)
/** Peripheral SIM base pointer */
#define SIM                                      ((SIM_Type *)SIM_BASE)
/** Array initializer of SIM peripheral base addresses */
#define SIM_BASE_ADDRS                           { SIM_BASE }
/** Array initializer of SIM peripheral base pointers */
#define SIM_BASE_PTRS                            { SIM }

/* ----------------------------------------------------------------------------
   -- SIM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIM_Register_Masks SIM Register Masks
 * @{
 */

/* CHIPCTL Bit Fields */
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN_MASK       0xFu
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN_SHIFT      0u
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN_WIDTH      4u
#define SIM_CHIPCTL_ADC_INTERLEAVE_EN(x)         (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_ADC_INTERLEAVE_EN_SHIFT))&SIM_CHIPCTL_ADC_INTERLEAVE_EN_MASK)
#define SIM_CHIPCTL_CLKOUTSEL_MASK               0xF0u
#define SIM_CHIPCTL_CLKOUTSEL_SHIFT              4u
#define SIM_CHIPCTL_CLKOUTSEL_WIDTH              4u
#define SIM_CHIPCTL_CLKOUTSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_CLKOUTSEL_SHIFT))&SIM_CHIPCTL_CLKOUTSEL_MASK)
#define SIM_CHIPCTL_CLKOUTDIV_MASK               0x700u
#define SIM_CHIPCTL_CLKOUTDIV_SHIFT              8u
#define SIM_CHIPCTL_CLKOUTDIV_WIDTH              3u
#define SIM_CHIPCTL_CLKOUTDIV(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_CLKOUTDIV_SHIFT))&SIM_CHIPCTL_CLKOUTDIV_MASK)
#define SIM_CHIPCTL_CLKOUTEN_MASK                0x800u
#define SIM_CHIPCTL_CLKOUTEN_SHIFT               11u
#define SIM_CHIPCTL_CLKOUTEN_WIDTH               1u
#define SIM_CHIPCTL_CLKOUTEN(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_CLKOUTEN_SHIFT))&SIM_CHIPCTL_CLKOUTEN_MASK)
#define SIM_CHIPCTL_TRACECLK_SEL_MASK            0x1000u
#define SIM_CHIPCTL_TRACECLK_SEL_SHIFT           12u
#define SIM_CHIPCTL_TRACECLK_SEL_WIDTH           1u
#define SIM_CHIPCTL_TRACECLK_SEL(x)              (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_TRACECLK_SEL_SHIFT))&SIM_CHIPCTL_TRACECLK_SEL_MASK)
#define SIM_CHIPCTL_PDB_BB_SEL_MASK              0x2000u
#define SIM_CHIPCTL_PDB_BB_SEL_SHIFT             13u
#define SIM_CHIPCTL_PDB_BB_SEL_WIDTH             1u
#define SIM_CHIPCTL_PDB_BB_SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_PDB_BB_SEL_SHIFT))&SIM_CHIPCTL_PDB_BB_SEL_MASK)
#define SIM_CHIPCTL_ADC_SUPPLY_MASK              0x70000u
#define SIM_CHIPCTL_ADC_SUPPLY_SHIFT             16u
#define SIM_CHIPCTL_ADC_SUPPLY_WIDTH             3u
#define SIM_CHIPCTL_ADC_SUPPLY(x)                (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_ADC_SUPPLY_SHIFT))&SIM_CHIPCTL_ADC_SUPPLY_MASK)
#define SIM_CHIPCTL_ADC_SUPPLYEN_MASK            0x80000u
#define SIM_CHIPCTL_ADC_SUPPLYEN_SHIFT           19u
#define SIM_CHIPCTL_ADC_SUPPLYEN_WIDTH           1u
#define SIM_CHIPCTL_ADC_SUPPLYEN(x)              (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_ADC_SUPPLYEN_SHIFT))&SIM_CHIPCTL_ADC_SUPPLYEN_MASK)
#define SIM_CHIPCTL_SRAMU_RETEN_MASK             0x100000u
#define SIM_CHIPCTL_SRAMU_RETEN_SHIFT            20u
#define SIM_CHIPCTL_SRAMU_RETEN_WIDTH            1u
#define SIM_CHIPCTL_SRAMU_RETEN(x)               (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_SRAMU_RETEN_SHIFT))&SIM_CHIPCTL_SRAMU_RETEN_MASK)
#define SIM_CHIPCTL_SRAML_RETEN_MASK             0x200000u
#define SIM_CHIPCTL_SRAML_RETEN_SHIFT            21u
#define SIM_CHIPCTL_SRAML_RETEN_WIDTH            1u
#define SIM_CHIPCTL_SRAML_RETEN(x)               (((uint32_t)(((uint32_t)(x))<<SIM_CHIPCTL_SRAML_RETEN_SHIFT))&SIM_CHIPCTL_SRAML_RETEN_MASK)
/* FTMOPT0 Bit Fields */
#define SIM_FTMOPT0_FTM0FLTxSEL_MASK             0x7u
#define SIM_FTMOPT0_FTM0FLTxSEL_SHIFT            0u
#define SIM_FTMOPT0_FTM0FLTxSEL_WIDTH            3u
#define SIM_FTMOPT0_FTM0FLTxSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM0FLTxSEL_SHIFT))&SIM_FTMOPT0_FTM0FLTxSEL_MASK)
#define SIM_FTMOPT0_FTM1FLTxSEL_MASK             0x70u
#define SIM_FTMOPT0_FTM1FLTxSEL_SHIFT            4u
#define SIM_FTMOPT0_FTM1FLTxSEL_WIDTH            3u
#define SIM_FTMOPT0_FTM1FLTxSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM1FLTxSEL_SHIFT))&SIM_FTMOPT0_FTM1FLTxSEL_MASK)
#define SIM_FTMOPT0_FTM2FLTxSEL_MASK             0x700u
#define SIM_FTMOPT0_FTM2FLTxSEL_SHIFT            8u
#define SIM_FTMOPT0_FTM2FLTxSEL_WIDTH            3u
#define SIM_FTMOPT0_FTM2FLTxSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM2FLTxSEL_SHIFT))&SIM_FTMOPT0_FTM2FLTxSEL_MASK)
#define SIM_FTMOPT0_FTM3FLTxSEL_MASK             0x7000u
#define SIM_FTMOPT0_FTM3FLTxSEL_SHIFT            12u
#define SIM_FTMOPT0_FTM3FLTxSEL_WIDTH            3u
#define SIM_FTMOPT0_FTM3FLTxSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM3FLTxSEL_SHIFT))&SIM_FTMOPT0_FTM3FLTxSEL_MASK)
#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define SIM_FTMOPT0_FTM4CLKSEL_MASK              0x30000u
#define SIM_FTMOPT0_FTM4CLKSEL_SHIFT             16u
#define SIM_FTMOPT0_FTM4CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM4CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM4CLKSEL_SHIFT))&SIM_FTMOPT0_FTM4CLKSEL_MASK)
#define SIM_FTMOPT0_FTM5CLKSEL_MASK              0xC0000u
#define SIM_FTMOPT0_FTM5CLKSEL_SHIFT             18u
#define SIM_FTMOPT0_FTM5CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM5CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM5CLKSEL_SHIFT))&SIM_FTMOPT0_FTM5CLKSEL_MASK)
#if (defined (__Target_S32K148__))
#define SIM_FTMOPT0_FTM6CLKSEL_MASK              0x300000u
#define SIM_FTMOPT0_FTM6CLKSEL_SHIFT             20u
#define SIM_FTMOPT0_FTM6CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM6CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM6CLKSEL_SHIFT))&SIM_FTMOPT0_FTM6CLKSEL_MASK)
#define SIM_FTMOPT0_FTM7CLKSEL_MASK              0xC00000u
#define SIM_FTMOPT0_FTM7CLKSEL_SHIFT             22u
#define SIM_FTMOPT0_FTM7CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM7CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM7CLKSEL_SHIFT))&SIM_FTMOPT0_FTM7CLKSEL_MASK)
#endif
#endif
#define SIM_FTMOPT0_FTM0CLKSEL_MASK              0x3000000u
#define SIM_FTMOPT0_FTM0CLKSEL_SHIFT             24u
#define SIM_FTMOPT0_FTM0CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM0CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM0CLKSEL_SHIFT))&SIM_FTMOPT0_FTM0CLKSEL_MASK)
#define SIM_FTMOPT0_FTM1CLKSEL_MASK              0xC000000u
#define SIM_FTMOPT0_FTM1CLKSEL_SHIFT             26u
#define SIM_FTMOPT0_FTM1CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM1CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM1CLKSEL_SHIFT))&SIM_FTMOPT0_FTM1CLKSEL_MASK)
#define SIM_FTMOPT0_FTM2CLKSEL_MASK              0x30000000u
#define SIM_FTMOPT0_FTM2CLKSEL_SHIFT             28u
#define SIM_FTMOPT0_FTM2CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM2CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM2CLKSEL_SHIFT))&SIM_FTMOPT0_FTM2CLKSEL_MASK)
#define SIM_FTMOPT0_FTM3CLKSEL_MASK              0xC0000000u
#define SIM_FTMOPT0_FTM3CLKSEL_SHIFT             30u
#define SIM_FTMOPT0_FTM3CLKSEL_WIDTH             2u
#define SIM_FTMOPT0_FTM3CLKSEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT0_FTM3CLKSEL_SHIFT))&SIM_FTMOPT0_FTM3CLKSEL_MASK)
/* LPOCLKS Bit Fields */
#define SIM_LPOCLKS_LPO1KCLKEN_MASK              0x1u
#define SIM_LPOCLKS_LPO1KCLKEN_SHIFT             0u
#define SIM_LPOCLKS_LPO1KCLKEN_WIDTH             1u
#define SIM_LPOCLKS_LPO1KCLKEN(x)                (((uint32_t)(((uint32_t)(x))<<SIM_LPOCLKS_LPO1KCLKEN_SHIFT))&SIM_LPOCLKS_LPO1KCLKEN_MASK)
#define SIM_LPOCLKS_LPO32KCLKEN_MASK             0x2u
#define SIM_LPOCLKS_LPO32KCLKEN_SHIFT            1u
#define SIM_LPOCLKS_LPO32KCLKEN_WIDTH            1u
#define SIM_LPOCLKS_LPO32KCLKEN(x)               (((uint32_t)(((uint32_t)(x))<<SIM_LPOCLKS_LPO32KCLKEN_SHIFT))&SIM_LPOCLKS_LPO32KCLKEN_MASK)
#define SIM_LPOCLKS_LPOCLKSEL_MASK               0xCu
#define SIM_LPOCLKS_LPOCLKSEL_SHIFT              2u
#define SIM_LPOCLKS_LPOCLKSEL_WIDTH              2u
#define SIM_LPOCLKS_LPOCLKSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_LPOCLKS_LPOCLKSEL_SHIFT))&SIM_LPOCLKS_LPOCLKSEL_MASK)
#define SIM_LPOCLKS_RTCCLKSEL_MASK               0x30u
#define SIM_LPOCLKS_RTCCLKSEL_SHIFT              4u
#define SIM_LPOCLKS_RTCCLKSEL_WIDTH              2u
#define SIM_LPOCLKS_RTCCLKSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_LPOCLKS_RTCCLKSEL_SHIFT))&SIM_LPOCLKS_RTCCLKSEL_MASK)
/* ADCOPT Bit Fields */
#define SIM_ADCOPT_ADC0TRGSEL_MASK               0x1u
#define SIM_ADCOPT_ADC0TRGSEL_SHIFT              0u
#define SIM_ADCOPT_ADC0TRGSEL_WIDTH              1u
#define SIM_ADCOPT_ADC0TRGSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC0TRGSEL_SHIFT))&SIM_ADCOPT_ADC0TRGSEL_MASK)
#define SIM_ADCOPT_ADC0SWPRETRG_MASK             0xEu
#define SIM_ADCOPT_ADC0SWPRETRG_SHIFT            1u
#define SIM_ADCOPT_ADC0SWPRETRG_WIDTH            3u
#define SIM_ADCOPT_ADC0SWPRETRG(x)               (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC0SWPRETRG_SHIFT))&SIM_ADCOPT_ADC0SWPRETRG_MASK)
#define SIM_ADCOPT_ADC0PRETRGSEL_MASK            0x30u
#define SIM_ADCOPT_ADC0PRETRGSEL_SHIFT           4u
#define SIM_ADCOPT_ADC0PRETRGSEL_WIDTH           2u
#define SIM_ADCOPT_ADC0PRETRGSEL(x)              (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC0PRETRGSEL_SHIFT))&SIM_ADCOPT_ADC0PRETRGSEL_MASK)
#define SIM_ADCOPT_ADC1TRGSEL_MASK               0x100u
#define SIM_ADCOPT_ADC1TRGSEL_SHIFT              8u
#define SIM_ADCOPT_ADC1TRGSEL_WIDTH              1u
#define SIM_ADCOPT_ADC1TRGSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC1TRGSEL_SHIFT))&SIM_ADCOPT_ADC1TRGSEL_MASK)
#define SIM_ADCOPT_ADC1SWPRETRG_MASK             0xE00u
#define SIM_ADCOPT_ADC1SWPRETRG_SHIFT            9u
#define SIM_ADCOPT_ADC1SWPRETRG_WIDTH            3u
#define SIM_ADCOPT_ADC1SWPRETRG(x)               (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC1SWPRETRG_SHIFT))&SIM_ADCOPT_ADC1SWPRETRG_MASK)
#define SIM_ADCOPT_ADC1PRETRGSEL_MASK            0x3000u
#define SIM_ADCOPT_ADC1PRETRGSEL_SHIFT           12u
#define SIM_ADCOPT_ADC1PRETRGSEL_WIDTH           2u
#define SIM_ADCOPT_ADC1PRETRGSEL(x)              (((uint32_t)(((uint32_t)(x))<<SIM_ADCOPT_ADC1PRETRGSEL_SHIFT))&SIM_ADCOPT_ADC1PRETRGSEL_MASK)
/* FTMOPT1 Bit Fields */
#define SIM_FTMOPT1_FTM0SYNCBIT_MASK             0x1u
#define SIM_FTMOPT1_FTM0SYNCBIT_SHIFT            0u
#define SIM_FTMOPT1_FTM0SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM0SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM0SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM0SYNCBIT_MASK)
#define SIM_FTMOPT1_FTM1SYNCBIT_MASK             0x2u
#define SIM_FTMOPT1_FTM1SYNCBIT_SHIFT            1u
#define SIM_FTMOPT1_FTM1SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM1SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM1SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM1SYNCBIT_MASK)
#define SIM_FTMOPT1_FTM2SYNCBIT_MASK             0x4u
#define SIM_FTMOPT1_FTM2SYNCBIT_SHIFT            2u
#define SIM_FTMOPT1_FTM2SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM2SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM2SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM2SYNCBIT_MASK)
#define SIM_FTMOPT1_FTM3SYNCBIT_MASK             0x8u
#define SIM_FTMOPT1_FTM3SYNCBIT_SHIFT            3u
#define SIM_FTMOPT1_FTM3SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM3SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM3SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM3SYNCBIT_MASK)
#define SIM_FTMOPT1_FTM1CH0SEL_MASK              0x30u
#define SIM_FTMOPT1_FTM1CH0SEL_SHIFT             4u
#define SIM_FTMOPT1_FTM1CH0SEL_WIDTH             2u
#define SIM_FTMOPT1_FTM1CH0SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM1CH0SEL_SHIFT))&SIM_FTMOPT1_FTM1CH0SEL_MASK)
#define SIM_FTMOPT1_FTM2CH0SEL_MASK              0xC0u
#define SIM_FTMOPT1_FTM2CH0SEL_SHIFT             6u
#define SIM_FTMOPT1_FTM2CH0SEL_WIDTH             2u
#define SIM_FTMOPT1_FTM2CH0SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM2CH0SEL_SHIFT))&SIM_FTMOPT1_FTM2CH0SEL_MASK)
#define SIM_FTMOPT1_FTM2CH1SEL_MASK              0x100u
#define SIM_FTMOPT1_FTM2CH1SEL_SHIFT             8u
#define SIM_FTMOPT1_FTM2CH1SEL_WIDTH             1u
#define SIM_FTMOPT1_FTM2CH1SEL(x)                (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM2CH1SEL_SHIFT))&SIM_FTMOPT1_FTM2CH1SEL_MASK)
#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define SIM_FTMOPT1_FTM4SYNCBIT_MASK             0x800u
#define SIM_FTMOPT1_FTM4SYNCBIT_SHIFT            11u
#define SIM_FTMOPT1_FTM4SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM4SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM4SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM4SYNCBIT_MASK)
#define SIM_FTMOPT1_FTM5SYNCBIT_MASK             0x1000u
#define SIM_FTMOPT1_FTM5SYNCBIT_SHIFT            12u
#define SIM_FTMOPT1_FTM5SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM5SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM5SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM5SYNCBIT_MASK)
#if (defined (__Target_S32K148__))
#define SIM_FTMOPT1_FTM6SYNCBIT_MASK             0x2000u
#define SIM_FTMOPT1_FTM6SYNCBIT_SHIFT            13u
#define SIM_FTMOPT1_FTM6SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM6SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM6SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM6SYNCBIT_MASK)
#define SIM_FTMOPT1_FTM7SYNCBIT_MASK             0x4000u
#define SIM_FTMOPT1_FTM7SYNCBIT_SHIFT            14u
#define SIM_FTMOPT1_FTM7SYNCBIT_WIDTH            1u
#define SIM_FTMOPT1_FTM7SYNCBIT(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM7SYNCBIT_SHIFT))&SIM_FTMOPT1_FTM7SYNCBIT_MASK)
#endif
#endif
#define SIM_FTMOPT1_FTMGLDOK_MASK                0x8000u
#define SIM_FTMOPT1_FTMGLDOK_SHIFT               15u
#define SIM_FTMOPT1_FTMGLDOK_WIDTH               1u
#define SIM_FTMOPT1_FTMGLDOK(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTMGLDOK_SHIFT))&SIM_FTMOPT1_FTMGLDOK_MASK)
#define SIM_FTMOPT1_FTM0_OUTSEL_MASK             0xFF0000u
#define SIM_FTMOPT1_FTM0_OUTSEL_SHIFT            16u
#define SIM_FTMOPT1_FTM0_OUTSEL_WIDTH            8u
#define SIM_FTMOPT1_FTM0_OUTSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM0_OUTSEL_SHIFT))&SIM_FTMOPT1_FTM0_OUTSEL_MASK)
#define SIM_FTMOPT1_FTM3_OUTSEL_MASK             0xFF000000u
#define SIM_FTMOPT1_FTM3_OUTSEL_SHIFT            24u
#define SIM_FTMOPT1_FTM3_OUTSEL_WIDTH            8u
#define SIM_FTMOPT1_FTM3_OUTSEL(x)               (((uint32_t)(((uint32_t)(x))<<SIM_FTMOPT1_FTM3_OUTSEL_SHIFT))&SIM_FTMOPT1_FTM3_OUTSEL_MASK)
/* MISCTRL0 Bit Fields */
#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define SIM_MISCTRL0_FTM_GTB_SPLIT_EN_MASK       0x4000u
#define SIM_MISCTRL0_FTM_GTB_SPLIT_EN_SHIFT      14u
#define SIM_MISCTRL0_FTM_GTB_SPLIT_EN_WIDTH      1u
#define SIM_MISCTRL0_FTM_GTB_SPLIT_EN(x)         (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM_GTB_SPLIT_EN_SHIFT))&SIM_MISCTRL0_FTM_GTB_SPLIT_EN_MASK)
#endif
#define SIM_MISCTRL0_FTM0_OBE_CTRL_MASK          0x10000u
#define SIM_MISCTRL0_FTM0_OBE_CTRL_SHIFT         16u
#define SIM_MISCTRL0_FTM0_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM0_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM0_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM0_OBE_CTRL_MASK)
#define SIM_MISCTRL0_FTM1_OBE_CTRL_MASK          0x20000u
#define SIM_MISCTRL0_FTM1_OBE_CTRL_SHIFT         17u
#define SIM_MISCTRL0_FTM1_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM1_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM1_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM1_OBE_CTRL_MASK)
#define SIM_MISCTRL0_FTM2_OBE_CTRL_MASK          0x40000u
#define SIM_MISCTRL0_FTM2_OBE_CTRL_SHIFT         18u
#define SIM_MISCTRL0_FTM2_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM2_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM2_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM2_OBE_CTRL_MASK)
#define SIM_MISCTRL0_FTM3_OBE_CTRL_MASK          0x80000u
#define SIM_MISCTRL0_FTM3_OBE_CTRL_SHIFT         19u
#define SIM_MISCTRL0_FTM3_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM3_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM3_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM3_OBE_CTRL_MASK)
#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define SIM_MISCTRL0_FTM4_OBE_CTRL_MASK          0x100000u
#define SIM_MISCTRL0_FTM4_OBE_CTRL_SHIFT         20u
#define SIM_MISCTRL0_FTM4_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM4_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM4_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM4_OBE_CTRL_MASK)
#define SIM_MISCTRL0_FTM5_OBE_CTRL_MASK          0x200000u
#define SIM_MISCTRL0_FTM5_OBE_CTRL_SHIFT         21u
#define SIM_MISCTRL0_FTM5_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM5_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM5_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM5_OBE_CTRL_MASK)
#define SIM_MISCTRL0_FTM6_OBE_CTRL_MASK          0x400000u
#define SIM_MISCTRL0_FTM6_OBE_CTRL_SHIFT         22u
#define SIM_MISCTRL0_FTM6_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM6_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM6_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM6_OBE_CTRL_MASK)
#define SIM_MISCTRL0_FTM7_OBE_CTRL_MASK          0x800000u
#define SIM_MISCTRL0_FTM7_OBE_CTRL_SHIFT         23u
#define SIM_MISCTRL0_FTM7_OBE_CTRL_WIDTH         1u
#define SIM_MISCTRL0_FTM7_OBE_CTRL(x)            (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_FTM7_OBE_CTRL_SHIFT))&SIM_MISCTRL0_FTM7_OBE_CTRL_MASK)
#if (defined (__Target_S32K148__))
#define SIM_MISCTRL0_RMII_CLK_OBE_MASK           0x1000000u
#define SIM_MISCTRL0_RMII_CLK_OBE_SHIFT          24u
#define SIM_MISCTRL0_RMII_CLK_OBE_WIDTH          1u
#define SIM_MISCTRL0_RMII_CLK_OBE(x)             (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_RMII_CLK_OBE_SHIFT))&SIM_MISCTRL0_RMII_CLK_OBE_MASK)
#define SIM_MISCTRL0_RMII_CLK_SEL_MASK           0x2000000u
#define SIM_MISCTRL0_RMII_CLK_SEL_SHIFT          25u
#define SIM_MISCTRL0_RMII_CLK_SEL_WIDTH          1u
#define SIM_MISCTRL0_RMII_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_RMII_CLK_SEL_SHIFT))&SIM_MISCTRL0_RMII_CLK_SEL_MASK)
#define SIM_MISCTRL0_QSPI_CLK_SEL_MASK           0x4000000u
#define SIM_MISCTRL0_QSPI_CLK_SEL_SHIFT          26u
#define SIM_MISCTRL0_QSPI_CLK_SEL_WIDTH          1u
#define SIM_MISCTRL0_QSPI_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL0_QSPI_CLK_SEL_SHIFT))&SIM_MISCTRL0_QSPI_CLK_SEL_MASK)
#endif
#endif
/* SDID Bit Fields */
#define SIM_SDID_FEATURES_MASK                   0xFFu
#define SIM_SDID_FEATURES_SHIFT                  0u
#define SIM_SDID_FEATURES_WIDTH                  8u
#define SIM_SDID_FEATURES(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_FEATURES_SHIFT))&SIM_SDID_FEATURES_MASK)
#define SIM_SDID_PACKAGE_MASK                    0xF00u
#define SIM_SDID_PACKAGE_SHIFT                   8u
#define SIM_SDID_PACKAGE_WIDTH                   4u
#define SIM_SDID_PACKAGE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_SDID_PACKAGE_SHIFT))&SIM_SDID_PACKAGE_MASK)
#define SIM_SDID_REVID_MASK                      0xF000u
#define SIM_SDID_REVID_SHIFT                     12u
#define SIM_SDID_REVID_WIDTH                     4u
#define SIM_SDID_REVID(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SDID_REVID_SHIFT))&SIM_SDID_REVID_MASK)
#define SIM_SDID_RAMSIZE_MASK                    0xF0000u
#define SIM_SDID_RAMSIZE_SHIFT                   16u
#define SIM_SDID_RAMSIZE_WIDTH                   4u
#define SIM_SDID_RAMSIZE(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_SDID_RAMSIZE_SHIFT))&SIM_SDID_RAMSIZE_MASK)
#define SIM_SDID_DERIVATE_MASK                   0xF00000u
#define SIM_SDID_DERIVATE_SHIFT                  20u
#define SIM_SDID_DERIVATE_WIDTH                  4u
#define SIM_SDID_DERIVATE(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SDID_DERIVATE_SHIFT))&SIM_SDID_DERIVATE_MASK)
#define SIM_SDID_SUBSERIES_MASK                  0xF000000u
#define SIM_SDID_SUBSERIES_SHIFT                 24u
#define SIM_SDID_SUBSERIES_WIDTH                 4u
#define SIM_SDID_SUBSERIES(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_SDID_SUBSERIES_SHIFT))&SIM_SDID_SUBSERIES_MASK)
#define SIM_SDID_GENERATION_MASK                 0xF0000000u
#define SIM_SDID_GENERATION_SHIFT                28u
#define SIM_SDID_GENERATION_WIDTH                4u
#define SIM_SDID_GENERATION(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_SDID_GENERATION_SHIFT))&SIM_SDID_GENERATION_MASK)
/* PLATCGC Bit Fields */
#define SIM_PLATCGC_CGCMSCM_MASK                 0x1u
#define SIM_PLATCGC_CGCMSCM_SHIFT                0u
#define SIM_PLATCGC_CGCMSCM_WIDTH                1u
#define SIM_PLATCGC_CGCMSCM(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_PLATCGC_CGCMSCM_SHIFT))&SIM_PLATCGC_CGCMSCM_MASK)
#define SIM_PLATCGC_CGCMPU_MASK                  0x2u
#define SIM_PLATCGC_CGCMPU_SHIFT                 1u
#define SIM_PLATCGC_CGCMPU_WIDTH                 1u
#define SIM_PLATCGC_CGCMPU(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PLATCGC_CGCMPU_SHIFT))&SIM_PLATCGC_CGCMPU_MASK)
#define SIM_PLATCGC_CGCDMA_MASK                  0x4u
#define SIM_PLATCGC_CGCDMA_SHIFT                 2u
#define SIM_PLATCGC_CGCDMA_WIDTH                 1u
#define SIM_PLATCGC_CGCDMA(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PLATCGC_CGCDMA_SHIFT))&SIM_PLATCGC_CGCDMA_MASK)
#define SIM_PLATCGC_CGCERM_MASK                  0x8u
#define SIM_PLATCGC_CGCERM_SHIFT                 3u
#define SIM_PLATCGC_CGCERM_WIDTH                 1u
#define SIM_PLATCGC_CGCERM(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PLATCGC_CGCERM_SHIFT))&SIM_PLATCGC_CGCERM_MASK)
#define SIM_PLATCGC_CGCEIM_MASK                  0x10u
#define SIM_PLATCGC_CGCEIM_SHIFT                 4u
#define SIM_PLATCGC_CGCEIM_WIDTH                 1u
#define SIM_PLATCGC_CGCEIM(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PLATCGC_CGCEIM_SHIFT))&SIM_PLATCGC_CGCEIM_MASK)
/* FCFG1 Bit Fields */
#define SIM_FCFG1_DEPART_MASK                    0xF000u
#define SIM_FCFG1_DEPART_SHIFT                   12u
#define SIM_FCFG1_DEPART_WIDTH                   4u
#define SIM_FCFG1_DEPART(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_DEPART_SHIFT))&SIM_FCFG1_DEPART_MASK)
#define SIM_FCFG1_EEERAMSIZE_MASK                0xF0000u
#define SIM_FCFG1_EEERAMSIZE_SHIFT               16u
#define SIM_FCFG1_EEERAMSIZE_WIDTH               4u
#define SIM_FCFG1_EEERAMSIZE(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_FCFG1_EEERAMSIZE_SHIFT))&SIM_FCFG1_EEERAMSIZE_MASK)
/* UIDH Bit Fields */
#define SIM_UIDH_UID127_96_MASK                  0xFFFFFFFFu
#define SIM_UIDH_UID127_96_SHIFT                 0u
#define SIM_UIDH_UID127_96_WIDTH                 32u
#define SIM_UIDH_UID127_96(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_UIDH_UID127_96_SHIFT))&SIM_UIDH_UID127_96_MASK)
/* UIDMH Bit Fields */
#define SIM_UIDMH_UID95_64_MASK                  0xFFFFFFFFu
#define SIM_UIDMH_UID95_64_SHIFT                 0u
#define SIM_UIDMH_UID95_64_WIDTH                 32u
#define SIM_UIDMH_UID95_64(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_UIDMH_UID95_64_SHIFT))&SIM_UIDMH_UID95_64_MASK)
/* UIDML Bit Fields */
#define SIM_UIDML_UID63_32_MASK                  0xFFFFFFFFu
#define SIM_UIDML_UID63_32_SHIFT                 0u
#define SIM_UIDML_UID63_32_WIDTH                 32u
#define SIM_UIDML_UID63_32(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_UIDML_UID63_32_SHIFT))&SIM_UIDML_UID63_32_MASK)
/* UIDL Bit Fields */
#define SIM_UIDL_UID31_0_MASK                    0xFFFFFFFFu
#define SIM_UIDL_UID31_0_SHIFT                   0u
#define SIM_UIDL_UID31_0_WIDTH                   32u
#define SIM_UIDL_UID31_0(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_UIDL_UID31_0_SHIFT))&SIM_UIDL_UID31_0_MASK)
/* CLKDIV4 Bit Fields */
#define SIM_CLKDIV4_TRACEFRAC_MASK               0x1u
#define SIM_CLKDIV4_TRACEFRAC_SHIFT              0u
#define SIM_CLKDIV4_TRACEFRAC_WIDTH              1u
#define SIM_CLKDIV4_TRACEFRAC(x)                 (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV4_TRACEFRAC_SHIFT))&SIM_CLKDIV4_TRACEFRAC_MASK)
#define SIM_CLKDIV4_TRACEDIV_MASK                0xEu
#define SIM_CLKDIV4_TRACEDIV_SHIFT               1u
#define SIM_CLKDIV4_TRACEDIV_WIDTH               3u
#define SIM_CLKDIV4_TRACEDIV(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV4_TRACEDIV_SHIFT))&SIM_CLKDIV4_TRACEDIV_MASK)
#define SIM_CLKDIV4_TRACEDIVEN_MASK              0x10000000u
#define SIM_CLKDIV4_TRACEDIVEN_SHIFT             28u
#define SIM_CLKDIV4_TRACEDIVEN_WIDTH             1u
#define SIM_CLKDIV4_TRACEDIVEN(x)                (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV4_TRACEDIVEN_SHIFT))&SIM_CLKDIV4_TRACEDIVEN_MASK)
/* MISCTRL1 Bit Fields */
#define SIM_MISCTRL1_SW_TRG_MASK                 0x1u
#define SIM_MISCTRL1_SW_TRG_SHIFT                0u
#define SIM_MISCTRL1_SW_TRG_WIDTH                1u
#define SIM_MISCTRL1_SW_TRG(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_MISCTRL1_SW_TRG_SHIFT))&SIM_MISCTRL1_SW_TRG_MASK)

/*!
 * @}
 */ /* end of group SIM_Register_Masks */


/*!
 * @}
 */ /* end of group SIM_Peripheral_Access_Layer */

#endif /* S32K1XX_SIM_H_ */
