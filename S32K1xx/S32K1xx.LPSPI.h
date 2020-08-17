/*
 * S32K1xx.LPSPI.h
 *
 *  Created on: 2020年7月20日
 *      Author: Master.HE
 */

#ifndef S32K1XX_LPSPI_H_
#define S32K1XX_LPSPI_H_

#include "S32K1xx.Type.h"

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t FEATURE							:16;
		__I  uint32_t MINOR								:8;
		__I  uint32_t MAJOR								:8;
	}BIT;
}LPSPI_VERID_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t TXFIFO							:8;
		__I  uint32_t RXFIFO							:8;
		__I  uint32_t									:16;
	}BIT;
}LPSPI_PARAM_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t MEN								:1;
		__IO uint32_t RST								:1;
		__IO uint32_t DOZEN								:1;
		__IO uint32_t DBGEN								:1;
		__IO uint32_t									:4;

		__IO uint32_t RTF								:1;
		__IO uint32_t RRF								:1;
		__IO uint32_t									:6;

		__IO uint32_t									:16;
	}BIT;
}LPSPI_CR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDF								:1;
		__IO uint32_t RDF								:1;
		__IO uint32_t									:6;

		__IO uint32_t WCF								:1;
		__IO uint32_t FCF								:1;
		__IO uint32_t TCF								:1;
		__IO uint32_t TEF								:1;
		__IO uint32_t REF								:1;
		__IO uint32_t DMF								:1;
		__IO uint32_t									:2;

		__IO uint32_t									:8;

		__IO uint32_t MBF								:1;
		__IO uint32_t									:7;
	}BIT;
}LPSPI_SR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDIE								:1;
		__IO uint32_t RDIE								:1;
		__IO uint32_t									:6;

		__IO uint32_t WCIE								:1;
		__IO uint32_t FCIE								:1;
		__IO uint32_t TCIE								:1;
		__IO uint32_t TEIE								:1;
		__IO uint32_t REIE								:1;
		__IO uint32_t DMIE								:1;
		__IO uint32_t									:2;

		__IO uint32_t									:16;
	}BIT;
}LPSPI_IER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDDE								:1;
		__IO uint32_t RDDE								:1;
		__IO uint32_t									:30;
	}BIT;
}LPSPI_DER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t HREN								:1;
		__IO uint32_t HRPOL								:1;
		__IO uint32_t HRSEL								:1;
		__IO uint32_t									:1;
		__IO uint32_t									:4;

		__IO uint32_t CIRFIFO							:1;
		__IO uint32_t RDMO								:1;
		__IO uint32_t									:6;

		__IO uint32_t									:16;
	}BIT;
}LPSPI_CFGR0_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t MASTER							:1;
		__IO uint32_t SAMPLE							:1;
		__IO uint32_t AUTOPCS							:1;
		__IO uint32_t NOSTALL							:1;
		__IO uint32_t									:1;
		__IO uint32_t									:3;

		__IO uint32_t PCSPOL							:4;
		__IO uint32_t									:4;

		__IO uint32_t MATCFG							:3;
		__IO uint32_t									:5;

		__IO uint32_t PINCFG							:2;
		__IO uint32_t OUTCFG							:1;
		__IO uint32_t PCSCFG							:1;
		__IO uint32_t									:1;
		__IO uint32_t									:3;
	}BIT;
}LPSPI_CFGR1_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SCKDIV							:8;
		__IO uint32_t DBT								:8;
		__IO uint32_t PCSSCK							:8;
		__IO uint32_t SCKPCS							:8;
	}BIT;
}LPSPI_CCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TXWATER							:2;
		__IO uint32_t									:6;

		__IO uint32_t									:8;

		__IO uint32_t RXWATER							:2;
		__IO uint32_t									:6;

		__IO uint32_t									:8;
	}BIT;
}LPSPI_FCR_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t TXCOUNT							:3;
		__I  uint32_t									:5;

		__I  uint32_t									:8;

		__I  uint32_t RXCOUNT							:3;
		__I  uint32_t									:5;

		__I  uint32_t									:8;
	}BIT;
}LPSPI_FSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t FRAMESZ							:12;
		__IO uint32_t									:4;

		__IO uint32_t WIDTH								:2;
		__IO uint32_t TXMSK								:1;
		__IO uint32_t RXMSK								:1;
		__IO uint32_t CONTC								:1;
		__IO uint32_t CONT								:1;
		__IO uint32_t BYSW								:1;
		__IO uint32_t LSBF								:1;

		__IO uint32_t PCS								:2;
		__IO uint32_t									:1;
		__IO uint32_t PRESCALE							:3;
		__IO uint32_t CPHA								:1;
		__IO uint32_t CPOL								:1;
	}BIT;
}LPSPI_TCR_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t SOF								:1;
		__I  uint32_t RXEMPTY							:1;
		__I  uint32_t									:30;
	}BIT;
}LPSPI_RSR_Type;



