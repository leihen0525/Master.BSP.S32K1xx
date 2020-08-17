/*
 * S32K1xx.SCG.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_SCG_H_
#define S32K1XX_SCG_H_

#include "S32K1xx.Type.h"


typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t							:1;
		__I  uint32_t SOSC						:1;
		__I  uint32_t SIRC						:1;
		__I  uint32_t FIRC						:1;

		__I  uint32_t							:2;
		__I  uint32_t SPLL						:1;
		__I  uint32_t							:1;

		__I  uint32_t							:19;

		__I  uint32_t DIVSLOW					:1;
		__I  uint32_t DIVBUS					:1;
		__I  uint32_t							:2;
		__I  uint32_t DIVCORE					:1;
	}BIT;
}SCG_PARAM_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t DIVSLOW					:4;
		__I  uint32_t DIVBUS					:4;

		__I  uint32_t							:8;

		__I  uint32_t DIVCORE					:4;
		__I  uint32_t							:4;

		__I  uint32_t SCS						:4;
		__I  uint32_t							:4;
	}BIT;
}SCG_CSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DIVSLOW					:4;
		__IO uint32_t DIVBUS					:4;

		__IO uint32_t							:8;

		__IO uint32_t DIVCORE					:4;
		__IO uint32_t							:4;

		__IO uint32_t SCS						:4;
		__IO uint32_t							:4;
	}BIT;
}SCG_RCCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DIVSLOW					:4;
		__IO uint32_t DIVBUS					:4;

		__IO uint32_t							:8;

		__IO uint32_t DIVCORE					:4;
		__IO uint32_t							:4;

		__IO uint32_t SCS						:4;
		__IO uint32_t							:4;
	}BIT;
}SCG_VCCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DIVSLOW					:4;
		__IO uint32_t DIVBUS					:4;

		__IO uint32_t							:8;

		__IO uint32_t DIVCORE					:4;
		__IO uint32_t							:4;

		__IO uint32_t SCS						:4;
		__IO uint32_t							:4;
	}BIT;
}SCG_HCCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t							:24;

		__IO uint32_t CLKOUTSEL					:4;
		__IO uint32_t							:4;
	}BIT;
}SCG_CLKOUTCNFG_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SOSCEN					:1;
		__IO uint32_t							:15;

		__IO uint32_t SOSCCM					:1;
		__IO uint32_t SOSCCMRE					:1;
		__IO uint32_t							:5;
		__IO uint32_t LK						:1;

		__IO uint32_t SOSCVLD					:1;
		__IO uint32_t SOSCSEL					:1;
		__IO uint32_t SOSCERR					:1;
		__IO uint32_t							:5;

	}BIT;
}SCG_SOSCCSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SOSCDIV1					:3;
		__IO uint32_t							:5;

		__IO uint32_t SOSCDIV2					:3;
		__IO uint32_t							:5;

		__IO uint32_t							:16;
	}BIT;
}SCG_SOSCDIV_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t							:2;
		__IO uint32_t EREFS						:1;
		__IO uint32_t HGO						:1;
		__IO uint32_t RANGE						:2;
		__IO uint32_t							:2;

		__IO uint32_t							:24;
	}BIT;
}SCG_SOSCCFG_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SIRCEN					:1;
		__IO uint32_t SIRCSTEN					:1;
		__IO uint32_t SIRCLPEN					:1;
		__IO uint32_t							:20;
		__IO uint32_t LK						:1;

		__IO uint32_t SIRCVLD					:1;
		__IO uint32_t SIRCSEL					:1;
		__IO uint32_t							:6;
	}BIT;
}SCG_SIRCCSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SIRCDIV1					:3;
		__IO uint32_t							:5;

		__IO uint32_t SIRCDIV2					:3;
		__IO uint32_t							:5;

		__IO uint32_t							:16;
	}BIT;
}SCG_SIRCDIV_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RANGE						:1;
		__IO uint32_t							:31;
	}BIT;
}SCG_SIRCCFG_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FIRCEN					:1;
		__IO uint32_t							:2;
		__IO uint32_t FIRCREGOFF				:1;
		__IO uint32_t							:19;
		__IO uint32_t LK						:1;

		__IO uint32_t FIRCVLD					:1;
		__IO uint32_t FIRCSEL					:1;
		__IO uint32_t FIRCERR					:1;
		__IO uint32_t							:5;
	}BIT;
}SCG_FIRCCSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FIRCDIV1					:3;
		__IO uint32_t							:5;

		__IO uint32_t FIRCDIV2					:3;
		__IO uint32_t							:5;

		__IO uint32_t							:16;
	}BIT;
}SCG_FIRCDIV_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RANGE						:2;
		__IO uint32_t							:30;
	}BIT;
}SCG_FIRCCFG_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SPLLEN					:1;
		__IO uint32_t							:15;

		__IO uint32_t SPLLCM					:1;
		__IO uint32_t SPLLCMRE					:1;
		__IO uint32_t							:5;
		__IO uint32_t LK						:1;

		__IO uint32_t SPLLVLD					:1;
		__IO uint32_t SPLLSEL					:1;
		__IO uint32_t SPLLERR					:1;
		__IO uint32_t							:5;
	}BIT;
}SCG_SPLLCSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SPLLDIV1					:3;
		__IO uint32_t							:5;

		__IO uint32_t SPLLDIV2					:3;
		__IO uint32_t							:5;

		__IO uint32_t							:16;
	}BIT;
}SCG_SPLLDIV_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SOURCE					:1;
		__IO uint32_t							:7;

		__IO uint32_t PREDIV					:3;
		__IO uint32_t							:5;

		__IO uint32_t MULT						:5;
		__IO uint32_t							:11;
	}BIT;
}SCG_SPLLCFG_Type;
/* ----------------------------------------------------------------------------
   -- SCG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCG_Peripheral_Access_Layer SCG Peripheral Access Layer
 * @{
 */


