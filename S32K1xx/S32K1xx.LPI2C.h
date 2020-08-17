/*
 * S32K1xx.LPI2C.h
 *
 *  Created on: 2020年7月20日
 *      Author: Master.HE
 */

#ifndef S32K1XX_LPI2C_H_
#define S32K1XX_LPI2C_H_

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
}LPI2C_VERID_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t MTXFIFO							:4;
		__I  uint32_t									:4;

		__I  uint32_t MRXFIFO							:4;
		__I  uint32_t									:4;

		__I  uint32_t									:16;
	}BIT;
}LPI2C_PARAM_Type;

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
}LPI2C_MCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDF								:1;
		__IO uint32_t RDF								:1;
		__IO uint32_t									:6;

		__IO uint32_t EPF								:1;
		__IO uint32_t SDF								:1;
		__IO uint32_t NDF								:1;
		__IO uint32_t ALF								:1;
		__IO uint32_t FEF								:1;
		__IO uint32_t PLTF								:1;
		__IO uint32_t DMF								:1;
		__IO uint32_t									:1;

		__IO uint32_t									:8;

		__IO uint32_t MBF								:1;
		__IO uint32_t BBF								:1;
		__IO uint32_t									:6;
	}BIT;
}LPI2C_MSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDIE								:1;
		__IO uint32_t RDIE								:1;
		__IO uint32_t									:6;

		__IO uint32_t EPIE								:1;
		__IO uint32_t SDIE								:1;
		__IO uint32_t NDIE								:1;
		__IO uint32_t ALIE								:1;
		__IO uint32_t FEIE								:1;
		__IO uint32_t PLTIE								:1;
		__IO uint32_t DMIE								:1;
		__IO uint32_t									:1;

		__IO uint32_t									:16;
	}BIT;
}LPI2C_MIER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDDE								:1;
		__IO uint32_t RDDE								:1;
		__IO uint32_t									:30;
	}BIT;
}LPI2C_MDER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t HREN								:1;
		__IO uint32_t HRPOL								:1;
		__IO uint32_t HRSEL								:1;
		__IO uint32_t									:5;

		__IO uint32_t CIRFIFO							:1;
		__IO uint32_t RDMO								:1;
		__IO uint32_t									:6;

		__IO uint32_t									:16;
	}BIT;
}LPI2C_MCFGR0_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PRESCALE							:3;
		__IO uint32_t									:5;

		__IO uint32_t AUTOSTOP							:1;
		__IO uint32_t IGNACK							:1;
		__IO uint32_t TIMECFG							:1;
		__IO uint32_t									:5;

		__IO uint32_t MATCFG							:3;
		__IO uint32_t									:5;

		__IO uint32_t PINCFG							:3;
		__IO uint32_t									:1;
		__IO uint32_t									:4;
	}BIT;
}LPI2C_MCFGR1_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t BUSIDLE							:12;
		__IO uint32_t									:4;

		__IO uint32_t FILTSCL							:4;
		__IO uint32_t									:4;

		__IO uint32_t FILTSDA							:4;
		__IO uint32_t									:4;
	}BIT;
}LPI2C_MCFGR2_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t									:8;

		__IO uint32_t PINLOW							:12;
		__IO uint32_t									:4;

		__IO uint32_t									:8;
	}BIT;
}LPI2C_MCFGR3_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t MATCH0							:8;

		__IO uint32_t									:8;

		__IO uint32_t MATCH1							:8;

		__IO uint32_t									:8;
	}BIT;
}LPI2C_MDMR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CLKLO								:6;
		__IO uint32_t									:2;

		__IO uint32_t CLKHI								:6;
		__IO uint32_t									:2;

		__IO uint32_t SETHOLD							:6;
		__IO uint32_t									:2;

		__IO uint32_t DATAVD							:6;
		__IO uint32_t									:2;
	}BIT;
}LPI2C_MCCR0_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CLKLO								:6;
		__IO uint32_t									:2;

		__IO uint32_t CLKHI								:6;
		__IO uint32_t									:2;

		__IO uint32_t SETHOLD							:6;
		__IO uint32_t									:2;

		__IO uint32_t DATAVD							:6;
		__IO uint32_t									:2;
	}BIT;
}LPI2C_MCCR1_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TXWATER							:2;
		__IO uint32_t									:14;

		__IO uint32_t RXWATER							:2;
		__IO uint32_t									:14;
	}BIT;
}LPI2C_MFCR_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t TXCOUNT							:3;
		__I  uint32_t									:13;

		__I  uint32_t RXCOUNT							:3;
		__I  uint32_t									:13;
	}BIT;
}LPI2C_MFSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DATA								:8;

		__IO uint32_t CMD								:3;
		__IO uint32_t									:5;

		__IO uint32_t									:16;
	}BIT;
}LPI2C_MTDR_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t DATA								:8;

		__I  uint32_t									:6;
		__I  uint32_t RXEMPTY							:1;
		__I  uint32_t									:1;

		__I  uint32_t									:16;
	}BIT;
}LPI2C_MRDR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SEN								:1;
		__IO uint32_t RST								:1;
		__IO uint32_t									:2;
		__IO uint32_t FILTEN							:1;
		__IO uint32_t FILTDZ							:1;
		__IO uint32_t									:2;

		__IO uint32_t RTF								:1;
		__IO uint32_t RRF								:1;
		__IO uint32_t									:6;

		__IO uint32_t									:16;
	}BIT;
}LPI2C_SCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDF								:1;
		__IO uint32_t RDF								:1;
		__IO uint32_t AVF								:1;
		__IO uint32_t TAF								:1;
		__IO uint32_t									:4;

		__IO uint32_t RSF								:1;
		__IO uint32_t SDF								:1;
		__IO uint32_t BEF								:1;
		__IO uint32_t FEF								:1;
		__IO uint32_t AM0F								:1;
		__IO uint32_t AM1F								:1;
		__IO uint32_t GCF								:1;
		__IO uint32_t SARF								:1;

		__IO uint32_t									:8;

		__IO uint32_t SBF								:1;
		__IO uint32_t BBF								:1;
		__IO uint32_t									:6;
	}BIT;
}LPI2C_SSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDIE								:1;
		__IO uint32_t RDIE								:1;
		__IO uint32_t AVIE								:1;
		__IO uint32_t TAIE								:1;
		__IO uint32_t									:4;

		__IO uint32_t RSIE								:1;
		__IO uint32_t SDIE								:1;
		__IO uint32_t BEIE								:1;
		__IO uint32_t FEIE								:1;
		__IO uint32_t AM0IE								:1;
		__IO uint32_t AM1F								:1;
		__IO uint32_t GCIE								:1;
		__IO uint32_t SARIE								:1;

		__IO uint32_t									:16;
	}BIT;
}LPI2C_SIER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDDE								:1;
		__IO uint32_t RDDE								:1;
		__IO uint32_t AVDE								:1;
		__IO uint32_t									:29;
	}BIT;
}LPI2C_SDER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t ADRSTALL							:1;
		__IO uint32_t RXSTALL							:1;
		__IO uint32_t TXDSTALL							:1;
		__IO uint32_t ACKSTALL							:1;
		__IO uint32_t									:4;

		__IO uint32_t GCEN								:1;
		__IO uint32_t SAEN								:1;
		__IO uint32_t TXCFG								:1;
		__IO uint32_t RXCFG								:1;
		__IO uint32_t IGNACK							:1;
		__IO uint32_t HSMEN								:1;
		__IO uint32_t									:2;

		__IO uint32_t ADDRCFG							:3;
		__IO uint32_t									:13;
	}BIT;
}LPI2C_SCFGR1_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t CLKHOLD							:4;
		__IO uint32_t									:4;

		__IO uint32_t DATAVD							:6;
		__IO uint32_t									:2;

		__IO uint32_t FILTSCL							:4;
		__IO uint32_t									:4;

		__IO uint32_t FILTSDA							:4;
		__IO uint32_t									:4;
	}BIT;
}LPI2C_SCFGR2_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t									:1;
		__IO uint32_t ADDR0								:10;
		__IO uint32_t									:5;

		__IO uint32_t									:1;
		__IO uint32_t ADDR1								:10;
		__IO uint32_t									:5;
	}BIT;
}LPI2C_SAMR_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t RADDR								:11;
		__I  uint32_t									:3;
		__I  uint32_t ANV								:1;
		__I  uint32_t									:1;

		__I  uint32_t									:16;
	}BIT;
}LPI2C_SASR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TXNACK							:1;
		__IO uint32_t									:31;
	}BIT;
}LPI2C_STAR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t data								:8;
		__IO uint32_t									:24;
	}BIT;
}LPI2C_STDR_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t data								:8;

		__I  uint32_t									:6;
		__I  uint32_t RXEMPTY							:1;
		__I  uint32_t SOF								:1;

		__I  uint32_t									:16;
	}BIT;
}LPI2C_SRDR_Type;
/* ----------------------------------------------------------------------------
   -- LPI2C Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPI2C_Peripheral_Access_Layer LPI2C Peripheral Access Layer
 * @{
 */