/* ----------------------------------------------------------------------------
   -- LPSPI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Peripheral_Access_Layer LPSPI Peripheral Access Layer
 * @{
 */


/** LPSPI - Size of Registers Arrays */

/** LPSPI - Register Layout Typedef */
typedef struct {
	LPSPI_VERID_Type VERID;                             /**< Version ID Register, offset: 0x0 */
	LPSPI_PARAM_Type PARAM;                             /**< Parameter Register, offset: 0x4 */
	uint8_t RESERVED_0[8];
	LPSPI_CR_Type CR;                                /**< Control Register, offset: 0x10 */
	LPSPI_SR_Type SR;                                /**< Status Register, offset: 0x14 */
	LPSPI_IER_Type IER;                               /**< Interrupt Enable Register, offset: 0x18 */
	LPSPI_DER_Type DER;                               /**< DMA Enable Register, offset: 0x1C */
	LPSPI_CFGR0_Type CFGR0;                             /**< Configuration Register 0, offset: 0x20 */
	LPSPI_CFGR1_Type CFGR1;                             /**< Configuration Register 1, offset: 0x24 */
	uint8_t RESERVED_1[8];
	__IO uint32_t DMR0;                              /**< Data Match Register 0, offset: 0x30 */
	__IO uint32_t DMR1;                              /**< Data Match Register 1, offset: 0x34 */
	uint8_t RESERVED_2[8];
	LPSPI_CCR_Type CCR;                               /**< Clock Configuration Register, offset: 0x40 */
	uint8_t RESERVED_3[20];
	LPSPI_FCR_Type FCR;                               /**< FIFO Control Register, offset: 0x58 */
	LPSPI_FSR_Type FSR;                               /**< FIFO Status Register, offset: 0x5C */
	LPSPI_TCR_Type TCR;                               /**< Transmit Command Register, offset: 0x60 */
	__O  uint32_t TDR;                               /**< Transmit Data Register, offset: 0x64 */
	uint8_t RESERVED_4[8];
	LPSPI_RSR_Type RSR;                               /**< Receive Status Register, offset: 0x70 */
	__I  uint32_t RDR;                               /**< Receive Data Register, offset: 0x74 */
} LPSPI_Type, *LPSPI_MemMapPtr;

 /** Number of instances of the LPSPI module. */
#if (defined (__Target_S32K116__))
#define LPSPI_INSTANCE_COUNT                     (1u)
#elif (defined (__Target_S32K118__) || defined (__Target_S32K142__))
#define LPSPI_INSTANCE_COUNT                     (2u)
#elif (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define LPSPI_INSTANCE_COUNT                     (3u)
#endif

/* LPSPI - Peripheral instance base addresses */
/** Peripheral LPSPI0 base address */
#define LPSPI0_BASE                              (0x4002C000u)
/** Peripheral LPSPI0 base pointer */
#define LPSPI0                                   ((LPSPI_Type *)LPSPI0_BASE)

#if (defined (__Target_S32K116__))
/** Array initializer of LPSPI peripheral base addresses */
#define LPSPI_BASE_ADDRS                         { LPSPI0_BASE }
/** Array initializer of LPSPI peripheral base pointers */
#define LPSPI_BASE_PTRS                          { LPSPI0 }
#elif (defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Peripheral LPSPI1 base address */
#define LPSPI1_BASE                              (0x4002D000u)
/** Peripheral LPSPI1 base pointer */
#define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Peripheral LPSPI2 base address */
#define LPSPI2_BASE                              (0x4002E000u)
/** Peripheral LPSPI2 base pointer */
#define LPSPI2                                   ((LPSPI_Type *)LPSPI2_BASE)
#endif