/** SCG - Size of Registers Arrays */

/** SCG - Register Layout Typedef */
typedef struct
{
	__I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
	SCG_PARAM_Type PARAM;                             /**< Parameter Register, offset: 0x4 */
	uint8_t RESERVED_0[8];
	SCG_CSR_Type CSR;                               /**< Clock Status Register, offset: 0x10 */
	SCG_RCCR_Type RCCR;                              /**< Run Clock Control Register, offset: 0x14 */
	SCG_VCCR_Type VCCR;                              /**< VLPR Clock Control Register, offset: 0x18 */

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	uint8_t RESERVED_5[4];
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	SCG_HCCR_Type HCCR;                              /**< HSRUN Clock Control Register, offset: 0x1C */
#endif

	SCG_CLKOUTCNFG_Type CLKOUTCNFG;                        /**< SCG CLKOUT Configuration Register, offset: 0x20 */
	uint8_t RESERVED_1[220];
	SCG_SOSCCSR_Type SOSCCSR;                           /**< System OSC Control Status Register, offset: 0x100 */
	SCG_SOSCDIV_Type SOSCDIV;                           /**< System OSC Divide Register, offset: 0x104 */
	SCG_SOSCCFG_Type SOSCCFG;                           /**< System Oscillator Configuration Register, offset: 0x108 */
	uint8_t RESERVED_2[244];
	SCG_SIRCCSR_Type SIRCCSR;                           /**< Slow IRC Control Status Register, offset: 0x200 */
	SCG_SIRCDIV_Type SIRCDIV;                           /**< Slow IRC Divide Register, offset: 0x204 */
	SCG_SIRCCFG_Type SIRCCFG;                           /**< Slow IRC Configuration Register, offset: 0x208 */
	uint8_t RESERVED_3[244];
	SCG_FIRCCSR_Type FIRCCSR;                           /**< Fast IRC Control Status Register, offset: 0x300 */
	SCG_FIRCDIV_Type FIRCDIV;                           /**< Fast IRC Divide Register, offset: 0x304 */
	SCG_FIRCCFG_Type FIRCCFG;                           /**< Fast IRC Configuration Register, offset: 0x308 */

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	uint8_t RESERVED_4[756];
	SCG_SPLLCSR_Type SPLLCSR;                           /**< System PLL Control Status Register, offset: 0x600 */
	SCG_SPLLDIV_Type SPLLDIV;                           /**< System PLL Divide Register, offset: 0x604 */
	SCG_SPLLCFG_Type SPLLCFG;                           /**< System PLL Configuration Register, offset: 0x608 */
#endif

} SCG_Type, *SCG_MemMapPtr;

 /** Number of instances of the SCG module. */