/** LPI2C - Size of Registers Arrays */

/** LPI2C - Register Layout Typedef */
typedef struct {
	LPI2C_VERID_Type VERID;                             /**< Version ID Register, offset: 0x0 */
	LPI2C_PARAM_Type PARAM;                             /**< Parameter Register, offset: 0x4 */
	uint8_t RESERVED_0[8];
	LPI2C_MCR_Type MCR;                               /**< Master Control Register, offset: 0x10 */
	LPI2C_MSR_Type MSR;                               /**< Master Status Register, offset: 0x14 */
	LPI2C_MIER_Type MIER;                              /**< Master Interrupt Enable Register, offset: 0x18 */
	LPI2C_MDER_Type MDER;                              /**< Master DMA Enable Register, offset: 0x1C */
	LPI2C_MCFGR0_Type MCFGR0;                            /**< Master Configuration Register 0, offset: 0x20 */
	LPI2C_MCFGR1_Type MCFGR1;                            /**< Master Configuration Register 1, offset: 0x24 */
	LPI2C_MCFGR2_Type MCFGR2;                            /**< Master Configuration Register 2, offset: 0x28 */
	LPI2C_MCFGR3_Type MCFGR3;                            /**< Master Configuration Register 3, offset: 0x2C */
	uint8_t RESERVED_1[16];
	LPI2C_MDMR_Type MDMR;                              /**< Master Data Match Register, offset: 0x40 */
	uint8_t RESERVED_2[4];
	LPI2C_MCCR0_Type MCCR0;                             /**< Master Clock Configuration Register 0, offset: 0x48 */
	uint8_t RESERVED_3[4];
	LPI2C_MCCR1_Type MCCR1;                             /**< Master Clock Configuration Register 1, offset: 0x50 */
	uint8_t RESERVED_4[4];
	LPI2C_MFCR_Type MFCR;                              /**< Master FIFO Control Register, offset: 0x58 */
	LPI2C_MFSR_Type MFSR;                              /**< Master FIFO Status Register, offset: 0x5C */
	LPI2C_MTDR_Type MTDR;                              /**< Master Transmit Data Register, offset: 0x60 */
	uint8_t RESERVED_5[12];
	LPI2C_MRDR_Type MRDR;                              /**< Master Receive Data Register, offset: 0x70 */

	uint8_t RESERVED_6[156];

	LPI2C_SCR_Type SCR;                               /**< Slave Control Register, offset: 0x110 */
	LPI2C_SSR_Type SSR;                               /**< Slave Status Register, offset: 0x114 */
	LPI2C_SIER_Type SIER;                              /**< Slave Interrupt Enable Register, offset: 0x118 */
	LPI2C_SDER_Type SDER;                              /**< Slave DMA Enable Register, offset: 0x11C */
	uint8_t RESERVED_7[4];
	LPI2C_SCFGR1_Type SCFGR1;                            /**< Slave Configuration Register 1, offset: 0x124 */
	LPI2C_SCFGR2_Type SCFGR2;                            /**< Slave Configuration Register 2, offset: 0x128 */
	uint8_t RESERVED_8[20];
	LPI2C_SAMR_Type SAMR;                              /**< Slave Address Match Register, offset: 0x140 */
	uint8_t RESERVED_9[12];
	LPI2C_SASR_Type SASR;                              /**< Slave Address Status Register, offset: 0x150 */
	LPI2C_STAR_Type STAR;                              /**< Slave Transmit ACK Register, offset: 0x154 */
	uint8_t RESERVED_10[8];
	LPI2C_STDR_Type STDR;                              /**< Slave Transmit Data Register, offset: 0x160 */
	uint8_t RESERVED_11[12];
	LPI2C_SRDR_Type SRDR;                              /**< Slave Receive Data Register, offset: 0x170 */
} LPI2C_Type, *LPI2C_MemMapPtr;

 /** Number of instances of the LPI2C module. */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
#define LPI2C_INSTANCE_COUNT                     (1u)
#elif (defined (__Target_S32K148__))
#define LPI2C_INSTANCE_COUNT                     (2u)
#endif

/* LPI2C - Peripheral instance base addresses */
/** Peripheral LPI2C0 base address */
#define LPI2C0_BASE                              (0x40066000u)
/** Peripheral LPI2C0 base pointer */
#define LPI2C0                                   ((LPI2C_Type *)LPI2C0_BASE)

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
/** Array initializer of LPI2C peripheral base addresses */
#define LPI2C_BASE_ADDRS                         { LPI2C0_BASE }
/** Array initializer of LPI2C peripheral base pointers */
#define LPI2C_BASE_PTRS                          { LPI2C0 }
#elif (defined (__Target_S32K148__))
/** Peripheral LPI2C1 base address */
#define LPI2C1_BASE                              (0x40067000u)
/** Peripheral LPI2C1 base pointer */
#define LPI2C1                                   ((LPI2C_Type *)LPI2C1_BASE)
/** Array initializer of LPI2C peripheral base addresses */
#define LPI2C_BASE_ADDRS                         { LPI2C0_BASE, LPI2C1_BASE }
/** Array initializer of LPI2C peripheral base pointers */
#define LPI2C_BASE_PTRS                          { LPI2C0, LPI2C1 }
#endif
 /** Number of interrupt vector arrays for the LPI2C module. */
#define LPI2C_IRQS_ARR_COUNT                     (2u)
 /** Number of interrupt channels for the MASTER type of LPI2C module. */
#define LPI2C_MASTER_IRQS_CH_COUNT               (1u)
 /** Number of interrupt channels for the SLAVE type of LPI2C module. */
#define LPI2C_SLAVE_IRQS_CH_COUNT                (1u)
/** Interrupt vectors for the LPI2C peripheral type */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
#define LPI2C_MASTER_IRQS                        { LPI2C0_Master_Slave_IRQn }
#define LPI2C_SLAVE_IRQS                         { LPI2C0_Master_Slave_IRQn }
#elif (defined (__Target_S32K148__))
#define LPI2C_MASTER_IRQS                        { LPI2C0_Master_IRQn, LPI2C1_Master_IRQn }
#define LPI2C_SLAVE_IRQS                         { LPI2C0_Slave_IRQn, LPI2C1_Slave_IRQn }
#endif
/* ----------------------------------------------------------------------------
   -- LPI2C Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPI2C_Register_Masks LPI2C Register Masks
 * @{
 */