#if(defined (__Target_S32K118__) || defined (__Target_S32K142__))
/** Array initializer of LPSPI peripheral base addresses */
#define LPSPI_BASE_ADDRS                         { LPSPI0_BASE, LPSPI1_BASE }
/** Array initializer of LPSPI peripheral base pointers */
#define LPSPI_BASE_PTRS                          { LPSPI0, LPSPI1 }
#elif (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Array initializer of LPSPI peripheral base addresses */
#define LPSPI_BASE_ADDRS                         { LPSPI0_BASE, LPSPI1_BASE, LPSPI2_BASE }
/** Array initializer of LPSPI peripheral base pointers */
#define LPSPI_BASE_PTRS                          { LPSPI0, LPSPI1, LPSPI2 }
#endif
#endif

 /** Number of interrupt vector arrays for the LPSPI module. */
#define LPSPI_IRQS_ARR_COUNT                     (1u)
 /** Number of interrupt channels for the LPSPI module. */
#define LPSPI_IRQS_CH_COUNT                      (1u)
/** Interrupt vectors for the LPSPI peripheral type */
#if (defined (__Target_S32K116__))
#define LPSPI_IRQS                               { LPSPI0_IRQn }
#elif (defined (__Target_S32K118__) || defined (__Target_S32K142__))
#define LPSPI_IRQS                               { LPSPI0_IRQn, LPSPI1_IRQn }
#elif (defined (defined (__Target_S32K144__) || __Target_S32K146__) || defined (__Target_S32K148__))
#define LPSPI_IRQS                               { LPSPI0_IRQn, LPSPI1_IRQn, LPSPI2_IRQn }
#endif
/* ----------------------------------------------------------------------------
   -- LPSPI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Register_Masks LPSPI Register Masks
 * @{
 */