#define SCG_INSTANCE_COUNT                       (1u)


/* SCG - Peripheral instance base addresses */
/** Peripheral SCG base address */
#define SCG_BASE                                 (0x40064000u)
/** Peripheral SCG base pointer */
#define SCG                                      ((SCG_Type *)SCG_BASE)
/** Array initializer of SCG peripheral base addresses */
#define SCG_BASE_ADDRS                           { SCG_BASE }
/** Array initializer of SCG peripheral base pointers */
#define SCG_BASE_PTRS                            { SCG }
 /** Number of interrupt vector arrays for the SCG module. */
#define SCG_IRQS_ARR_COUNT                       (1u)
 /** Number of interrupt channels for the SCG module. */
#define SCG_IRQS_CH_COUNT                        (1u)
/** Interrupt vectors for the SCG peripheral type */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))

#define SCG_IRQS                                 { SCG_CMU_LVD_LVWSCG_IRQn }

#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

#define SCG_IRQS                                 { SCG_IRQn }

#endif

/* ----------------------------------------------------------------------------
   -- SCG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCG_Register_Masks SCG Register Masks
 * @{
 */

/* VERID Bit Fields */
#define SCG_VERID_VERSION_MASK                   0xFFFFFFFFu
#define SCG_VERID_VERSION_SHIFT                  0u
#define SCG_VERID_VERSION_WIDTH                  32u
#define SCG_VERID_VERSION(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_VERID_VERSION_SHIFT))&SCG_VERID_VERSION_MASK)
/* PARAM Bit Fields */
#define SCG_PARAM_CLKPRES_MASK                   0xFFu
#define SCG_PARAM_CLKPRES_SHIFT                  0u
#define SCG_PARAM_CLKPRES_WIDTH                  8u
#define SCG_PARAM_CLKPRES(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_PARAM_CLKPRES_SHIFT))&SCG_PARAM_CLKPRES_MASK)
#define SCG_PARAM_DIVPRES_MASK                   0xF8000000u
#define SCG_PARAM_DIVPRES_SHIFT                  27u
#define SCG_PARAM_DIVPRES_WIDTH                  5u
#define SCG_PARAM_DIVPRES(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_PARAM_DIVPRES_SHIFT))&SCG_PARAM_DIVPRES_MASK)
/* CSR Bit Fields */
#define SCG_CSR_DIVSLOW_MASK                     0xFu
#define SCG_CSR_DIVSLOW_SHIFT                    0u
#define SCG_CSR_DIVSLOW_WIDTH                    4u
#define SCG_CSR_DIVSLOW(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_CSR_DIVSLOW_SHIFT))&SCG_CSR_DIVSLOW_MASK)
#define SCG_CSR_DIVBUS_MASK                      0xF0u
#define SCG_CSR_DIVBUS_SHIFT                     4u
#define SCG_CSR_DIVBUS_WIDTH                     4u
#define SCG_CSR_DIVBUS(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_CSR_DIVBUS_SHIFT))&SCG_CSR_DIVBUS_MASK)
#define SCG_CSR_DIVCORE_MASK                     0xF0000u
#define SCG_CSR_DIVCORE_SHIFT                    16u
#define SCG_CSR_DIVCORE_WIDTH                    4u
#define SCG_CSR_DIVCORE(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_CSR_DIVCORE_SHIFT))&SCG_CSR_DIVCORE_MASK)
#define SCG_CSR_SCS_MASK                         0xF000000u
#define SCG_CSR_SCS_SHIFT                        24u
#define SCG_CSR_SCS_WIDTH                        4u
#define SCG_CSR_SCS(x)                           (((uint32_t)(((uint32_t)(x))<<SCG_CSR_SCS_SHIFT))&SCG_CSR_SCS_MASK)
/* RCCR Bit Fields */
#define SCG_RCCR_DIVSLOW_MASK                    0xFu
#define SCG_RCCR_DIVSLOW_SHIFT                   0u
#define SCG_RCCR_DIVSLOW_WIDTH                   4u
#define SCG_RCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVSLOW_SHIFT))&SCG_RCCR_DIVSLOW_MASK)
#define SCG_RCCR_DIVBUS_MASK                     0xF0u
#define SCG_RCCR_DIVBUS_SHIFT                    4u
#define SCG_RCCR_DIVBUS_WIDTH                    4u
#define SCG_RCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVBUS_SHIFT))&SCG_RCCR_DIVBUS_MASK)
#define SCG_RCCR_DIVCORE_MASK                    0xF0000u
#define SCG_RCCR_DIVCORE_SHIFT                   16u
#define SCG_RCCR_DIVCORE_WIDTH                   4u
#define SCG_RCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_DIVCORE_SHIFT))&SCG_RCCR_DIVCORE_MASK)
#define SCG_RCCR_SCS_MASK                        0xF000000u
#define SCG_RCCR_SCS_SHIFT                       24u
#define SCG_RCCR_SCS_WIDTH                       4u
#define SCG_RCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_RCCR_SCS_SHIFT))&SCG_RCCR_SCS_MASK)
/* VCCR Bit Fields */
#define SCG_VCCR_DIVSLOW_MASK                    0xFu
#define SCG_VCCR_DIVSLOW_SHIFT                   0u
#define SCG_VCCR_DIVSLOW_WIDTH                   4u
#define SCG_VCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_DIVSLOW_SHIFT))&SCG_VCCR_DIVSLOW_MASK)
#define SCG_VCCR_DIVBUS_MASK                     0xF0u
#define SCG_VCCR_DIVBUS_SHIFT                    4u
#define SCG_VCCR_DIVBUS_WIDTH                    4u
#define SCG_VCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_DIVBUS_SHIFT))&SCG_VCCR_DIVBUS_MASK)
#define SCG_VCCR_DIVCORE_MASK                    0xF0000u
#define SCG_VCCR_DIVCORE_SHIFT                   16u
#define SCG_VCCR_DIVCORE_WIDTH                   4u
#define SCG_VCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_DIVCORE_SHIFT))&SCG_VCCR_DIVCORE_MASK)
#define SCG_VCCR_SCS_MASK                        0xF000000u
#define SCG_VCCR_SCS_SHIFT                       24u
#define SCG_VCCR_SCS_WIDTH                       4u
#define SCG_VCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_VCCR_SCS_SHIFT))&SCG_VCCR_SCS_MASK)

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/* HCCR Bit Fields */
#define SCG_HCCR_DIVSLOW_MASK                    0xFu
#define SCG_HCCR_DIVSLOW_SHIFT                   0u
#define SCG_HCCR_DIVSLOW_WIDTH                   4u
#define SCG_HCCR_DIVSLOW(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_HCCR_DIVSLOW_SHIFT))&SCG_HCCR_DIVSLOW_MASK)
#define SCG_HCCR_DIVBUS_MASK                     0xF0u
#define SCG_HCCR_DIVBUS_SHIFT                    4u
#define SCG_HCCR_DIVBUS_WIDTH                    4u
#define SCG_HCCR_DIVBUS(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_HCCR_DIVBUS_SHIFT))&SCG_HCCR_DIVBUS_MASK)
#define SCG_HCCR_DIVCORE_MASK                    0xF0000u
#define SCG_HCCR_DIVCORE_SHIFT                   16u
#define SCG_HCCR_DIVCORE_WIDTH                   4u
#define SCG_HCCR_DIVCORE(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_HCCR_DIVCORE_SHIFT))&SCG_HCCR_DIVCORE_MASK)
#define SCG_HCCR_SCS_MASK                        0xF000000u
#define SCG_HCCR_SCS_SHIFT                       24u
#define SCG_HCCR_SCS_WIDTH                       4u
#define SCG_HCCR_SCS(x)                          (((uint32_t)(((uint32_t)(x))<<SCG_HCCR_SCS_SHIFT))&SCG_HCCR_SCS_MASK)
#endif