/* VERID Bit Fields */
#define LPI2C_VERID_FEATURE_MASK                 0xFFFFu
#define LPI2C_VERID_FEATURE_SHIFT                0u
#define LPI2C_VERID_FEATURE_WIDTH                16u
#define LPI2C_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_VERID_FEATURE_SHIFT))&LPI2C_VERID_FEATURE_MASK)
#define LPI2C_VERID_MINOR_MASK                   0xFF0000u
#define LPI2C_VERID_MINOR_SHIFT                  16u
#define LPI2C_VERID_MINOR_WIDTH                  8u
#define LPI2C_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_VERID_MINOR_SHIFT))&LPI2C_VERID_MINOR_MASK)
#define LPI2C_VERID_MAJOR_MASK                   0xFF000000u
#define LPI2C_VERID_MAJOR_SHIFT                  24u
#define LPI2C_VERID_MAJOR_WIDTH                  8u
#define LPI2C_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_VERID_MAJOR_SHIFT))&LPI2C_VERID_MAJOR_MASK)
/* PARAM Bit Fields */
#define LPI2C_PARAM_MTXFIFO_MASK                 0xFu
#define LPI2C_PARAM_MTXFIFO_SHIFT                0u
#define LPI2C_PARAM_MTXFIFO_WIDTH                4u
#define LPI2C_PARAM_MTXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_PARAM_MTXFIFO_SHIFT))&LPI2C_PARAM_MTXFIFO_MASK)
#define LPI2C_PARAM_MRXFIFO_MASK                 0xF00u
#define LPI2C_PARAM_MRXFIFO_SHIFT                8u
#define LPI2C_PARAM_MRXFIFO_WIDTH                4u
#define LPI2C_PARAM_MRXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_PARAM_MRXFIFO_SHIFT))&LPI2C_PARAM_MRXFIFO_MASK)
/* MCR Bit Fields */
#define LPI2C_MCR_MEN_MASK                       0x1u
#define LPI2C_MCR_MEN_SHIFT                      0u
#define LPI2C_MCR_MEN_WIDTH                      1u
#define LPI2C_MCR_MEN(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MCR_MEN_SHIFT))&LPI2C_MCR_MEN_MASK)
#define LPI2C_MCR_RST_MASK                       0x2u
#define LPI2C_MCR_RST_SHIFT                      1u
#define LPI2C_MCR_RST_WIDTH                      1u
#define LPI2C_MCR_RST(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MCR_RST_SHIFT))&LPI2C_MCR_RST_MASK)
#define LPI2C_MCR_DOZEN_MASK                     0x4u
#define LPI2C_MCR_DOZEN_SHIFT                    2u
#define LPI2C_MCR_DOZEN_WIDTH                    1u
#define LPI2C_MCR_DOZEN(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MCR_DOZEN_SHIFT))&LPI2C_MCR_DOZEN_MASK)
#define LPI2C_MCR_DBGEN_MASK                     0x8u
#define LPI2C_MCR_DBGEN_SHIFT                    3u
#define LPI2C_MCR_DBGEN_WIDTH                    1u
#define LPI2C_MCR_DBGEN(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MCR_DBGEN_SHIFT))&LPI2C_MCR_DBGEN_MASK)
#define LPI2C_MCR_RTF_MASK                       0x100u
#define LPI2C_MCR_RTF_SHIFT                      8u
#define LPI2C_MCR_RTF_WIDTH                      1u
#define LPI2C_MCR_RTF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MCR_RTF_SHIFT))&LPI2C_MCR_RTF_MASK)
#define LPI2C_MCR_RRF_MASK                       0x200u
#define LPI2C_MCR_RRF_SHIFT                      9u
#define LPI2C_MCR_RRF_WIDTH                      1u
#define LPI2C_MCR_RRF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MCR_RRF_SHIFT))&LPI2C_MCR_RRF_MASK)
/* MSR Bit Fields */
#define LPI2C_MSR_TDF_MASK                       0x1u
#define LPI2C_MSR_TDF_SHIFT                      0u
#define LPI2C_MSR_TDF_WIDTH                      1u
#define LPI2C_MSR_TDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_TDF_SHIFT))&LPI2C_MSR_TDF_MASK)
#define LPI2C_MSR_RDF_MASK                       0x2u
#define LPI2C_MSR_RDF_SHIFT                      1u
#define LPI2C_MSR_RDF_WIDTH                      1u
#define LPI2C_MSR_RDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_RDF_SHIFT))&LPI2C_MSR_RDF_MASK)
#define LPI2C_MSR_EPF_MASK                       0x100u
#define LPI2C_MSR_EPF_SHIFT                      8u
#define LPI2C_MSR_EPF_WIDTH                      1u
#define LPI2C_MSR_EPF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_EPF_SHIFT))&LPI2C_MSR_EPF_MASK)
#define LPI2C_MSR_SDF_MASK                       0x200u
#define LPI2C_MSR_SDF_SHIFT                      9u
#define LPI2C_MSR_SDF_WIDTH                      1u
#define LPI2C_MSR_SDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_SDF_SHIFT))&LPI2C_MSR_SDF_MASK)
#define LPI2C_MSR_NDF_MASK                       0x400u
#define LPI2C_MSR_NDF_SHIFT                      10u
#define LPI2C_MSR_NDF_WIDTH                      1u
#define LPI2C_MSR_NDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_NDF_SHIFT))&LPI2C_MSR_NDF_MASK)
#define LPI2C_MSR_ALF_MASK                       0x800u
#define LPI2C_MSR_ALF_SHIFT                      11u
#define LPI2C_MSR_ALF_WIDTH                      1u
#define LPI2C_MSR_ALF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_ALF_SHIFT))&LPI2C_MSR_ALF_MASK)
#define LPI2C_MSR_FEF_MASK                       0x1000u
#define LPI2C_MSR_FEF_SHIFT                      12u
#define LPI2C_MSR_FEF_WIDTH                      1u
#define LPI2C_MSR_FEF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_FEF_SHIFT))&LPI2C_MSR_FEF_MASK)
#define LPI2C_MSR_PLTF_MASK                      0x2000u
#define LPI2C_MSR_PLTF_SHIFT                     13u
#define LPI2C_MSR_PLTF_WIDTH                     1u
#define LPI2C_MSR_PLTF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_PLTF_SHIFT))&LPI2C_MSR_PLTF_MASK)
#define LPI2C_MSR_DMF_MASK                       0x4000u
#define LPI2C_MSR_DMF_SHIFT                      14u
#define LPI2C_MSR_DMF_WIDTH                      1u
#define LPI2C_MSR_DMF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_DMF_SHIFT))&LPI2C_MSR_DMF_MASK)
#define LPI2C_MSR_MBF_MASK                       0x1000000u
#define LPI2C_MSR_MBF_SHIFT                      24u
#define LPI2C_MSR_MBF_WIDTH                      1u
#define LPI2C_MSR_MBF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_MBF_SHIFT))&LPI2C_MSR_MBF_MASK)
#define LPI2C_MSR_BBF_MASK                       0x2000000u
#define LPI2C_MSR_BBF_SHIFT                      25u
#define LPI2C_MSR_BBF_WIDTH                      1u
#define LPI2C_MSR_BBF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_MSR_BBF_SHIFT))&LPI2C_MSR_BBF_MASK)
/* MIER Bit Fields */
#define LPI2C_MIER_TDIE_MASK                     0x1u
#define LPI2C_MIER_TDIE_SHIFT                    0u
#define LPI2C_MIER_TDIE_WIDTH                    1u
#define LPI2C_MIER_TDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_TDIE_SHIFT))&LPI2C_MIER_TDIE_MASK)
#define LPI2C_MIER_RDIE_MASK                     0x2u
#define LPI2C_MIER_RDIE_SHIFT                    1u
#define LPI2C_MIER_RDIE_WIDTH                    1u
#define LPI2C_MIER_RDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_RDIE_SHIFT))&LPI2C_MIER_RDIE_MASK)
#define LPI2C_MIER_EPIE_MASK                     0x100u
#define LPI2C_MIER_EPIE_SHIFT                    8u
#define LPI2C_MIER_EPIE_WIDTH                    1u
#define LPI2C_MIER_EPIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_EPIE_SHIFT))&LPI2C_MIER_EPIE_MASK)
#define LPI2C_MIER_SDIE_MASK                     0x200u
#define LPI2C_MIER_SDIE_SHIFT                    9u
#define LPI2C_MIER_SDIE_WIDTH                    1u
#define LPI2C_MIER_SDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_SDIE_SHIFT))&LPI2C_MIER_SDIE_MASK)
#define LPI2C_MIER_NDIE_MASK                     0x400u
#define LPI2C_MIER_NDIE_SHIFT                    10u
#define LPI2C_MIER_NDIE_WIDTH                    1u
#define LPI2C_MIER_NDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_NDIE_SHIFT))&LPI2C_MIER_NDIE_MASK)
#define LPI2C_MIER_ALIE_MASK                     0x800u
#define LPI2C_MIER_ALIE_SHIFT                    11u
#define LPI2C_MIER_ALIE_WIDTH                    1u
#define LPI2C_MIER_ALIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_ALIE_SHIFT))&LPI2C_MIER_ALIE_MASK)
#define LPI2C_MIER_FEIE_MASK                     0x1000u
#define LPI2C_MIER_FEIE_SHIFT                    12u
#define LPI2C_MIER_FEIE_WIDTH                    1u
#define LPI2C_MIER_FEIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_FEIE_SHIFT))&LPI2C_MIER_FEIE_MASK)
#define LPI2C_MIER_PLTIE_MASK                    0x2000u
#define LPI2C_MIER_PLTIE_SHIFT                   13u
#define LPI2C_MIER_PLTIE_WIDTH                   1u
#define LPI2C_MIER_PLTIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_PLTIE_SHIFT))&LPI2C_MIER_PLTIE_MASK)
#define LPI2C_MIER_DMIE_MASK                     0x4000u
#define LPI2C_MIER_DMIE_SHIFT                    14u
#define LPI2C_MIER_DMIE_WIDTH                    1u
#define LPI2C_MIER_DMIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MIER_DMIE_SHIFT))&LPI2C_MIER_DMIE_MASK)
/* MDER Bit Fields */
#define LPI2C_MDER_TDDE_MASK                     0x1u
#define LPI2C_MDER_TDDE_SHIFT                    0u
#define LPI2C_MDER_TDDE_WIDTH                    1u
#define LPI2C_MDER_TDDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MDER_TDDE_SHIFT))&LPI2C_MDER_TDDE_MASK)
#define LPI2C_MDER_RDDE_MASK                     0x2u
#define LPI2C_MDER_RDDE_SHIFT                    1u
#define LPI2C_MDER_RDDE_WIDTH                    1u
#define LPI2C_MDER_RDDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MDER_RDDE_SHIFT))&LPI2C_MDER_RDDE_MASK)
/* MCFGR0 Bit Fields */
#define LPI2C_MCFGR0_HREN_MASK                   0x1u
#define LPI2C_MCFGR0_HREN_SHIFT                  0u
#define LPI2C_MCFGR0_HREN_WIDTH                  1u
#define LPI2C_MCFGR0_HREN(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR0_HREN_SHIFT))&LPI2C_MCFGR0_HREN_MASK)
#define LPI2C_MCFGR0_HRPOL_MASK                  0x2u
#define LPI2C_MCFGR0_HRPOL_SHIFT                 1u
#define LPI2C_MCFGR0_HRPOL_WIDTH                 1u
#define LPI2C_MCFGR0_HRPOL(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR0_HRPOL_SHIFT))&LPI2C_MCFGR0_HRPOL_MASK)
#define LPI2C_MCFGR0_HRSEL_MASK                  0x4u
#define LPI2C_MCFGR0_HRSEL_SHIFT                 2u
#define LPI2C_MCFGR0_HRSEL_WIDTH                 1u
#define LPI2C_MCFGR0_HRSEL(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR0_HRSEL_SHIFT))&LPI2C_MCFGR0_HRSEL_MASK)
#define LPI2C_MCFGR0_CIRFIFO_MASK                0x100u
#define LPI2C_MCFGR0_CIRFIFO_SHIFT               8u
#define LPI2C_MCFGR0_CIRFIFO_WIDTH               1u
#define LPI2C_MCFGR0_CIRFIFO(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR0_CIRFIFO_SHIFT))&LPI2C_MCFGR0_CIRFIFO_MASK)
#define LPI2C_MCFGR0_RDMO_MASK                   0x200u
#define LPI2C_MCFGR0_RDMO_SHIFT                  9u
#define LPI2C_MCFGR0_RDMO_WIDTH                  1u
#define LPI2C_MCFGR0_RDMO(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR0_RDMO_SHIFT))&LPI2C_MCFGR0_RDMO_MASK)
/* MCFGR1 Bit Fields */
#define LPI2C_MCFGR1_PRESCALE_MASK               0x7u
#define LPI2C_MCFGR1_PRESCALE_SHIFT              0u
#define LPI2C_MCFGR1_PRESCALE_WIDTH              3u
#define LPI2C_MCFGR1_PRESCALE(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR1_PRESCALE_SHIFT))&LPI2C_MCFGR1_PRESCALE_MASK)
#define LPI2C_MCFGR1_AUTOSTOP_MASK               0x100u
#define LPI2C_MCFGR1_AUTOSTOP_SHIFT              8u
#define LPI2C_MCFGR1_AUTOSTOP_WIDTH              1u
#define LPI2C_MCFGR1_AUTOSTOP(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR1_AUTOSTOP_SHIFT))&LPI2C_MCFGR1_AUTOSTOP_MASK)
#define LPI2C_MCFGR1_IGNACK_MASK                 0x200u
#define LPI2C_MCFGR1_IGNACK_SHIFT                9u
#define LPI2C_MCFGR1_IGNACK_WIDTH                1u
#define LPI2C_MCFGR1_IGNACK(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR1_IGNACK_SHIFT))&LPI2C_MCFGR1_IGNACK_MASK)
#define LPI2C_MCFGR1_TIMECFG_MASK                0x400u
#define LPI2C_MCFGR1_TIMECFG_SHIFT               10u
#define LPI2C_MCFGR1_TIMECFG_WIDTH               1u
#define LPI2C_MCFGR1_TIMECFG(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR1_TIMECFG_SHIFT))&LPI2C_MCFGR1_TIMECFG_MASK)
#define LPI2C_MCFGR1_MATCFG_MASK                 0x70000u
#define LPI2C_MCFGR1_MATCFG_SHIFT                16u
#define LPI2C_MCFGR1_MATCFG_WIDTH                3u
#define LPI2C_MCFGR1_MATCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR1_MATCFG_SHIFT))&LPI2C_MCFGR1_MATCFG_MASK)
#define LPI2C_MCFGR1_PINCFG_MASK                 0x7000000u
#define LPI2C_MCFGR1_PINCFG_SHIFT                24u
#define LPI2C_MCFGR1_PINCFG_WIDTH                3u
#define LPI2C_MCFGR1_PINCFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR1_PINCFG_SHIFT))&LPI2C_MCFGR1_PINCFG_MASK)
/* MCFGR2 Bit Fields */
#define LPI2C_MCFGR2_BUSIDLE_MASK                0xFFFu
#define LPI2C_MCFGR2_BUSIDLE_SHIFT               0u
#define LPI2C_MCFGR2_BUSIDLE_WIDTH               12u
#define LPI2C_MCFGR2_BUSIDLE(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR2_BUSIDLE_SHIFT))&LPI2C_MCFGR2_BUSIDLE_MASK)
#define LPI2C_MCFGR2_FILTSCL_MASK                0xF0000u
#define LPI2C_MCFGR2_FILTSCL_SHIFT               16u
#define LPI2C_MCFGR2_FILTSCL_WIDTH               4u
#define LPI2C_MCFGR2_FILTSCL(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR2_FILTSCL_SHIFT))&LPI2C_MCFGR2_FILTSCL_MASK)
#define LPI2C_MCFGR2_FILTSDA_MASK                0xF000000u
#define LPI2C_MCFGR2_FILTSDA_SHIFT               24u
#define LPI2C_MCFGR2_FILTSDA_WIDTH               4u
#define LPI2C_MCFGR2_FILTSDA(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR2_FILTSDA_SHIFT))&LPI2C_MCFGR2_FILTSDA_MASK)
/* MCFGR3 Bit Fields */
#define LPI2C_MCFGR3_PINLOW_MASK                 0xFFF00u
#define LPI2C_MCFGR3_PINLOW_SHIFT                8u
#define LPI2C_MCFGR3_PINLOW_WIDTH                12u
#define LPI2C_MCFGR3_PINLOW(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_MCFGR3_PINLOW_SHIFT))&LPI2C_MCFGR3_PINLOW_MASK)
/* MDMR Bit Fields */
#define LPI2C_MDMR_MATCH0_MASK                   0xFFu
#define LPI2C_MDMR_MATCH0_SHIFT                  0u
#define LPI2C_MDMR_MATCH0_WIDTH                  8u
#define LPI2C_MDMR_MATCH0(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MDMR_MATCH0_SHIFT))&LPI2C_MDMR_MATCH0_MASK)
#define LPI2C_MDMR_MATCH1_MASK                   0xFF0000u
#define LPI2C_MDMR_MATCH1_SHIFT                  16u
#define LPI2C_MDMR_MATCH1_WIDTH                  8u
#define LPI2C_MDMR_MATCH1(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MDMR_MATCH1_SHIFT))&LPI2C_MDMR_MATCH1_MASK)
/* MCCR0 Bit Fields */
#define LPI2C_MCCR0_CLKLO_MASK                   0x3Fu
#define LPI2C_MCCR0_CLKLO_SHIFT                  0u
#define LPI2C_MCCR0_CLKLO_WIDTH                  6u
#define LPI2C_MCCR0_CLKLO(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR0_CLKLO_SHIFT))&LPI2C_MCCR0_CLKLO_MASK)
#define LPI2C_MCCR0_CLKHI_MASK                   0x3F00u
#define LPI2C_MCCR0_CLKHI_SHIFT                  8u
#define LPI2C_MCCR0_CLKHI_WIDTH                  6u
#define LPI2C_MCCR0_CLKHI(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR0_CLKHI_SHIFT))&LPI2C_MCCR0_CLKHI_MASK)
#define LPI2C_MCCR0_SETHOLD_MASK                 0x3F0000u
#define LPI2C_MCCR0_SETHOLD_SHIFT                16u
#define LPI2C_MCCR0_SETHOLD_WIDTH                6u
#define LPI2C_MCCR0_SETHOLD(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR0_SETHOLD_SHIFT))&LPI2C_MCCR0_SETHOLD_MASK)
#define LPI2C_MCCR0_DATAVD_MASK                  0x3F000000u
#define LPI2C_MCCR0_DATAVD_SHIFT                 24u
#define LPI2C_MCCR0_DATAVD_WIDTH                 6u
#define LPI2C_MCCR0_DATAVD(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR0_DATAVD_SHIFT))&LPI2C_MCCR0_DATAVD_MASK)
/* MCCR1 Bit Fields */
#define LPI2C_MCCR1_CLKLO_MASK                   0x3Fu
#define LPI2C_MCCR1_CLKLO_SHIFT                  0u
#define LPI2C_MCCR1_CLKLO_WIDTH                  6u
#define LPI2C_MCCR1_CLKLO(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR1_CLKLO_SHIFT))&LPI2C_MCCR1_CLKLO_MASK)
#define LPI2C_MCCR1_CLKHI_MASK                   0x3F00u
#define LPI2C_MCCR1_CLKHI_SHIFT                  8u
#define LPI2C_MCCR1_CLKHI_WIDTH                  6u
#define LPI2C_MCCR1_CLKHI(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR1_CLKHI_SHIFT))&LPI2C_MCCR1_CLKHI_MASK)
#define LPI2C_MCCR1_SETHOLD_MASK                 0x3F0000u
#define LPI2C_MCCR1_SETHOLD_SHIFT                16u
#define LPI2C_MCCR1_SETHOLD_WIDTH                6u
#define LPI2C_MCCR1_SETHOLD(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR1_SETHOLD_SHIFT))&LPI2C_MCCR1_SETHOLD_MASK)
#define LPI2C_MCCR1_DATAVD_MASK                  0x3F000000u
#define LPI2C_MCCR1_DATAVD_SHIFT                 24u
#define LPI2C_MCCR1_DATAVD_WIDTH                 6u
#define LPI2C_MCCR1_DATAVD(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MCCR1_DATAVD_SHIFT))&LPI2C_MCCR1_DATAVD_MASK)
/* MFCR Bit Fields */
#define LPI2C_MFCR_TXWATER_MASK                  0x3u
#define LPI2C_MFCR_TXWATER_SHIFT                 0u
#define LPI2C_MFCR_TXWATER_WIDTH                 2u
#define LPI2C_MFCR_TXWATER(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MFCR_TXWATER_SHIFT))&LPI2C_MFCR_TXWATER_MASK)
#define LPI2C_MFCR_RXWATER_MASK                  0x30000u
#define LPI2C_MFCR_RXWATER_SHIFT                 16u
#define LPI2C_MFCR_RXWATER_WIDTH                 2u
#define LPI2C_MFCR_RXWATER(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MFCR_RXWATER_SHIFT))&LPI2C_MFCR_RXWATER_MASK)
/* MFSR Bit Fields */
#define LPI2C_MFSR_TXCOUNT_MASK                  0x7u
#define LPI2C_MFSR_TXCOUNT_SHIFT                 0u
#define LPI2C_MFSR_TXCOUNT_WIDTH                 3u
#define LPI2C_MFSR_TXCOUNT(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MFSR_TXCOUNT_SHIFT))&LPI2C_MFSR_TXCOUNT_MASK)
#define LPI2C_MFSR_RXCOUNT_MASK                  0x70000u
#define LPI2C_MFSR_RXCOUNT_SHIFT                 16u
#define LPI2C_MFSR_RXCOUNT_WIDTH                 3u
#define LPI2C_MFSR_RXCOUNT(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MFSR_RXCOUNT_SHIFT))&LPI2C_MFSR_RXCOUNT_MASK)
/* MTDR Bit Fields */
#define LPI2C_MTDR_DATA_MASK                     0xFFu
#define LPI2C_MTDR_DATA_SHIFT                    0u
#define LPI2C_MTDR_DATA_WIDTH                    8u
#define LPI2C_MTDR_DATA(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MTDR_DATA_SHIFT))&LPI2C_MTDR_DATA_MASK)
#define LPI2C_MTDR_CMD_MASK                      0x700u
#define LPI2C_MTDR_CMD_SHIFT                     8u
#define LPI2C_MTDR_CMD_WIDTH                     3u
#define LPI2C_MTDR_CMD(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_MTDR_CMD_SHIFT))&LPI2C_MTDR_CMD_MASK)
/* MRDR Bit Fields */
#define LPI2C_MRDR_DATA_MASK                     0xFFu
#define LPI2C_MRDR_DATA_SHIFT                    0u
#define LPI2C_MRDR_DATA_WIDTH                    8u
#define LPI2C_MRDR_DATA(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_MRDR_DATA_SHIFT))&LPI2C_MRDR_DATA_MASK)
#define LPI2C_MRDR_RXEMPTY_MASK                  0x4000u
#define LPI2C_MRDR_RXEMPTY_SHIFT                 14u
#define LPI2C_MRDR_RXEMPTY_WIDTH                 1u
#define LPI2C_MRDR_RXEMPTY(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_MRDR_RXEMPTY_SHIFT))&LPI2C_MRDR_RXEMPTY_MASK)
/* SCR Bit Fields */
#define LPI2C_SCR_SEN_MASK                       0x1u
#define LPI2C_SCR_SEN_SHIFT                      0u
#define LPI2C_SCR_SEN_WIDTH                      1u
#define LPI2C_SCR_SEN(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SCR_SEN_SHIFT))&LPI2C_SCR_SEN_MASK)
#define LPI2C_SCR_RST_MASK                       0x2u
#define LPI2C_SCR_RST_SHIFT                      1u
#define LPI2C_SCR_RST_WIDTH                      1u
#define LPI2C_SCR_RST(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SCR_RST_SHIFT))&LPI2C_SCR_RST_MASK)
#define LPI2C_SCR_FILTEN_MASK                    0x10u
#define LPI2C_SCR_FILTEN_SHIFT                   4u
#define LPI2C_SCR_FILTEN_WIDTH                   1u
#define LPI2C_SCR_FILTEN(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SCR_FILTEN_SHIFT))&LPI2C_SCR_FILTEN_MASK)
#define LPI2C_SCR_FILTDZ_MASK                    0x20u
#define LPI2C_SCR_FILTDZ_SHIFT                   5u
#define LPI2C_SCR_FILTDZ_WIDTH                   1u
#define LPI2C_SCR_FILTDZ(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SCR_FILTDZ_SHIFT))&LPI2C_SCR_FILTDZ_MASK)
/* SSR Bit Fields */
#define LPI2C_SSR_TDF_MASK                       0x1u
#define LPI2C_SSR_TDF_SHIFT                      0u
#define LPI2C_SSR_TDF_WIDTH                      1u
#define LPI2C_SSR_TDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_TDF_SHIFT))&LPI2C_SSR_TDF_MASK)
#define LPI2C_SSR_RDF_MASK                       0x2u
#define LPI2C_SSR_RDF_SHIFT                      1u
#define LPI2C_SSR_RDF_WIDTH                      1u
#define LPI2C_SSR_RDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_RDF_SHIFT))&LPI2C_SSR_RDF_MASK)
#define LPI2C_SSR_AVF_MASK                       0x4u
#define LPI2C_SSR_AVF_SHIFT                      2u
#define LPI2C_SSR_AVF_WIDTH                      1u
#define LPI2C_SSR_AVF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_AVF_SHIFT))&LPI2C_SSR_AVF_MASK)
#define LPI2C_SSR_TAF_MASK                       0x8u
#define LPI2C_SSR_TAF_SHIFT                      3u
#define LPI2C_SSR_TAF_WIDTH                      1u
#define LPI2C_SSR_TAF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_TAF_SHIFT))&LPI2C_SSR_TAF_MASK)
#define LPI2C_SSR_RSF_MASK                       0x100u
#define LPI2C_SSR_RSF_SHIFT                      8u
#define LPI2C_SSR_RSF_WIDTH                      1u
#define LPI2C_SSR_RSF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_RSF_SHIFT))&LPI2C_SSR_RSF_MASK)
#define LPI2C_SSR_SDF_MASK                       0x200u
#define LPI2C_SSR_SDF_SHIFT                      9u
#define LPI2C_SSR_SDF_WIDTH                      1u
#define LPI2C_SSR_SDF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_SDF_SHIFT))&LPI2C_SSR_SDF_MASK)
#define LPI2C_SSR_BEF_MASK                       0x400u
#define LPI2C_SSR_BEF_SHIFT                      10u
#define LPI2C_SSR_BEF_WIDTH                      1u
#define LPI2C_SSR_BEF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_BEF_SHIFT))&LPI2C_SSR_BEF_MASK)
#define LPI2C_SSR_FEF_MASK                       0x800u
#define LPI2C_SSR_FEF_SHIFT                      11u
#define LPI2C_SSR_FEF_WIDTH                      1u
#define LPI2C_SSR_FEF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_FEF_SHIFT))&LPI2C_SSR_FEF_MASK)
#define LPI2C_SSR_AM0F_MASK                      0x1000u
#define LPI2C_SSR_AM0F_SHIFT                     12u
#define LPI2C_SSR_AM0F_WIDTH                     1u
#define LPI2C_SSR_AM0F(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_AM0F_SHIFT))&LPI2C_SSR_AM0F_MASK)
#define LPI2C_SSR_AM1F_MASK                      0x2000u
#define LPI2C_SSR_AM1F_SHIFT                     13u
#define LPI2C_SSR_AM1F_WIDTH                     1u
#define LPI2C_SSR_AM1F(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_AM1F_SHIFT))&LPI2C_SSR_AM1F_MASK)
#define LPI2C_SSR_GCF_MASK                       0x4000u
#define LPI2C_SSR_GCF_SHIFT                      14u
#define LPI2C_SSR_GCF_WIDTH                      1u
#define LPI2C_SSR_GCF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_GCF_SHIFT))&LPI2C_SSR_GCF_MASK)
#define LPI2C_SSR_SARF_MASK                      0x8000u
#define LPI2C_SSR_SARF_SHIFT                     15u
#define LPI2C_SSR_SARF_WIDTH                     1u
#define LPI2C_SSR_SARF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_SARF_SHIFT))&LPI2C_SSR_SARF_MASK)
#define LPI2C_SSR_SBF_MASK                       0x1000000u
#define LPI2C_SSR_SBF_SHIFT                      24u
#define LPI2C_SSR_SBF_WIDTH                      1u
#define LPI2C_SSR_SBF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_SBF_SHIFT))&LPI2C_SSR_SBF_MASK)
#define LPI2C_SSR_BBF_MASK                       0x2000000u
#define LPI2C_SSR_BBF_SHIFT                      25u
#define LPI2C_SSR_BBF_WIDTH                      1u
#define LPI2C_SSR_BBF(x)                         (((uint32_t)(((uint32_t)(x))<<LPI2C_SSR_BBF_SHIFT))&LPI2C_SSR_BBF_MASK)
/* SIER Bit Fields */
#define LPI2C_SIER_TDIE_MASK                     0x1u
#define LPI2C_SIER_TDIE_SHIFT                    0u
#define LPI2C_SIER_TDIE_WIDTH                    1u
#define LPI2C_SIER_TDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_TDIE_SHIFT))&LPI2C_SIER_TDIE_MASK)
#define LPI2C_SIER_RDIE_MASK                     0x2u
#define LPI2C_SIER_RDIE_SHIFT                    1u
#define LPI2C_SIER_RDIE_WIDTH                    1u
#define LPI2C_SIER_RDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_RDIE_SHIFT))&LPI2C_SIER_RDIE_MASK)
#define LPI2C_SIER_AVIE_MASK                     0x4u
#define LPI2C_SIER_AVIE_SHIFT                    2u
#define LPI2C_SIER_AVIE_WIDTH                    1u
#define LPI2C_SIER_AVIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_AVIE_SHIFT))&LPI2C_SIER_AVIE_MASK)
#define LPI2C_SIER_TAIE_MASK                     0x8u
#define LPI2C_SIER_TAIE_SHIFT                    3u
#define LPI2C_SIER_TAIE_WIDTH                    1u
#define LPI2C_SIER_TAIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_TAIE_SHIFT))&LPI2C_SIER_TAIE_MASK)
#define LPI2C_SIER_RSIE_MASK                     0x100u
#define LPI2C_SIER_RSIE_SHIFT                    8u
#define LPI2C_SIER_RSIE_WIDTH                    1u
#define LPI2C_SIER_RSIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_RSIE_SHIFT))&LPI2C_SIER_RSIE_MASK)
#define LPI2C_SIER_SDIE_MASK                     0x200u
#define LPI2C_SIER_SDIE_SHIFT                    9u
#define LPI2C_SIER_SDIE_WIDTH                    1u
#define LPI2C_SIER_SDIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_SDIE_SHIFT))&LPI2C_SIER_SDIE_MASK)
#define LPI2C_SIER_BEIE_MASK                     0x400u
#define LPI2C_SIER_BEIE_SHIFT                    10u
#define LPI2C_SIER_BEIE_WIDTH                    1u
#define LPI2C_SIER_BEIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_BEIE_SHIFT))&LPI2C_SIER_BEIE_MASK)
#define LPI2C_SIER_FEIE_MASK                     0x800u
#define LPI2C_SIER_FEIE_SHIFT                    11u
#define LPI2C_SIER_FEIE_WIDTH                    1u
#define LPI2C_SIER_FEIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_FEIE_SHIFT))&LPI2C_SIER_FEIE_MASK)
#define LPI2C_SIER_AM0IE_MASK                    0x1000u
#define LPI2C_SIER_AM0IE_SHIFT                   12u
#define LPI2C_SIER_AM0IE_WIDTH                   1u
#define LPI2C_SIER_AM0IE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_AM0IE_SHIFT))&LPI2C_SIER_AM0IE_MASK)
#define LPI2C_SIER_AM1F_MASK                     0x2000u
#define LPI2C_SIER_AM1F_SHIFT                    13u
#define LPI2C_SIER_AM1F_WIDTH                    1u
#define LPI2C_SIER_AM1F(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_AM1F_SHIFT))&LPI2C_SIER_AM1F_MASK)
#define LPI2C_SIER_GCIE_MASK                     0x4000u
#define LPI2C_SIER_GCIE_SHIFT                    14u
#define LPI2C_SIER_GCIE_WIDTH                    1u
#define LPI2C_SIER_GCIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_GCIE_SHIFT))&LPI2C_SIER_GCIE_MASK)
#define LPI2C_SIER_SARIE_MASK                    0x8000u
#define LPI2C_SIER_SARIE_SHIFT                   15u
#define LPI2C_SIER_SARIE_WIDTH                   1u
#define LPI2C_SIER_SARIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SIER_SARIE_SHIFT))&LPI2C_SIER_SARIE_MASK)
/* SDER Bit Fields */
#define LPI2C_SDER_TDDE_MASK                     0x1u
#define LPI2C_SDER_TDDE_SHIFT                    0u
#define LPI2C_SDER_TDDE_WIDTH                    1u
#define LPI2C_SDER_TDDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SDER_TDDE_SHIFT))&LPI2C_SDER_TDDE_MASK)
#define LPI2C_SDER_RDDE_MASK                     0x2u
#define LPI2C_SDER_RDDE_SHIFT                    1u
#define LPI2C_SDER_RDDE_WIDTH                    1u
#define LPI2C_SDER_RDDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SDER_RDDE_SHIFT))&LPI2C_SDER_RDDE_MASK)
#define LPI2C_SDER_AVDE_MASK                     0x4u
#define LPI2C_SDER_AVDE_SHIFT                    2u
#define LPI2C_SDER_AVDE_WIDTH                    1u
#define LPI2C_SDER_AVDE(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SDER_AVDE_SHIFT))&LPI2C_SDER_AVDE_MASK)
/* SCFGR1 Bit Fields */
#define LPI2C_SCFGR1_ADRSTALL_MASK               0x1u
#define LPI2C_SCFGR1_ADRSTALL_SHIFT              0u
#define LPI2C_SCFGR1_ADRSTALL_WIDTH              1u
#define LPI2C_SCFGR1_ADRSTALL(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_ADRSTALL_SHIFT))&LPI2C_SCFGR1_ADRSTALL_MASK)
#define LPI2C_SCFGR1_RXSTALL_MASK                0x2u
#define LPI2C_SCFGR1_RXSTALL_SHIFT               1u
#define LPI2C_SCFGR1_RXSTALL_WIDTH               1u
#define LPI2C_SCFGR1_RXSTALL(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_RXSTALL_SHIFT))&LPI2C_SCFGR1_RXSTALL_MASK)
#define LPI2C_SCFGR1_TXDSTALL_MASK               0x4u
#define LPI2C_SCFGR1_TXDSTALL_SHIFT              2u
#define LPI2C_SCFGR1_TXDSTALL_WIDTH              1u
#define LPI2C_SCFGR1_TXDSTALL(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_TXDSTALL_SHIFT))&LPI2C_SCFGR1_TXDSTALL_MASK)
#define LPI2C_SCFGR1_ACKSTALL_MASK               0x8u
#define LPI2C_SCFGR1_ACKSTALL_SHIFT              3u
#define LPI2C_SCFGR1_ACKSTALL_WIDTH              1u
#define LPI2C_SCFGR1_ACKSTALL(x)                 (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_ACKSTALL_SHIFT))&LPI2C_SCFGR1_ACKSTALL_MASK)
#define LPI2C_SCFGR1_GCEN_MASK                   0x100u
#define LPI2C_SCFGR1_GCEN_SHIFT                  8u
#define LPI2C_SCFGR1_GCEN_WIDTH                  1u
#define LPI2C_SCFGR1_GCEN(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_GCEN_SHIFT))&LPI2C_SCFGR1_GCEN_MASK)
#define LPI2C_SCFGR1_SAEN_MASK                   0x200u
#define LPI2C_SCFGR1_SAEN_SHIFT                  9u
#define LPI2C_SCFGR1_SAEN_WIDTH                  1u
#define LPI2C_SCFGR1_SAEN(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_SAEN_SHIFT))&LPI2C_SCFGR1_SAEN_MASK)
#define LPI2C_SCFGR1_TXCFG_MASK                  0x400u
#define LPI2C_SCFGR1_TXCFG_SHIFT                 10u
#define LPI2C_SCFGR1_TXCFG_WIDTH                 1u
#define LPI2C_SCFGR1_TXCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_TXCFG_SHIFT))&LPI2C_SCFGR1_TXCFG_MASK)
#define LPI2C_SCFGR1_RXCFG_MASK                  0x800u
#define LPI2C_SCFGR1_RXCFG_SHIFT                 11u
#define LPI2C_SCFGR1_RXCFG_WIDTH                 1u
#define LPI2C_SCFGR1_RXCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_RXCFG_SHIFT))&LPI2C_SCFGR1_RXCFG_MASK)
#define LPI2C_SCFGR1_IGNACK_MASK                 0x1000u
#define LPI2C_SCFGR1_IGNACK_SHIFT                12u
#define LPI2C_SCFGR1_IGNACK_WIDTH                1u
#define LPI2C_SCFGR1_IGNACK(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_IGNACK_SHIFT))&LPI2C_SCFGR1_IGNACK_MASK)
#define LPI2C_SCFGR1_HSMEN_MASK                  0x2000u
#define LPI2C_SCFGR1_HSMEN_SHIFT                 13u
#define LPI2C_SCFGR1_HSMEN_WIDTH                 1u
#define LPI2C_SCFGR1_HSMEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_HSMEN_SHIFT))&LPI2C_SCFGR1_HSMEN_MASK)
#define LPI2C_SCFGR1_ADDRCFG_MASK                0x70000u
#define LPI2C_SCFGR1_ADDRCFG_SHIFT               16u
#define LPI2C_SCFGR1_ADDRCFG_WIDTH               3u
#define LPI2C_SCFGR1_ADDRCFG(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR1_ADDRCFG_SHIFT))&LPI2C_SCFGR1_ADDRCFG_MASK)
/* SCFGR2 Bit Fields */
#define LPI2C_SCFGR2_CLKHOLD_MASK                0xFu
#define LPI2C_SCFGR2_CLKHOLD_SHIFT               0u
#define LPI2C_SCFGR2_CLKHOLD_WIDTH               4u
#define LPI2C_SCFGR2_CLKHOLD(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR2_CLKHOLD_SHIFT))&LPI2C_SCFGR2_CLKHOLD_MASK)
#define LPI2C_SCFGR2_DATAVD_MASK                 0x3F00u
#define LPI2C_SCFGR2_DATAVD_SHIFT                8u
#define LPI2C_SCFGR2_DATAVD_WIDTH                6u
#define LPI2C_SCFGR2_DATAVD(x)                   (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR2_DATAVD_SHIFT))&LPI2C_SCFGR2_DATAVD_MASK)
#define LPI2C_SCFGR2_FILTSCL_MASK                0xF0000u
#define LPI2C_SCFGR2_FILTSCL_SHIFT               16u
#define LPI2C_SCFGR2_FILTSCL_WIDTH               4u
#define LPI2C_SCFGR2_FILTSCL(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR2_FILTSCL_SHIFT))&LPI2C_SCFGR2_FILTSCL_MASK)
#define LPI2C_SCFGR2_FILTSDA_MASK                0xF000000u
#define LPI2C_SCFGR2_FILTSDA_SHIFT               24u
#define LPI2C_SCFGR2_FILTSDA_WIDTH               4u
#define LPI2C_SCFGR2_FILTSDA(x)                  (((uint32_t)(((uint32_t)(x))<<LPI2C_SCFGR2_FILTSDA_SHIFT))&LPI2C_SCFGR2_FILTSDA_MASK)
/* SAMR Bit Fields */
#define LPI2C_SAMR_ADDR0_MASK                    0x7FEu
#define LPI2C_SAMR_ADDR0_SHIFT                   1u
#define LPI2C_SAMR_ADDR0_WIDTH                   10u
#define LPI2C_SAMR_ADDR0(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SAMR_ADDR0_SHIFT))&LPI2C_SAMR_ADDR0_MASK)
#define LPI2C_SAMR_ADDR1_MASK                    0x7FE0000u
#define LPI2C_SAMR_ADDR1_SHIFT                   17u
#define LPI2C_SAMR_ADDR1_WIDTH                   10u
#define LPI2C_SAMR_ADDR1(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SAMR_ADDR1_SHIFT))&LPI2C_SAMR_ADDR1_MASK)
/* SASR Bit Fields */
#define LPI2C_SASR_RADDR_MASK                    0x7FFu
#define LPI2C_SASR_RADDR_SHIFT                   0u
#define LPI2C_SASR_RADDR_WIDTH                   11u
#define LPI2C_SASR_RADDR(x)                      (((uint32_t)(((uint32_t)(x))<<LPI2C_SASR_RADDR_SHIFT))&LPI2C_SASR_RADDR_MASK)
#define LPI2C_SASR_ANV_MASK                      0x4000u
#define LPI2C_SASR_ANV_SHIFT                     14u
#define LPI2C_SASR_ANV_WIDTH                     1u
#define LPI2C_SASR_ANV(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_SASR_ANV_SHIFT))&LPI2C_SASR_ANV_MASK)
/* STAR Bit Fields */
#define LPI2C_STAR_TXNACK_MASK                   0x1u
#define LPI2C_STAR_TXNACK_SHIFT                  0u
#define LPI2C_STAR_TXNACK_WIDTH                  1u
#define LPI2C_STAR_TXNACK(x)                     (((uint32_t)(((uint32_t)(x))<<LPI2C_STAR_TXNACK_SHIFT))&LPI2C_STAR_TXNACK_MASK)
/* STDR Bit Fields */
#define LPI2C_STDR_DATA_MASK                     0xFFu
#define LPI2C_STDR_DATA_SHIFT                    0u
#define LPI2C_STDR_DATA_WIDTH                    8u
#define LPI2C_STDR_DATA(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_STDR_DATA_SHIFT))&LPI2C_STDR_DATA_MASK)
/* SRDR Bit Fields */
#define LPI2C_SRDR_DATA_MASK                     0xFFu
#define LPI2C_SRDR_DATA_SHIFT                    0u
#define LPI2C_SRDR_DATA_WIDTH                    8u
#define LPI2C_SRDR_DATA(x)                       (((uint32_t)(((uint32_t)(x))<<LPI2C_SRDR_DATA_SHIFT))&LPI2C_SRDR_DATA_MASK)
#define LPI2C_SRDR_RXEMPTY_MASK                  0x4000u
#define LPI2C_SRDR_RXEMPTY_SHIFT                 14u
#define LPI2C_SRDR_RXEMPTY_WIDTH                 1u
#define LPI2C_SRDR_RXEMPTY(x)                    (((uint32_t)(((uint32_t)(x))<<LPI2C_SRDR_RXEMPTY_SHIFT))&LPI2C_SRDR_RXEMPTY_MASK)
#define LPI2C_SRDR_SOF_MASK                      0x8000u
#define LPI2C_SRDR_SOF_SHIFT                     15u
#define LPI2C_SRDR_SOF_WIDTH                     1u
#define LPI2C_SRDR_SOF(x)                        (((uint32_t)(((uint32_t)(x))<<LPI2C_SRDR_SOF_SHIFT))&LPI2C_SRDR_SOF_MASK)

/*!
 * @}
 */ /* end of group LPI2C_Register_Masks */


/*!
 * @}
 */ /* end of group LPI2C_Peripheral_Access_Layer */

#endif /* S32K1XX_LPI2C_H_ */