/* VERID Bit Fields */
#define LPSPI_VERID_FEATURE_MASK                 0xFFFFu
#define LPSPI_VERID_FEATURE_SHIFT                0u
#define LPSPI_VERID_FEATURE_WIDTH                16u
#define LPSPI_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI_VERID_FEATURE_SHIFT))&LPSPI_VERID_FEATURE_MASK)
#define LPSPI_VERID_MINOR_MASK                   0xFF0000u
#define LPSPI_VERID_MINOR_SHIFT                  16u
#define LPSPI_VERID_MINOR_WIDTH                  8u
#define LPSPI_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_VERID_MINOR_SHIFT))&LPSPI_VERID_MINOR_MASK)
#define LPSPI_VERID_MAJOR_MASK                   0xFF000000u
#define LPSPI_VERID_MAJOR_SHIFT                  24u
#define LPSPI_VERID_MAJOR_WIDTH                  8u
#define LPSPI_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_VERID_MAJOR_SHIFT))&LPSPI_VERID_MAJOR_MASK)
/* PARAM Bit Fields */
#define LPSPI_PARAM_TXFIFO_MASK                  0xFFu
#define LPSPI_PARAM_TXFIFO_SHIFT                 0u
#define LPSPI_PARAM_TXFIFO_WIDTH                 8u
#define LPSPI_PARAM_TXFIFO(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_PARAM_TXFIFO_SHIFT))&LPSPI_PARAM_TXFIFO_MASK)
#define LPSPI_PARAM_RXFIFO_MASK                  0xFF00u
#define LPSPI_PARAM_RXFIFO_SHIFT                 8u
#define LPSPI_PARAM_RXFIFO_WIDTH                 8u
#define LPSPI_PARAM_RXFIFO(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_PARAM_RXFIFO_SHIFT))&LPSPI_PARAM_RXFIFO_MASK)
/* CR Bit Fields */
#define LPSPI_CR_MEN_MASK                        0x1u
#define LPSPI_CR_MEN_SHIFT                       0u
#define LPSPI_CR_MEN_WIDTH                       1u
#define LPSPI_CR_MEN(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_CR_MEN_SHIFT))&LPSPI_CR_MEN_MASK)
#define LPSPI_CR_RST_MASK                        0x2u
#define LPSPI_CR_RST_SHIFT                       1u
#define LPSPI_CR_RST_WIDTH                       1u
#define LPSPI_CR_RST(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_CR_RST_SHIFT))&LPSPI_CR_RST_MASK)
#define LPSPI_CR_DOZEN_MASK                      0x4u
#define LPSPI_CR_DOZEN_SHIFT                     2u
#define LPSPI_CR_DOZEN_WIDTH                     1u
#define LPSPI_CR_DOZEN(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_CR_DOZEN_SHIFT))&LPSPI_CR_DOZEN_MASK)
#define LPSPI_CR_DBGEN_MASK                      0x8u
#define LPSPI_CR_DBGEN_SHIFT                     3u
#define LPSPI_CR_DBGEN_WIDTH                     1u
#define LPSPI_CR_DBGEN(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_CR_DBGEN_SHIFT))&LPSPI_CR_DBGEN_MASK)
#define LPSPI_CR_RTF_MASK                        0x100u
#define LPSPI_CR_RTF_SHIFT                       8u
#define LPSPI_CR_RTF_WIDTH                       1u
#define LPSPI_CR_RTF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_CR_RTF_SHIFT))&LPSPI_CR_RTF_MASK)
#define LPSPI_CR_RRF_MASK                        0x200u
#define LPSPI_CR_RRF_SHIFT                       9u
#define LPSPI_CR_RRF_WIDTH                       1u
#define LPSPI_CR_RRF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_CR_RRF_SHIFT))&LPSPI_CR_RRF_MASK)
/* SR Bit Fields */
#define LPSPI_SR_TDF_MASK                        0x1u
#define LPSPI_SR_TDF_SHIFT                       0u
#define LPSPI_SR_TDF_WIDTH                       1u
#define LPSPI_SR_TDF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_TDF_SHIFT))&LPSPI_SR_TDF_MASK)
#define LPSPI_SR_RDF_MASK                        0x2u
#define LPSPI_SR_RDF_SHIFT                       1u
#define LPSPI_SR_RDF_WIDTH                       1u
#define LPSPI_SR_RDF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_RDF_SHIFT))&LPSPI_SR_RDF_MASK)
#define LPSPI_SR_WCF_MASK                        0x100u
#define LPSPI_SR_WCF_SHIFT                       8u
#define LPSPI_SR_WCF_WIDTH                       1u
#define LPSPI_SR_WCF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_WCF_SHIFT))&LPSPI_SR_WCF_MASK)
#define LPSPI_SR_FCF_MASK                        0x200u
#define LPSPI_SR_FCF_SHIFT                       9u
#define LPSPI_SR_FCF_WIDTH                       1u
#define LPSPI_SR_FCF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_FCF_SHIFT))&LPSPI_SR_FCF_MASK)
#define LPSPI_SR_TCF_MASK                        0x400u
#define LPSPI_SR_TCF_SHIFT                       10u
#define LPSPI_SR_TCF_WIDTH                       1u
#define LPSPI_SR_TCF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_TCF_SHIFT))&LPSPI_SR_TCF_MASK)
#define LPSPI_SR_TEF_MASK                        0x800u
#define LPSPI_SR_TEF_SHIFT                       11u
#define LPSPI_SR_TEF_WIDTH                       1u
#define LPSPI_SR_TEF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_TEF_SHIFT))&LPSPI_SR_TEF_MASK)
#define LPSPI_SR_REF_MASK                        0x1000u
#define LPSPI_SR_REF_SHIFT                       12u
#define LPSPI_SR_REF_WIDTH                       1u
#define LPSPI_SR_REF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_REF_SHIFT))&LPSPI_SR_REF_MASK)
#define LPSPI_SR_DMF_MASK                        0x2000u
#define LPSPI_SR_DMF_SHIFT                       13u
#define LPSPI_SR_DMF_WIDTH                       1u
#define LPSPI_SR_DMF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_DMF_SHIFT))&LPSPI_SR_DMF_MASK)
#define LPSPI_SR_MBF_MASK                        0x1000000u
#define LPSPI_SR_MBF_SHIFT                       24u
#define LPSPI_SR_MBF_WIDTH                       1u
#define LPSPI_SR_MBF(x)                          (((uint32_t)(((uint32_t)(x))<<LPSPI_SR_MBF_SHIFT))&LPSPI_SR_MBF_MASK)
/* IER Bit Fields */
#define LPSPI_IER_TDIE_MASK                      0x1u
#define LPSPI_IER_TDIE_SHIFT                     0u
#define LPSPI_IER_TDIE_WIDTH                     1u
#define LPSPI_IER_TDIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_TDIE_SHIFT))&LPSPI_IER_TDIE_MASK)
#define LPSPI_IER_RDIE_MASK                      0x2u
#define LPSPI_IER_RDIE_SHIFT                     1u
#define LPSPI_IER_RDIE_WIDTH                     1u
#define LPSPI_IER_RDIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_RDIE_SHIFT))&LPSPI_IER_RDIE_MASK)
#define LPSPI_IER_WCIE_MASK                      0x100u
#define LPSPI_IER_WCIE_SHIFT                     8u
#define LPSPI_IER_WCIE_WIDTH                     1u
#define LPSPI_IER_WCIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_WCIE_SHIFT))&LPSPI_IER_WCIE_MASK)
#define LPSPI_IER_FCIE_MASK                      0x200u
#define LPSPI_IER_FCIE_SHIFT                     9u
#define LPSPI_IER_FCIE_WIDTH                     1u
#define LPSPI_IER_FCIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_FCIE_SHIFT))&LPSPI_IER_FCIE_MASK)
#define LPSPI_IER_TCIE_MASK                      0x400u
#define LPSPI_IER_TCIE_SHIFT                     10u
#define LPSPI_IER_TCIE_WIDTH                     1u
#define LPSPI_IER_TCIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_TCIE_SHIFT))&LPSPI_IER_TCIE_MASK)
#define LPSPI_IER_TEIE_MASK                      0x800u
#define LPSPI_IER_TEIE_SHIFT                     11u
#define LPSPI_IER_TEIE_WIDTH                     1u
#define LPSPI_IER_TEIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_TEIE_SHIFT))&LPSPI_IER_TEIE_MASK)
#define LPSPI_IER_REIE_MASK                      0x1000u
#define LPSPI_IER_REIE_SHIFT                     12u
#define LPSPI_IER_REIE_WIDTH                     1u
#define LPSPI_IER_REIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_REIE_SHIFT))&LPSPI_IER_REIE_MASK)
#define LPSPI_IER_DMIE_MASK                      0x2000u
#define LPSPI_IER_DMIE_SHIFT                     13u
#define LPSPI_IER_DMIE_WIDTH                     1u
#define LPSPI_IER_DMIE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_IER_DMIE_SHIFT))&LPSPI_IER_DMIE_MASK)
/* DER Bit Fields */
#define LPSPI_DER_TDDE_MASK                      0x1u
#define LPSPI_DER_TDDE_SHIFT                     0u
#define LPSPI_DER_TDDE_WIDTH                     1u
#define LPSPI_DER_TDDE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_DER_TDDE_SHIFT))&LPSPI_DER_TDDE_MASK)
#define LPSPI_DER_RDDE_MASK                      0x2u
#define LPSPI_DER_RDDE_SHIFT                     1u
#define LPSPI_DER_RDDE_WIDTH                     1u
#define LPSPI_DER_RDDE(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_DER_RDDE_SHIFT))&LPSPI_DER_RDDE_MASK)
/* CFGR0 Bit Fields */
#define LPSPI_CFGR0_HREN_MASK                    0x1u
#define LPSPI_CFGR0_HREN_SHIFT                   0u
#define LPSPI_CFGR0_HREN_WIDTH                   1u
#define LPSPI_CFGR0_HREN(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR0_HREN_SHIFT))&LPSPI_CFGR0_HREN_MASK)
#define LPSPI_CFGR0_HRPOL_MASK                   0x2u
#define LPSPI_CFGR0_HRPOL_SHIFT                  1u
#define LPSPI_CFGR0_HRPOL_WIDTH                  1u
#define LPSPI_CFGR0_HRPOL(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR0_HRPOL_SHIFT))&LPSPI_CFGR0_HRPOL_MASK)
#define LPSPI_CFGR0_HRSEL_MASK                   0x4u
#define LPSPI_CFGR0_HRSEL_SHIFT                  2u
#define LPSPI_CFGR0_HRSEL_WIDTH                  1u
#define LPSPI_CFGR0_HRSEL(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR0_HRSEL_SHIFT))&LPSPI_CFGR0_HRSEL_MASK)
#define LPSPI_CFGR0_CIRFIFO_MASK                 0x100u
#define LPSPI_CFGR0_CIRFIFO_SHIFT                8u
#define LPSPI_CFGR0_CIRFIFO_WIDTH                1u
#define LPSPI_CFGR0_CIRFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR0_CIRFIFO_SHIFT))&LPSPI_CFGR0_CIRFIFO_MASK)
#define LPSPI_CFGR0_RDMO_MASK                    0x200u
#define LPSPI_CFGR0_RDMO_SHIFT                   9u
#define LPSPI_CFGR0_RDMO_WIDTH                   1u
#define LPSPI_CFGR0_RDMO(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR0_RDMO_SHIFT))&LPSPI_CFGR0_RDMO_MASK)
/* CFGR1 Bit Fields */
#define LPSPI_CFGR1_MASTER_MASK                  0x1u
#define LPSPI_CFGR1_MASTER_SHIFT                 0u
#define LPSPI_CFGR1_MASTER_WIDTH                 1u
#define LPSPI_CFGR1_MASTER(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_MASTER_SHIFT))&LPSPI_CFGR1_MASTER_MASK)
#define LPSPI_CFGR1_SAMPLE_MASK                  0x2u
#define LPSPI_CFGR1_SAMPLE_SHIFT                 1u
#define LPSPI_CFGR1_SAMPLE_WIDTH                 1u
#define LPSPI_CFGR1_SAMPLE(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_SAMPLE_SHIFT))&LPSPI_CFGR1_SAMPLE_MASK)
#define LPSPI_CFGR1_AUTOPCS_MASK                 0x4u
#define LPSPI_CFGR1_AUTOPCS_SHIFT                2u
#define LPSPI_CFGR1_AUTOPCS_WIDTH                1u
#define LPSPI_CFGR1_AUTOPCS(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_AUTOPCS_SHIFT))&LPSPI_CFGR1_AUTOPCS_MASK)
#define LPSPI_CFGR1_NOSTALL_MASK                 0x8u
#define LPSPI_CFGR1_NOSTALL_SHIFT                3u
#define LPSPI_CFGR1_NOSTALL_WIDTH                1u
#define LPSPI_CFGR1_NOSTALL(x)                   (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_NOSTALL_SHIFT))&LPSPI_CFGR1_NOSTALL_MASK)
#define LPSPI_CFGR1_PCSPOL_MASK                  0xF00u
#define LPSPI_CFGR1_PCSPOL_SHIFT                 8u
#define LPSPI_CFGR1_PCSPOL_WIDTH                 4u
#define LPSPI_CFGR1_PCSPOL(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_PCSPOL_SHIFT))&LPSPI_CFGR1_PCSPOL_MASK)
#define LPSPI_CFGR1_MATCFG_MASK                  0x70000u
#define LPSPI_CFGR1_MATCFG_SHIFT                 16u
#define LPSPI_CFGR1_MATCFG_WIDTH                 3u
#define LPSPI_CFGR1_MATCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_MATCFG_SHIFT))&LPSPI_CFGR1_MATCFG_MASK)
#define LPSPI_CFGR1_PINCFG_MASK                  0x3000000u
#define LPSPI_CFGR1_PINCFG_SHIFT                 24u
#define LPSPI_CFGR1_PINCFG_WIDTH                 2u
#define LPSPI_CFGR1_PINCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_PINCFG_SHIFT))&LPSPI_CFGR1_PINCFG_MASK)
#define LPSPI_CFGR1_OUTCFG_MASK                  0x4000000u
#define LPSPI_CFGR1_OUTCFG_SHIFT                 26u
#define LPSPI_CFGR1_OUTCFG_WIDTH                 1u
#define LPSPI_CFGR1_OUTCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_OUTCFG_SHIFT))&LPSPI_CFGR1_OUTCFG_MASK)
#define LPSPI_CFGR1_PCSCFG_MASK                  0x8000000u
#define LPSPI_CFGR1_PCSCFG_SHIFT                 27u
#define LPSPI_CFGR1_PCSCFG_WIDTH                 1u
#define LPSPI_CFGR1_PCSCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_CFGR1_PCSCFG_SHIFT))&LPSPI_CFGR1_PCSCFG_MASK)
/* DMR0 Bit Fields */
#define LPSPI_DMR0_MATCH0_MASK                   0xFFFFFFFFu
#define LPSPI_DMR0_MATCH0_SHIFT                  0u
#define LPSPI_DMR0_MATCH0_WIDTH                  32u
#define LPSPI_DMR0_MATCH0(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_DMR0_MATCH0_SHIFT))&LPSPI_DMR0_MATCH0_MASK)
/* DMR1 Bit Fields */
#define LPSPI_DMR1_MATCH1_MASK                   0xFFFFFFFFu
#define LPSPI_DMR1_MATCH1_SHIFT                  0u
#define LPSPI_DMR1_MATCH1_WIDTH                  32u
#define LPSPI_DMR1_MATCH1(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_DMR1_MATCH1_SHIFT))&LPSPI_DMR1_MATCH1_MASK)
/* CCR Bit Fields */
#define LPSPI_CCR_SCKDIV_MASK                    0xFFu
#define LPSPI_CCR_SCKDIV_SHIFT                   0u
#define LPSPI_CCR_SCKDIV_WIDTH                   8u
#define LPSPI_CCR_SCKDIV(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI_CCR_SCKDIV_SHIFT))&LPSPI_CCR_SCKDIV_MASK)
#define LPSPI_CCR_DBT_MASK                       0xFF00u
#define LPSPI_CCR_DBT_SHIFT                      8u
#define LPSPI_CCR_DBT_WIDTH                      8u
#define LPSPI_CCR_DBT(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI_CCR_DBT_SHIFT))&LPSPI_CCR_DBT_MASK)
#define LPSPI_CCR_PCSSCK_MASK                    0xFF0000u
#define LPSPI_CCR_PCSSCK_SHIFT                   16u
#define LPSPI_CCR_PCSSCK_WIDTH                   8u
#define LPSPI_CCR_PCSSCK(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI_CCR_PCSSCK_SHIFT))&LPSPI_CCR_PCSSCK_MASK)
#define LPSPI_CCR_SCKPCS_MASK                    0xFF000000u
#define LPSPI_CCR_SCKPCS_SHIFT                   24u
#define LPSPI_CCR_SCKPCS_WIDTH                   8u
#define LPSPI_CCR_SCKPCS(x)                      (((uint32_t)(((uint32_t)(x))<<LPSPI_CCR_SCKPCS_SHIFT))&LPSPI_CCR_SCKPCS_MASK)
/* FCR Bit Fields */
#define LPSPI_FCR_TXWATER_MASK                   0x3u
#define LPSPI_FCR_TXWATER_SHIFT                  0u
#define LPSPI_FCR_TXWATER_WIDTH                  2u
#define LPSPI_FCR_TXWATER(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_FCR_TXWATER_SHIFT))&LPSPI_FCR_TXWATER_MASK)
#define LPSPI_FCR_RXWATER_MASK                   0x30000u
#define LPSPI_FCR_RXWATER_SHIFT                  16u
#define LPSPI_FCR_RXWATER_WIDTH                  2u
#define LPSPI_FCR_RXWATER(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_FCR_RXWATER_SHIFT))&LPSPI_FCR_RXWATER_MASK)
/* FSR Bit Fields */
#define LPSPI_FSR_TXCOUNT_MASK                   0x7u
#define LPSPI_FSR_TXCOUNT_SHIFT                  0u
#define LPSPI_FSR_TXCOUNT_WIDTH                  3u
#define LPSPI_FSR_TXCOUNT(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_FSR_TXCOUNT_SHIFT))&LPSPI_FSR_TXCOUNT_MASK)
#define LPSPI_FSR_RXCOUNT_MASK                   0x70000u
#define LPSPI_FSR_RXCOUNT_SHIFT                  16u
#define LPSPI_FSR_RXCOUNT_WIDTH                  3u
#define LPSPI_FSR_RXCOUNT(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_FSR_RXCOUNT_SHIFT))&LPSPI_FSR_RXCOUNT_MASK)
/* TCR Bit Fields */
#define LPSPI_TCR_FRAMESZ_MASK                   0xFFFu
#define LPSPI_TCR_FRAMESZ_SHIFT                  0u
#define LPSPI_TCR_FRAMESZ_WIDTH                  12u
#define LPSPI_TCR_FRAMESZ(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_FRAMESZ_SHIFT))&LPSPI_TCR_FRAMESZ_MASK)
#define LPSPI_TCR_WIDTH_MASK                     0x30000u
#define LPSPI_TCR_WIDTH_SHIFT                    16u
#define LPSPI_TCR_WIDTH_WIDTH                    2u
#define LPSPI_TCR_WIDTH(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_WIDTH_SHIFT))&LPSPI_TCR_WIDTH_MASK)
#define LPSPI_TCR_TXMSK_MASK                     0x40000u
#define LPSPI_TCR_TXMSK_SHIFT                    18u
#define LPSPI_TCR_TXMSK_WIDTH                    1u
#define LPSPI_TCR_TXMSK(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_TXMSK_SHIFT))&LPSPI_TCR_TXMSK_MASK)
#define LPSPI_TCR_RXMSK_MASK                     0x80000u
#define LPSPI_TCR_RXMSK_SHIFT                    19u
#define LPSPI_TCR_RXMSK_WIDTH                    1u
#define LPSPI_TCR_RXMSK(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_RXMSK_SHIFT))&LPSPI_TCR_RXMSK_MASK)
#define LPSPI_TCR_CONTC_MASK                     0x100000u
#define LPSPI_TCR_CONTC_SHIFT                    20u
#define LPSPI_TCR_CONTC_WIDTH                    1u
#define LPSPI_TCR_CONTC(x)                       (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_CONTC_SHIFT))&LPSPI_TCR_CONTC_MASK)
#define LPSPI_TCR_CONT_MASK                      0x200000u
#define LPSPI_TCR_CONT_SHIFT                     21u
#define LPSPI_TCR_CONT_WIDTH                     1u
#define LPSPI_TCR_CONT(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_CONT_SHIFT))&LPSPI_TCR_CONT_MASK)
#define LPSPI_TCR_BYSW_MASK                      0x400000u
#define LPSPI_TCR_BYSW_SHIFT                     22u
#define LPSPI_TCR_BYSW_WIDTH                     1u
#define LPSPI_TCR_BYSW(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_BYSW_SHIFT))&LPSPI_TCR_BYSW_MASK)
#define LPSPI_TCR_LSBF_MASK                      0x800000u
#define LPSPI_TCR_LSBF_SHIFT                     23u
#define LPSPI_TCR_LSBF_WIDTH                     1u
#define LPSPI_TCR_LSBF(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_LSBF_SHIFT))&LPSPI_TCR_LSBF_MASK)
#define LPSPI_TCR_PCS_MASK                       0x3000000u
#define LPSPI_TCR_PCS_SHIFT                      24u
#define LPSPI_TCR_PCS_WIDTH                      2u
#define LPSPI_TCR_PCS(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_PCS_SHIFT))&LPSPI_TCR_PCS_MASK)
#define LPSPI_TCR_PRESCALE_MASK                  0x38000000u
#define LPSPI_TCR_PRESCALE_SHIFT                 27u
#define LPSPI_TCR_PRESCALE_WIDTH                 3u
#define LPSPI_TCR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_PRESCALE_SHIFT))&LPSPI_TCR_PRESCALE_MASK)
#define LPSPI_TCR_CPHA_MASK                      0x40000000u
#define LPSPI_TCR_CPHA_SHIFT                     30u
#define LPSPI_TCR_CPHA_WIDTH                     1u
#define LPSPI_TCR_CPHA(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_CPHA_SHIFT))&LPSPI_TCR_CPHA_MASK)
#define LPSPI_TCR_CPOL_MASK                      0x80000000u
#define LPSPI_TCR_CPOL_SHIFT                     31u
#define LPSPI_TCR_CPOL_WIDTH                     1u
#define LPSPI_TCR_CPOL(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_TCR_CPOL_SHIFT))&LPSPI_TCR_CPOL_MASK)
/* TDR Bit Fields */
#define LPSPI_TDR_DATA_MASK                      0xFFFFFFFFu
#define LPSPI_TDR_DATA_SHIFT                     0u
#define LPSPI_TDR_DATA_WIDTH                     32u
#define LPSPI_TDR_DATA(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_TDR_DATA_SHIFT))&LPSPI_TDR_DATA_MASK)
/* RSR Bit Fields */
#define LPSPI_RSR_SOF_MASK                       0x1u
#define LPSPI_RSR_SOF_SHIFT                      0u
#define LPSPI_RSR_SOF_WIDTH                      1u
#define LPSPI_RSR_SOF(x)                         (((uint32_t)(((uint32_t)(x))<<LPSPI_RSR_SOF_SHIFT))&LPSPI_RSR_SOF_MASK)
#define LPSPI_RSR_RXEMPTY_MASK                   0x2u
#define LPSPI_RSR_RXEMPTY_SHIFT                  1u
#define LPSPI_RSR_RXEMPTY_WIDTH                  1u
#define LPSPI_RSR_RXEMPTY(x)                     (((uint32_t)(((uint32_t)(x))<<LPSPI_RSR_RXEMPTY_SHIFT))&LPSPI_RSR_RXEMPTY_MASK)
/* RDR Bit Fields */
#define LPSPI_RDR_DATA_MASK                      0xFFFFFFFFu
#define LPSPI_RDR_DATA_SHIFT                     0u
#define LPSPI_RDR_DATA_WIDTH                     32u
#define LPSPI_RDR_DATA(x)                        (((uint32_t)(((uint32_t)(x))<<LPSPI_RDR_DATA_SHIFT))&LPSPI_RDR_DATA_MASK)

/*!
 * @}
 */ /* end of group LPSPI_Register_Masks */


/*!
 * @}
 */ /* end of group LPSPI_Peripheral_Access_Layer */

#endif /* S32K1XX_LPSPI_H_ */