/* CLKOUTCNFG Bit Fields */
#define SCG_CLKOUTCNFG_CLKOUTSEL_MASK            0xF000000u
#define SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT           24u
#define SCG_CLKOUTCNFG_CLKOUTSEL_WIDTH           4u
#define SCG_CLKOUTCNFG_CLKOUTSEL(x)              (((uint32_t)(((uint32_t)(x))<<SCG_CLKOUTCNFG_CLKOUTSEL_SHIFT))&SCG_CLKOUTCNFG_CLKOUTSEL_MASK)
/* SOSCCSR Bit Fields */
#define SCG_SOSCCSR_SOSCEN_MASK                  0x1u
#define SCG_SOSCCSR_SOSCEN_SHIFT                 0u
#define SCG_SOSCCSR_SOSCEN_WIDTH                 1u
#define SCG_SOSCCSR_SOSCEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCEN_SHIFT))&SCG_SOSCCSR_SOSCEN_MASK)
#define SCG_SOSCCSR_SOSCCM_MASK                  0x10000u
#define SCG_SOSCCSR_SOSCCM_SHIFT                 16u
#define SCG_SOSCCSR_SOSCCM_WIDTH                 1u
#define SCG_SOSCCSR_SOSCCM(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCCM_SHIFT))&SCG_SOSCCSR_SOSCCM_MASK)
#define SCG_SOSCCSR_SOSCCMRE_MASK                0x20000u
#define SCG_SOSCCSR_SOSCCMRE_SHIFT               17u
#define SCG_SOSCCSR_SOSCCMRE_WIDTH               1u
#define SCG_SOSCCSR_SOSCCMRE(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCCMRE_SHIFT))&SCG_SOSCCSR_SOSCCMRE_MASK)
#define SCG_SOSCCSR_LK_MASK                      0x800000u
#define SCG_SOSCCSR_LK_SHIFT                     23u
#define SCG_SOSCCSR_LK_WIDTH                     1u
#define SCG_SOSCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_LK_SHIFT))&SCG_SOSCCSR_LK_MASK)
#define SCG_SOSCCSR_SOSCVLD_MASK                 0x1000000u
#define SCG_SOSCCSR_SOSCVLD_SHIFT                24u
#define SCG_SOSCCSR_SOSCVLD_WIDTH                1u
#define SCG_SOSCCSR_SOSCVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCVLD_SHIFT))&SCG_SOSCCSR_SOSCVLD_MASK)
#define SCG_SOSCCSR_SOSCSEL_MASK                 0x2000000u
#define SCG_SOSCCSR_SOSCSEL_SHIFT                25u
#define SCG_SOSCCSR_SOSCSEL_WIDTH                1u
#define SCG_SOSCCSR_SOSCSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCSEL_SHIFT))&SCG_SOSCCSR_SOSCSEL_MASK)
#define SCG_SOSCCSR_SOSCERR_MASK                 0x4000000u
#define SCG_SOSCCSR_SOSCERR_SHIFT                26u
#define SCG_SOSCCSR_SOSCERR_WIDTH                1u
#define SCG_SOSCCSR_SOSCERR(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCSR_SOSCERR_SHIFT))&SCG_SOSCCSR_SOSCERR_MASK)
/* SOSCDIV Bit Fields */
#define SCG_SOSCDIV_SOSCDIV1_MASK                0x7u
#define SCG_SOSCDIV_SOSCDIV1_SHIFT               0u
#define SCG_SOSCDIV_SOSCDIV1_WIDTH               3u
#define SCG_SOSCDIV_SOSCDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCDIV_SOSCDIV1_SHIFT))&SCG_SOSCDIV_SOSCDIV1_MASK)
#define SCG_SOSCDIV_SOSCDIV2_MASK                0x700u
#define SCG_SOSCDIV_SOSCDIV2_SHIFT               8u
#define SCG_SOSCDIV_SOSCDIV2_WIDTH               3u
#define SCG_SOSCDIV_SOSCDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SOSCDIV_SOSCDIV2_SHIFT))&SCG_SOSCDIV_SOSCDIV2_MASK)
/* SOSCCFG Bit Fields */
#define SCG_SOSCCFG_EREFS_MASK                   0x4u
#define SCG_SOSCCFG_EREFS_SHIFT                  2u
#define SCG_SOSCCFG_EREFS_WIDTH                  1u
#define SCG_SOSCCFG_EREFS(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCFG_EREFS_SHIFT))&SCG_SOSCCFG_EREFS_MASK)
#define SCG_SOSCCFG_HGO_MASK                     0x8u
#define SCG_SOSCCFG_HGO_SHIFT                    3u
#define SCG_SOSCCFG_HGO_WIDTH                    1u
#define SCG_SOSCCFG_HGO(x)                       (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCFG_HGO_SHIFT))&SCG_SOSCCFG_HGO_MASK)
#define SCG_SOSCCFG_RANGE_MASK                   0x30u
#define SCG_SOSCCFG_RANGE_SHIFT                  4u
#define SCG_SOSCCFG_RANGE_WIDTH                  2u
#define SCG_SOSCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_SOSCCFG_RANGE_SHIFT))&SCG_SOSCCFG_RANGE_MASK)
/* SIRCCSR Bit Fields */
#define SCG_SIRCCSR_SIRCEN_MASK                  0x1u
#define SCG_SIRCCSR_SIRCEN_SHIFT                 0u
#define SCG_SIRCCSR_SIRCEN_WIDTH                 1u
#define SCG_SIRCCSR_SIRCEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCEN_SHIFT))&SCG_SIRCCSR_SIRCEN_MASK)
#define SCG_SIRCCSR_SIRCSTEN_MASK                0x2u
#define SCG_SIRCCSR_SIRCSTEN_SHIFT               1u
#define SCG_SIRCCSR_SIRCSTEN_WIDTH               1u
#define SCG_SIRCCSR_SIRCSTEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCSTEN_SHIFT))&SCG_SIRCCSR_SIRCSTEN_MASK)
#define SCG_SIRCCSR_SIRCLPEN_MASK                0x4u
#define SCG_SIRCCSR_SIRCLPEN_SHIFT               2u
#define SCG_SIRCCSR_SIRCLPEN_WIDTH               1u
#define SCG_SIRCCSR_SIRCLPEN(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCLPEN_SHIFT))&SCG_SIRCCSR_SIRCLPEN_MASK)
#define SCG_SIRCCSR_LK_MASK                      0x800000u
#define SCG_SIRCCSR_LK_SHIFT                     23u
#define SCG_SIRCCSR_LK_WIDTH                     1u
#define SCG_SIRCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_LK_SHIFT))&SCG_SIRCCSR_LK_MASK)
#define SCG_SIRCCSR_SIRCVLD_MASK                 0x1000000u
#define SCG_SIRCCSR_SIRCVLD_SHIFT                24u
#define SCG_SIRCCSR_SIRCVLD_WIDTH                1u
#define SCG_SIRCCSR_SIRCVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCVLD_SHIFT))&SCG_SIRCCSR_SIRCVLD_MASK)
#define SCG_SIRCCSR_SIRCSEL_MASK                 0x2000000u
#define SCG_SIRCCSR_SIRCSEL_SHIFT                25u
#define SCG_SIRCCSR_SIRCSEL_WIDTH                1u
#define SCG_SIRCCSR_SIRCSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCSR_SIRCSEL_SHIFT))&SCG_SIRCCSR_SIRCSEL_MASK)
/* SIRCDIV Bit Fields */
#define SCG_SIRCDIV_SIRCDIV1_MASK                0x7u
#define SCG_SIRCDIV_SIRCDIV1_SHIFT               0u
#define SCG_SIRCDIV_SIRCDIV1_WIDTH               3u
#define SCG_SIRCDIV_SIRCDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCDIV_SIRCDIV1_SHIFT))&SCG_SIRCDIV_SIRCDIV1_MASK)
#define SCG_SIRCDIV_SIRCDIV2_MASK                0x700u
#define SCG_SIRCDIV_SIRCDIV2_SHIFT               8u
#define SCG_SIRCDIV_SIRCDIV2_WIDTH               3u
#define SCG_SIRCDIV_SIRCDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SIRCDIV_SIRCDIV2_SHIFT))&SCG_SIRCDIV_SIRCDIV2_MASK)
/* SIRCCFG Bit Fields */
#define SCG_SIRCCFG_RANGE_MASK                   0x1u
#define SCG_SIRCCFG_RANGE_SHIFT                  0u
#define SCG_SIRCCFG_RANGE_WIDTH                  1u
#define SCG_SIRCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_SIRCCFG_RANGE_SHIFT))&SCG_SIRCCFG_RANGE_MASK)
/* FIRCCSR Bit Fields */
#define SCG_FIRCCSR_FIRCEN_MASK                  0x1u
#define SCG_FIRCCSR_FIRCEN_SHIFT                 0u
#define SCG_FIRCCSR_FIRCEN_WIDTH                 1u
#define SCG_FIRCCSR_FIRCEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCEN_SHIFT))&SCG_FIRCCSR_FIRCEN_MASK)
#define SCG_FIRCCSR_FIRCREGOFF_MASK              0x8u
#define SCG_FIRCCSR_FIRCREGOFF_SHIFT             3u
#define SCG_FIRCCSR_FIRCREGOFF_WIDTH             1u
#define SCG_FIRCCSR_FIRCREGOFF(x)                (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCREGOFF_SHIFT))&SCG_FIRCCSR_FIRCREGOFF_MASK)
#define SCG_FIRCCSR_LK_MASK                      0x800000u
#define SCG_FIRCCSR_LK_SHIFT                     23u
#define SCG_FIRCCSR_LK_WIDTH                     1u
#define SCG_FIRCCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_LK_SHIFT))&SCG_FIRCCSR_LK_MASK)
#define SCG_FIRCCSR_FIRCVLD_MASK                 0x1000000u
#define SCG_FIRCCSR_FIRCVLD_SHIFT                24u
#define SCG_FIRCCSR_FIRCVLD_WIDTH                1u
#define SCG_FIRCCSR_FIRCVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCVLD_SHIFT))&SCG_FIRCCSR_FIRCVLD_MASK)
#define SCG_FIRCCSR_FIRCSEL_MASK                 0x2000000u
#define SCG_FIRCCSR_FIRCSEL_SHIFT                25u
#define SCG_FIRCCSR_FIRCSEL_WIDTH                1u
#define SCG_FIRCCSR_FIRCSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCSEL_SHIFT))&SCG_FIRCCSR_FIRCSEL_MASK)
#define SCG_FIRCCSR_FIRCERR_MASK                 0x4000000u
#define SCG_FIRCCSR_FIRCERR_SHIFT                26u
#define SCG_FIRCCSR_FIRCERR_WIDTH                1u
#define SCG_FIRCCSR_FIRCERR(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCSR_FIRCERR_SHIFT))&SCG_FIRCCSR_FIRCERR_MASK)
/* FIRCDIV Bit Fields */
#define SCG_FIRCDIV_FIRCDIV1_MASK                0x7u
#define SCG_FIRCDIV_FIRCDIV1_SHIFT               0u
#define SCG_FIRCDIV_FIRCDIV1_WIDTH               3u
#define SCG_FIRCDIV_FIRCDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCDIV_FIRCDIV1_SHIFT))&SCG_FIRCDIV_FIRCDIV1_MASK)
#define SCG_FIRCDIV_FIRCDIV2_MASK                0x700u
#define SCG_FIRCDIV_FIRCDIV2_SHIFT               8u
#define SCG_FIRCDIV_FIRCDIV2_WIDTH               3u
#define SCG_FIRCDIV_FIRCDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_FIRCDIV_FIRCDIV2_SHIFT))&SCG_FIRCDIV_FIRCDIV2_MASK)
/* FIRCCFG Bit Fields */
#define SCG_FIRCCFG_RANGE_MASK                   0x3u
#define SCG_FIRCCFG_RANGE_SHIFT                  0u
#define SCG_FIRCCFG_RANGE_WIDTH                  2u
#define SCG_FIRCCFG_RANGE(x)                     (((uint32_t)(((uint32_t)(x))<<SCG_FIRCCFG_RANGE_SHIFT))&SCG_FIRCCFG_RANGE_MASK)

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/* SPLLCSR Bit Fields */
#define SCG_SPLLCSR_SPLLEN_MASK                  0x1u
#define SCG_SPLLCSR_SPLLEN_SHIFT                 0u
#define SCG_SPLLCSR_SPLLEN_WIDTH                 1u
#define SCG_SPLLCSR_SPLLEN(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_SPLLEN_SHIFT))&SCG_SPLLCSR_SPLLEN_MASK)
#define SCG_SPLLCSR_SPLLCM_MASK                  0x10000u
#define SCG_SPLLCSR_SPLLCM_SHIFT                 16u
#define SCG_SPLLCSR_SPLLCM_WIDTH                 1u
#define SCG_SPLLCSR_SPLLCM(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_SPLLCM_SHIFT))&SCG_SPLLCSR_SPLLCM_MASK)
#define SCG_SPLLCSR_SPLLCMRE_MASK                0x20000u
#define SCG_SPLLCSR_SPLLCMRE_SHIFT               17u
#define SCG_SPLLCSR_SPLLCMRE_WIDTH               1u
#define SCG_SPLLCSR_SPLLCMRE(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_SPLLCMRE_SHIFT))&SCG_SPLLCSR_SPLLCMRE_MASK)
#define SCG_SPLLCSR_LK_MASK                      0x800000u
#define SCG_SPLLCSR_LK_SHIFT                     23u
#define SCG_SPLLCSR_LK_WIDTH                     1u
#define SCG_SPLLCSR_LK(x)                        (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_LK_SHIFT))&SCG_SPLLCSR_LK_MASK)
#define SCG_SPLLCSR_SPLLVLD_MASK                 0x1000000u
#define SCG_SPLLCSR_SPLLVLD_SHIFT                24u
#define SCG_SPLLCSR_SPLLVLD_WIDTH                1u
#define SCG_SPLLCSR_SPLLVLD(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_SPLLVLD_SHIFT))&SCG_SPLLCSR_SPLLVLD_MASK)
#define SCG_SPLLCSR_SPLLSEL_MASK                 0x2000000u
#define SCG_SPLLCSR_SPLLSEL_SHIFT                25u
#define SCG_SPLLCSR_SPLLSEL_WIDTH                1u
#define SCG_SPLLCSR_SPLLSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_SPLLSEL_SHIFT))&SCG_SPLLCSR_SPLLSEL_MASK)
#define SCG_SPLLCSR_SPLLERR_MASK                 0x4000000u
#define SCG_SPLLCSR_SPLLERR_SHIFT                26u
#define SCG_SPLLCSR_SPLLERR_WIDTH                1u
#define SCG_SPLLCSR_SPLLERR(x)                   (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCSR_SPLLERR_SHIFT))&SCG_SPLLCSR_SPLLERR_MASK)
/* SPLLDIV Bit Fields */
#define SCG_SPLLDIV_SPLLDIV1_MASK                0x7u
#define SCG_SPLLDIV_SPLLDIV1_SHIFT               0u
#define SCG_SPLLDIV_SPLLDIV1_WIDTH               3u
#define SCG_SPLLDIV_SPLLDIV1(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SPLLDIV_SPLLDIV1_SHIFT))&SCG_SPLLDIV_SPLLDIV1_MASK)
#define SCG_SPLLDIV_SPLLDIV2_MASK                0x700u
#define SCG_SPLLDIV_SPLLDIV2_SHIFT               8u
#define SCG_SPLLDIV_SPLLDIV2_WIDTH               3u
#define SCG_SPLLDIV_SPLLDIV2(x)                  (((uint32_t)(((uint32_t)(x))<<SCG_SPLLDIV_SPLLDIV2_SHIFT))&SCG_SPLLDIV_SPLLDIV2_MASK)
/* SPLLCFG Bit Fields */
#define SCG_SPLLCFG_PREDIV_MASK                  0x700u
#define SCG_SPLLCFG_PREDIV_SHIFT                 8u
#define SCG_SPLLCFG_PREDIV_WIDTH                 3u
#define SCG_SPLLCFG_PREDIV(x)                    (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCFG_PREDIV_SHIFT))&SCG_SPLLCFG_PREDIV_MASK)
#define SCG_SPLLCFG_MULT_MASK                    0x1F0000u
#define SCG_SPLLCFG_MULT_SHIFT                   16u
#define SCG_SPLLCFG_MULT_WIDTH                   5u
#define SCG_SPLLCFG_MULT(x)                      (((uint32_t)(((uint32_t)(x))<<SCG_SPLLCFG_MULT_SHIFT))&SCG_SPLLCFG_MULT_MASK)

#endif

/*!
 * @}
 */ /* end of group SCG_Register_Masks */


/*!
 * @}
 */ /* end of group SCG_Peripheral_Access_Layer */

#endif /* S32K1XX_SCG_H_ */
