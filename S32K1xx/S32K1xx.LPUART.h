/*
 * S32K1xx.LPUART.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_LPUART_H_
#define S32K1XX_LPUART_H_

#include "S32K1xx.Type.h"


typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t							:1;
		__IO uint32_t RST						:1;
		__IO uint32_t							:30;
	}BIT;
}LPUART_GLOBAL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TRGSEL					:2;
		__IO uint32_t							:30;
	}BIT;
}LPUART_PINCFG_Type;
typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SBR						:13;
		__IO uint32_t SBNS						:1;
		__IO uint32_t RXEDGIE					:1;
		__IO uint32_t LBKDIE					:1;

		__IO uint32_t RESYNCDIS					:1;
		__IO uint32_t BOTHEDGE					:1;
		__IO uint32_t MATCFG					:2;
		__IO uint32_t RIDMAE					:1;
		__IO uint32_t RDMAE						:1;
		__IO uint32_t							:1;
		__IO uint32_t TDMAE						:1;
		__IO uint32_t OSR						:5;
		__IO uint32_t M10						:1;
		__IO uint32_t MAEN2						:1;
		__IO uint32_t MAEN1						:1;
	}BIT;
}LPUART_BAUD_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t							:14;
		__IO uint32_t MA2F						:1;
		__IO uint32_t MA1F						:1;

		__IO uint32_t PF						:1;
		__IO uint32_t FE						:1;
		__IO uint32_t NF						:1;
		__IO uint32_t OR						:1;
		__IO uint32_t IDLE						:1;
		__IO uint32_t RDRF						:1;
		__IO uint32_t TC						:1;
		__IO uint32_t TDRE						:1;
		__IO uint32_t RAF						:1;
		__IO uint32_t LBKDE						:1;
		__IO uint32_t BRK13						:1;
		__IO uint32_t RWUID						:1;
		__IO uint32_t RXINV						:1;
		__IO uint32_t MSBF						:1;
		__IO uint32_t RXEDGIF					:1;
		__IO uint32_t LBKDIF					:1;
	}BIT;
}LPUART_STAT_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PT						:1;
		__IO uint32_t PE						:1;
		__IO uint32_t ILT						:1;
		__IO uint32_t WAKE						:1;
		__IO uint32_t M							:1;
		__IO uint32_t RSRC						:1;
		__IO uint32_t DOZEEN					:1;
		__IO uint32_t LOOPS						:1;

		__IO uint32_t IDLECFG					:3;
		__IO uint32_t M7						:1;
		__IO uint32_t							:2;
		__IO uint32_t MA2IE						:1;
		__IO uint32_t MA1IE						:1;

		__IO uint32_t SBK						:1;
		__IO uint32_t RWU						:1;
		__IO uint32_t RE						:1;
		__IO uint32_t TE						:1;
		__IO uint32_t ILIE						:1;
		__IO uint32_t RIE						:1;
		__IO uint32_t TCIE						:1;
		__IO uint32_t TIE						:1;

		__IO uint32_t PEIE						:1;
		__IO uint32_t FEIE						:1;
		__IO uint32_t NEIE						:1;
		__IO uint32_t ORIE						:1;
		__IO uint32_t TXINV						:1;
		__IO uint32_t TXDIR						:1;
		__IO uint32_t R9T8						:1;
		__IO uint32_t R8T9						:1;
	}BIT;
}LPUART_CTRL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DATA_10BIT				:10;
		__IO uint32_t							:1;
		__IO uint32_t IDLINE					:1;
		__IO uint32_t RXEMPT					:1;
		__IO uint32_t FRETSC					:1;
		__IO uint32_t PARITYE					:1;
		__IO uint32_t NOISY						:1;

		__IO uint32_t							:16;
	}BIT;
}LPUART_DATA_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t MA1						:10;
		__IO uint32_t							:6;

		__IO uint32_t MA2						:10;
		__IO uint32_t							:6;
	}BIT;
}LPUART_MATCH_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TXCTSE					:1;
		__IO uint32_t TXRTSE					:1;
		__IO uint32_t TXRTSPOL					:1;
		__IO uint32_t RXRTSE					:1;
		__IO uint32_t TXCTSC					:1;
		__IO uint32_t TXCTSSRC					:1;
		__IO uint32_t							:2;

		__IO uint32_t RTSWATER					:2;
		__IO uint32_t							:6;

		__IO uint32_t TNP						:2;
		__IO uint32_t IREN						:1;
		__IO uint32_t							:13;
	}BIT;
}LPUART_MODIR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RXFIFOSIZE				:3;
		__IO uint32_t RXFE						:1;
		__IO uint32_t TXFIFOSIZE				:3;
		__IO uint32_t TXFE						:1;

		__IO uint32_t RXUFE						:1;
		__IO uint32_t TXOFE						:1;
		__IO uint32_t RXIDEN					:3;
		__IO uint32_t							:1;
		__IO uint32_t RXFLUSH					:1;
		__IO uint32_t TXFLUSH					:1;

		__IO uint32_t RXUF						:1;
		__IO uint32_t TXOF						:1;
		__IO uint32_t							:4;
		__IO uint32_t RXEMPT					:1;
		__IO uint32_t TXEMPT					:1;

		__IO uint32_t							:8;
	}BIT;
}LPUART_FIFO_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TXWATER					:2;
		__IO uint32_t							:6;

		__IO uint32_t TXCOUNT					:3;
		__IO uint32_t							:5;

		__IO uint32_t RXWATER					:2;
		__IO uint32_t							:6;

		__IO uint32_t RXCOUNT					:3;
		__IO uint32_t							:5;
	}BIT;
}LPUART_WATER_Type;

/* ----------------------------------------------------------------------------
   -- LPUART Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPUART_Peripheral_Access_Layer LPUART Peripheral Access Layer
 * @{
 */


/** LPUART - Size of Registers Arrays */

/** LPUART - Register Layout Typedef */
typedef struct
{
	__I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
	__I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
	LPUART_GLOBAL_Type GLOBAL;                            /**< LPUART Global Register, offset: 0x8 */
	LPUART_PINCFG_Type PINCFG;                            /**< LPUART Pin Configuration Register, offset: 0xC */
	LPUART_BAUD_Type BAUD;                              /**< LPUART Baud Rate Register, offset: 0x10 */
	LPUART_STAT_Type STAT;                              /**< LPUART Status Register, offset: 0x14 */
	LPUART_CTRL_Type CTRL;                              /**< LPUART Control Register, offset: 0x18 */
	LPUART_DATA_Type DATA;                              /**< LPUART Data Register, offset: 0x1C */
	LPUART_MATCH_Type MATCH;                             /**< LPUART Match Address Register, offset: 0x20 */
	LPUART_MODIR_Type MODIR;                             /**< LPUART Modem IrDA Register, offset: 0x24 */
	LPUART_FIFO_Type FIFO;                              /**< LPUART FIFO Register, offset: 0x28 */
	LPUART_WATER_Type WATER;                             /**< LPUART Watermark Register, offset: 0x2C */
} LPUART_Type, *LPUART_MemMapPtr;

 /** Number of instances of the LPUART module. */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__))

#define LPUART_INSTANCE_COUNT                    (2u)

#elif (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

#define LPUART_INSTANCE_COUNT                    (3u)

#endif

/* LPUART - Peripheral instance base addresses */
/** Peripheral LPUART0 base address */
#define LPUART0_BASE                             (0x4006A000u)
/** Peripheral LPUART0 base pointer */
#define LPUART0                                  ((LPUART_Type *)LPUART0_BASE)
/** Peripheral LPUART1 base address */
#define LPUART1_BASE                             (0x4006B000u)
/** Peripheral LPUART1 base pointer */
#define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__))

/** Array initializer of LPUART peripheral base addresses */
#define LPUART_BASE_ADDRS                        { LPUART0_BASE, LPUART1_BASE }
/** Array initializer of LPUART peripheral base pointers */
#define LPUART_BASE_PTRS                         { LPUART0, LPUART1 }
 /** Number of interrupt vector arrays for the LPUART module. */
#define LPUART_IRQS_ARR_COUNT                    (1u)
 /** Number of interrupt channels for the RX_TX type of LPUART module. */
#define LPUART_RX_TX_IRQS_CH_COUNT               (1u)
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                        { LPUART0_RxTx_IRQn, LPUART1_RxTx_IRQn }

#elif (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

/** Peripheral LPUART2 base address */
#define LPUART2_BASE                             (0x4006C000u)
/** Peripheral LPUART2 base pointer */
#define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
/** Array initializer of LPUART peripheral base addresses */
#define LPUART_BASE_ADDRS                        { LPUART0_BASE, LPUART1_BASE, LPUART2_BASE }
/** Array initializer of LPUART peripheral base pointers */
#define LPUART_BASE_PTRS                         { LPUART0, LPUART1, LPUART2 }
 /** Number of interrupt vector arrays for the LPUART module. */
#define LPUART_IRQS_ARR_COUNT                    (1u)
 /** Number of interrupt channels for the RX_TX type of LPUART module. */
#define LPUART_RX_TX_IRQS_CH_COUNT               (1u)
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                        { LPUART0_RxTx_IRQn, LPUART1_RxTx_IRQn, LPUART2_RxTx_IRQn }

#endif
/* ----------------------------------------------------------------------------
   -- LPUART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPUART_Register_Masks LPUART Register Masks
 * @{
 */

/* VERID Bit Fields */
#define LPUART_VERID_FEATURE_MASK                0xFFFFu
#define LPUART_VERID_FEATURE_SHIFT               0u
#define LPUART_VERID_FEATURE_WIDTH               16u
#define LPUART_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_VERID_FEATURE_SHIFT))&LPUART_VERID_FEATURE_MASK)
#define LPUART_VERID_MINOR_MASK                  0xFF0000u
#define LPUART_VERID_MINOR_SHIFT                 16u
#define LPUART_VERID_MINOR_WIDTH                 8u
#define LPUART_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_VERID_MINOR_SHIFT))&LPUART_VERID_MINOR_MASK)
#define LPUART_VERID_MAJOR_MASK                  0xFF000000u
#define LPUART_VERID_MAJOR_SHIFT                 24u
#define LPUART_VERID_MAJOR_WIDTH                 8u
#define LPUART_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_VERID_MAJOR_SHIFT))&LPUART_VERID_MAJOR_MASK)
/* PARAM Bit Fields */
#define LPUART_PARAM_TXFIFO_MASK                 0xFFu
#define LPUART_PARAM_TXFIFO_SHIFT                0u
#define LPUART_PARAM_TXFIFO_WIDTH                8u
#define LPUART_PARAM_TXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_PARAM_TXFIFO_SHIFT))&LPUART_PARAM_TXFIFO_MASK)
#define LPUART_PARAM_RXFIFO_MASK                 0xFF00u
#define LPUART_PARAM_RXFIFO_SHIFT                8u
#define LPUART_PARAM_RXFIFO_WIDTH                8u
#define LPUART_PARAM_RXFIFO(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_PARAM_RXFIFO_SHIFT))&LPUART_PARAM_RXFIFO_MASK)
/* GLOBAL Bit Fields */
#define LPUART_GLOBAL_RST_MASK                   0x2u
#define LPUART_GLOBAL_RST_SHIFT                  1u
#define LPUART_GLOBAL_RST_WIDTH                  1u
#define LPUART_GLOBAL_RST(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_GLOBAL_RST_SHIFT))&LPUART_GLOBAL_RST_MASK)
/* PINCFG Bit Fields */
#define LPUART_PINCFG_TRGSEL_MASK                0x3u
#define LPUART_PINCFG_TRGSEL_SHIFT               0u
#define LPUART_PINCFG_TRGSEL_WIDTH               2u
#define LPUART_PINCFG_TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_PINCFG_TRGSEL_SHIFT))&LPUART_PINCFG_TRGSEL_MASK)
/* BAUD Bit Fields */
#define LPUART_BAUD_SBR_MASK                     0x1FFFu
#define LPUART_BAUD_SBR_SHIFT                    0u
#define LPUART_BAUD_SBR_WIDTH                    13u
#define LPUART_BAUD_SBR(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_SBR_SHIFT))&LPUART_BAUD_SBR_MASK)
#define LPUART_BAUD_SBNS_MASK                    0x2000u
#define LPUART_BAUD_SBNS_SHIFT                   13u
#define LPUART_BAUD_SBNS_WIDTH                   1u
#define LPUART_BAUD_SBNS(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_SBNS_SHIFT))&LPUART_BAUD_SBNS_MASK)
#define LPUART_BAUD_RXEDGIE_MASK                 0x4000u
#define LPUART_BAUD_RXEDGIE_SHIFT                14u
#define LPUART_BAUD_RXEDGIE_WIDTH                1u
#define LPUART_BAUD_RXEDGIE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RXEDGIE_SHIFT))&LPUART_BAUD_RXEDGIE_MASK)
#define LPUART_BAUD_LBKDIE_MASK                  0x8000u
#define LPUART_BAUD_LBKDIE_SHIFT                 15u
#define LPUART_BAUD_LBKDIE_WIDTH                 1u
#define LPUART_BAUD_LBKDIE(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_LBKDIE_SHIFT))&LPUART_BAUD_LBKDIE_MASK)
#define LPUART_BAUD_RESYNCDIS_MASK               0x10000u
#define LPUART_BAUD_RESYNCDIS_SHIFT              16u
#define LPUART_BAUD_RESYNCDIS_WIDTH              1u
#define LPUART_BAUD_RESYNCDIS(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RESYNCDIS_SHIFT))&LPUART_BAUD_RESYNCDIS_MASK)
#define LPUART_BAUD_BOTHEDGE_MASK                0x20000u
#define LPUART_BAUD_BOTHEDGE_SHIFT               17u
#define LPUART_BAUD_BOTHEDGE_WIDTH               1u
#define LPUART_BAUD_BOTHEDGE(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_BOTHEDGE_SHIFT))&LPUART_BAUD_BOTHEDGE_MASK)
#define LPUART_BAUD_MATCFG_MASK                  0xC0000u
#define LPUART_BAUD_MATCFG_SHIFT                 18u
#define LPUART_BAUD_MATCFG_WIDTH                 2u
#define LPUART_BAUD_MATCFG(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MATCFG_SHIFT))&LPUART_BAUD_MATCFG_MASK)
#define LPUART_BAUD_RIDMAE_MASK                  0x100000u
#define LPUART_BAUD_RIDMAE_SHIFT                 20u
#define LPUART_BAUD_RIDMAE_WIDTH                 1u
#define LPUART_BAUD_RIDMAE(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RIDMAE_SHIFT))&LPUART_BAUD_RIDMAE_MASK)
#define LPUART_BAUD_RDMAE_MASK                   0x200000u
#define LPUART_BAUD_RDMAE_SHIFT                  21u
#define LPUART_BAUD_RDMAE_WIDTH                  1u
#define LPUART_BAUD_RDMAE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_RDMAE_SHIFT))&LPUART_BAUD_RDMAE_MASK)
#define LPUART_BAUD_TDMAE_MASK                   0x800000u
#define LPUART_BAUD_TDMAE_SHIFT                  23u
#define LPUART_BAUD_TDMAE_WIDTH                  1u
#define LPUART_BAUD_TDMAE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_TDMAE_SHIFT))&LPUART_BAUD_TDMAE_MASK)
#define LPUART_BAUD_OSR_MASK                     0x1F000000u
#define LPUART_BAUD_OSR_SHIFT                    24u
#define LPUART_BAUD_OSR_WIDTH                    5u
#define LPUART_BAUD_OSR(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_OSR_SHIFT))&LPUART_BAUD_OSR_MASK)
#define LPUART_BAUD_M10_MASK                     0x20000000u
#define LPUART_BAUD_M10_SHIFT                    29u
#define LPUART_BAUD_M10_WIDTH                    1u
#define LPUART_BAUD_M10(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_M10_SHIFT))&LPUART_BAUD_M10_MASK)
#define LPUART_BAUD_MAEN2_MASK                   0x40000000u
#define LPUART_BAUD_MAEN2_SHIFT                  30u
#define LPUART_BAUD_MAEN2_WIDTH                  1u
#define LPUART_BAUD_MAEN2(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MAEN2_SHIFT))&LPUART_BAUD_MAEN2_MASK)
#define LPUART_BAUD_MAEN1_MASK                   0x80000000u
#define LPUART_BAUD_MAEN1_SHIFT                  31u
#define LPUART_BAUD_MAEN1_WIDTH                  1u
#define LPUART_BAUD_MAEN1(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_BAUD_MAEN1_SHIFT))&LPUART_BAUD_MAEN1_MASK)
/* STAT Bit Fields */
#define LPUART_STAT_MA2F_MASK                    0x4000u
#define LPUART_STAT_MA2F_SHIFT                   14u
#define LPUART_STAT_MA2F_WIDTH                   1u
#define LPUART_STAT_MA2F(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_MA2F_SHIFT))&LPUART_STAT_MA2F_MASK)
#define LPUART_STAT_MA1F_MASK                    0x8000u
#define LPUART_STAT_MA1F_SHIFT                   15u
#define LPUART_STAT_MA1F_WIDTH                   1u
#define LPUART_STAT_MA1F(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_MA1F_SHIFT))&LPUART_STAT_MA1F_MASK)
#define LPUART_STAT_PF_MASK                      0x10000u
#define LPUART_STAT_PF_SHIFT                     16u
#define LPUART_STAT_PF_WIDTH                     1u
#define LPUART_STAT_PF(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_PF_SHIFT))&LPUART_STAT_PF_MASK)
#define LPUART_STAT_FE_MASK                      0x20000u
#define LPUART_STAT_FE_SHIFT                     17u
#define LPUART_STAT_FE_WIDTH                     1u
#define LPUART_STAT_FE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_FE_SHIFT))&LPUART_STAT_FE_MASK)
#define LPUART_STAT_NF_MASK                      0x40000u
#define LPUART_STAT_NF_SHIFT                     18u
#define LPUART_STAT_NF_WIDTH                     1u
#define LPUART_STAT_NF(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_NF_SHIFT))&LPUART_STAT_NF_MASK)
#define LPUART_STAT_OR_MASK                      0x80000u
#define LPUART_STAT_OR_SHIFT                     19u
#define LPUART_STAT_OR_WIDTH                     1u
#define LPUART_STAT_OR(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_OR_SHIFT))&LPUART_STAT_OR_MASK)
#define LPUART_STAT_IDLE_MASK                    0x100000u
#define LPUART_STAT_IDLE_SHIFT                   20u
#define LPUART_STAT_IDLE_WIDTH                   1u
#define LPUART_STAT_IDLE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_IDLE_SHIFT))&LPUART_STAT_IDLE_MASK)
#define LPUART_STAT_RDRF_MASK                    0x200000u
#define LPUART_STAT_RDRF_SHIFT                   21u
#define LPUART_STAT_RDRF_WIDTH                   1u
#define LPUART_STAT_RDRF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RDRF_SHIFT))&LPUART_STAT_RDRF_MASK)
#define LPUART_STAT_TC_MASK                      0x400000u
#define LPUART_STAT_TC_SHIFT                     22u
#define LPUART_STAT_TC_WIDTH                     1u
#define LPUART_STAT_TC(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_TC_SHIFT))&LPUART_STAT_TC_MASK)
#define LPUART_STAT_TDRE_MASK                    0x800000u
#define LPUART_STAT_TDRE_SHIFT                   23u
#define LPUART_STAT_TDRE_WIDTH                   1u
#define LPUART_STAT_TDRE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_TDRE_SHIFT))&LPUART_STAT_TDRE_MASK)
#define LPUART_STAT_RAF_MASK                     0x1000000u
#define LPUART_STAT_RAF_SHIFT                    24u
#define LPUART_STAT_RAF_WIDTH                    1u
#define LPUART_STAT_RAF(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RAF_SHIFT))&LPUART_STAT_RAF_MASK)
#define LPUART_STAT_LBKDE_MASK                   0x2000000u
#define LPUART_STAT_LBKDE_SHIFT                  25u
#define LPUART_STAT_LBKDE_WIDTH                  1u
#define LPUART_STAT_LBKDE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_LBKDE_SHIFT))&LPUART_STAT_LBKDE_MASK)
#define LPUART_STAT_BRK13_MASK                   0x4000000u
#define LPUART_STAT_BRK13_SHIFT                  26u
#define LPUART_STAT_BRK13_WIDTH                  1u
#define LPUART_STAT_BRK13(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_BRK13_SHIFT))&LPUART_STAT_BRK13_MASK)
#define LPUART_STAT_RWUID_MASK                   0x8000000u
#define LPUART_STAT_RWUID_SHIFT                  27u
#define LPUART_STAT_RWUID_WIDTH                  1u
#define LPUART_STAT_RWUID(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RWUID_SHIFT))&LPUART_STAT_RWUID_MASK)
#define LPUART_STAT_RXINV_MASK                   0x10000000u
#define LPUART_STAT_RXINV_SHIFT                  28u
#define LPUART_STAT_RXINV_WIDTH                  1u
#define LPUART_STAT_RXINV(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RXINV_SHIFT))&LPUART_STAT_RXINV_MASK)
#define LPUART_STAT_MSBF_MASK                    0x20000000u
#define LPUART_STAT_MSBF_SHIFT                   29u
#define LPUART_STAT_MSBF_WIDTH                   1u
#define LPUART_STAT_MSBF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_MSBF_SHIFT))&LPUART_STAT_MSBF_MASK)
#define LPUART_STAT_RXEDGIF_MASK                 0x40000000u
#define LPUART_STAT_RXEDGIF_SHIFT                30u
#define LPUART_STAT_RXEDGIF_WIDTH                1u
#define LPUART_STAT_RXEDGIF(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_RXEDGIF_SHIFT))&LPUART_STAT_RXEDGIF_MASK)
#define LPUART_STAT_LBKDIF_MASK                  0x80000000u
#define LPUART_STAT_LBKDIF_SHIFT                 31u
#define LPUART_STAT_LBKDIF_WIDTH                 1u
#define LPUART_STAT_LBKDIF(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_STAT_LBKDIF_SHIFT))&LPUART_STAT_LBKDIF_MASK)
/* CTRL Bit Fields */
#define LPUART_CTRL_PT_MASK                      0x1u
#define LPUART_CTRL_PT_SHIFT                     0u
#define LPUART_CTRL_PT_WIDTH                     1u
#define LPUART_CTRL_PT(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_PT_SHIFT))&LPUART_CTRL_PT_MASK)
#define LPUART_CTRL_PE_MASK                      0x2u
#define LPUART_CTRL_PE_SHIFT                     1u
#define LPUART_CTRL_PE_WIDTH                     1u
#define LPUART_CTRL_PE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_PE_SHIFT))&LPUART_CTRL_PE_MASK)
#define LPUART_CTRL_ILT_MASK                     0x4u
#define LPUART_CTRL_ILT_SHIFT                    2u
#define LPUART_CTRL_ILT_WIDTH                    1u
#define LPUART_CTRL_ILT(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_ILT_SHIFT))&LPUART_CTRL_ILT_MASK)
#define LPUART_CTRL_WAKE_MASK                    0x8u
#define LPUART_CTRL_WAKE_SHIFT                   3u
#define LPUART_CTRL_WAKE_WIDTH                   1u
#define LPUART_CTRL_WAKE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_WAKE_SHIFT))&LPUART_CTRL_WAKE_MASK)
#define LPUART_CTRL_M_MASK                       0x10u
#define LPUART_CTRL_M_SHIFT                      4u
#define LPUART_CTRL_M_WIDTH                      1u
#define LPUART_CTRL_M(x)                         (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_M_SHIFT))&LPUART_CTRL_M_MASK)
#define LPUART_CTRL_RSRC_MASK                    0x20u
#define LPUART_CTRL_RSRC_SHIFT                   5u
#define LPUART_CTRL_RSRC_WIDTH                   1u
#define LPUART_CTRL_RSRC(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RSRC_SHIFT))&LPUART_CTRL_RSRC_MASK)
#define LPUART_CTRL_DOZEEN_MASK                  0x40u
#define LPUART_CTRL_DOZEEN_SHIFT                 6u
#define LPUART_CTRL_DOZEEN_WIDTH                 1u
#define LPUART_CTRL_DOZEEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_DOZEEN_SHIFT))&LPUART_CTRL_DOZEEN_MASK)
#define LPUART_CTRL_LOOPS_MASK                   0x80u
#define LPUART_CTRL_LOOPS_SHIFT                  7u
#define LPUART_CTRL_LOOPS_WIDTH                  1u
#define LPUART_CTRL_LOOPS(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_LOOPS_SHIFT))&LPUART_CTRL_LOOPS_MASK)
#define LPUART_CTRL_IDLECFG_MASK                 0x700u
#define LPUART_CTRL_IDLECFG_SHIFT                8u
#define LPUART_CTRL_IDLECFG_WIDTH                3u
#define LPUART_CTRL_IDLECFG(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_IDLECFG_SHIFT))&LPUART_CTRL_IDLECFG_MASK)
#define LPUART_CTRL_M7_MASK                      0x800u
#define LPUART_CTRL_M7_SHIFT                     11u
#define LPUART_CTRL_M7_WIDTH                     1u
#define LPUART_CTRL_M7(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_M7_SHIFT))&LPUART_CTRL_M7_MASK)
#define LPUART_CTRL_MA2IE_MASK                   0x4000u
#define LPUART_CTRL_MA2IE_SHIFT                  14u
#define LPUART_CTRL_MA2IE_WIDTH                  1u
#define LPUART_CTRL_MA2IE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_MA2IE_SHIFT))&LPUART_CTRL_MA2IE_MASK)
#define LPUART_CTRL_MA1IE_MASK                   0x8000u
#define LPUART_CTRL_MA1IE_SHIFT                  15u
#define LPUART_CTRL_MA1IE_WIDTH                  1u
#define LPUART_CTRL_MA1IE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_MA1IE_SHIFT))&LPUART_CTRL_MA1IE_MASK)
#define LPUART_CTRL_SBK_MASK                     0x10000u
#define LPUART_CTRL_SBK_SHIFT                    16u
#define LPUART_CTRL_SBK_WIDTH                    1u
#define LPUART_CTRL_SBK(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_SBK_SHIFT))&LPUART_CTRL_SBK_MASK)
#define LPUART_CTRL_RWU_MASK                     0x20000u
#define LPUART_CTRL_RWU_SHIFT                    17u
#define LPUART_CTRL_RWU_WIDTH                    1u
#define LPUART_CTRL_RWU(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RWU_SHIFT))&LPUART_CTRL_RWU_MASK)
#define LPUART_CTRL_RE_MASK                      0x40000u
#define LPUART_CTRL_RE_SHIFT                     18u
#define LPUART_CTRL_RE_WIDTH                     1u
#define LPUART_CTRL_RE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RE_SHIFT))&LPUART_CTRL_RE_MASK)
#define LPUART_CTRL_TE_MASK                      0x80000u
#define LPUART_CTRL_TE_SHIFT                     19u
#define LPUART_CTRL_TE_WIDTH                     1u
#define LPUART_CTRL_TE(x)                        (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TE_SHIFT))&LPUART_CTRL_TE_MASK)
#define LPUART_CTRL_ILIE_MASK                    0x100000u
#define LPUART_CTRL_ILIE_SHIFT                   20u
#define LPUART_CTRL_ILIE_WIDTH                   1u
#define LPUART_CTRL_ILIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_ILIE_SHIFT))&LPUART_CTRL_ILIE_MASK)
#define LPUART_CTRL_RIE_MASK                     0x200000u
#define LPUART_CTRL_RIE_SHIFT                    21u
#define LPUART_CTRL_RIE_WIDTH                    1u
#define LPUART_CTRL_RIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_RIE_SHIFT))&LPUART_CTRL_RIE_MASK)
#define LPUART_CTRL_TCIE_MASK                    0x400000u
#define LPUART_CTRL_TCIE_SHIFT                   22u
#define LPUART_CTRL_TCIE_WIDTH                   1u
#define LPUART_CTRL_TCIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TCIE_SHIFT))&LPUART_CTRL_TCIE_MASK)
#define LPUART_CTRL_TIE_MASK                     0x800000u
#define LPUART_CTRL_TIE_SHIFT                    23u
#define LPUART_CTRL_TIE_WIDTH                    1u
#define LPUART_CTRL_TIE(x)                       (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TIE_SHIFT))&LPUART_CTRL_TIE_MASK)
#define LPUART_CTRL_PEIE_MASK                    0x1000000u
#define LPUART_CTRL_PEIE_SHIFT                   24u
#define LPUART_CTRL_PEIE_WIDTH                   1u
#define LPUART_CTRL_PEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_PEIE_SHIFT))&LPUART_CTRL_PEIE_MASK)
#define LPUART_CTRL_FEIE_MASK                    0x2000000u
#define LPUART_CTRL_FEIE_SHIFT                   25u
#define LPUART_CTRL_FEIE_WIDTH                   1u
#define LPUART_CTRL_FEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_FEIE_SHIFT))&LPUART_CTRL_FEIE_MASK)
#define LPUART_CTRL_NEIE_MASK                    0x4000000u
#define LPUART_CTRL_NEIE_SHIFT                   26u
#define LPUART_CTRL_NEIE_WIDTH                   1u
#define LPUART_CTRL_NEIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_NEIE_SHIFT))&LPUART_CTRL_NEIE_MASK)
#define LPUART_CTRL_ORIE_MASK                    0x8000000u
#define LPUART_CTRL_ORIE_SHIFT                   27u
#define LPUART_CTRL_ORIE_WIDTH                   1u
#define LPUART_CTRL_ORIE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_ORIE_SHIFT))&LPUART_CTRL_ORIE_MASK)
#define LPUART_CTRL_TXINV_MASK                   0x10000000u
#define LPUART_CTRL_TXINV_SHIFT                  28u
#define LPUART_CTRL_TXINV_WIDTH                  1u
#define LPUART_CTRL_TXINV(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TXINV_SHIFT))&LPUART_CTRL_TXINV_MASK)
#define LPUART_CTRL_TXDIR_MASK                   0x20000000u
#define LPUART_CTRL_TXDIR_SHIFT                  29u
#define LPUART_CTRL_TXDIR_WIDTH                  1u
#define LPUART_CTRL_TXDIR(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_TXDIR_SHIFT))&LPUART_CTRL_TXDIR_MASK)
#define LPUART_CTRL_R9T8_MASK                    0x40000000u
#define LPUART_CTRL_R9T8_SHIFT                   30u
#define LPUART_CTRL_R9T8_WIDTH                   1u
#define LPUART_CTRL_R9T8(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_R9T8_SHIFT))&LPUART_CTRL_R9T8_MASK)
#define LPUART_CTRL_R8T9_MASK                    0x80000000u
#define LPUART_CTRL_R8T9_SHIFT                   31u
#define LPUART_CTRL_R8T9_WIDTH                   1u
#define LPUART_CTRL_R8T9(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_CTRL_R8T9_SHIFT))&LPUART_CTRL_R8T9_MASK)
/* DATA Bit Fields */
#define LPUART_DATA_R0T0_MASK                    0x1u
#define LPUART_DATA_R0T0_SHIFT                   0u
#define LPUART_DATA_R0T0_WIDTH                   1u
#define LPUART_DATA_R0T0(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R0T0_SHIFT))&LPUART_DATA_R0T0_MASK)
#define LPUART_DATA_R1T1_MASK                    0x2u
#define LPUART_DATA_R1T1_SHIFT                   1u
#define LPUART_DATA_R1T1_WIDTH                   1u
#define LPUART_DATA_R1T1(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R1T1_SHIFT))&LPUART_DATA_R1T1_MASK)
#define LPUART_DATA_R2T2_MASK                    0x4u
#define LPUART_DATA_R2T2_SHIFT                   2u
#define LPUART_DATA_R2T2_WIDTH                   1u
#define LPUART_DATA_R2T2(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R2T2_SHIFT))&LPUART_DATA_R2T2_MASK)
#define LPUART_DATA_R3T3_MASK                    0x8u
#define LPUART_DATA_R3T3_SHIFT                   3u
#define LPUART_DATA_R3T3_WIDTH                   1u
#define LPUART_DATA_R3T3(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R3T3_SHIFT))&LPUART_DATA_R3T3_MASK)
#define LPUART_DATA_R4T4_MASK                    0x10u
#define LPUART_DATA_R4T4_SHIFT                   4u
#define LPUART_DATA_R4T4_WIDTH                   1u
#define LPUART_DATA_R4T4(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R4T4_SHIFT))&LPUART_DATA_R4T4_MASK)
#define LPUART_DATA_R5T5_MASK                    0x20u
#define LPUART_DATA_R5T5_SHIFT                   5u
#define LPUART_DATA_R5T5_WIDTH                   1u
#define LPUART_DATA_R5T5(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R5T5_SHIFT))&LPUART_DATA_R5T5_MASK)
#define LPUART_DATA_R6T6_MASK                    0x40u
#define LPUART_DATA_R6T6_SHIFT                   6u
#define LPUART_DATA_R6T6_WIDTH                   1u
#define LPUART_DATA_R6T6(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R6T6_SHIFT))&LPUART_DATA_R6T6_MASK)
#define LPUART_DATA_R7T7_MASK                    0x80u
#define LPUART_DATA_R7T7_SHIFT                   7u
#define LPUART_DATA_R7T7_WIDTH                   1u
#define LPUART_DATA_R7T7(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R7T7_SHIFT))&LPUART_DATA_R7T7_MASK)
#define LPUART_DATA_R8T8_MASK                    0x100u
#define LPUART_DATA_R8T8_SHIFT                   8u
#define LPUART_DATA_R8T8_WIDTH                   1u
#define LPUART_DATA_R8T8(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R8T8_SHIFT))&LPUART_DATA_R8T8_MASK)
#define LPUART_DATA_R9T9_MASK                    0x200u
#define LPUART_DATA_R9T9_SHIFT                   9u
#define LPUART_DATA_R9T9_WIDTH                   1u
#define LPUART_DATA_R9T9(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_R9T9_SHIFT))&LPUART_DATA_R9T9_MASK)
#define LPUART_DATA_IDLINE_MASK                  0x800u
#define LPUART_DATA_IDLINE_SHIFT                 11u
#define LPUART_DATA_IDLINE_WIDTH                 1u
#define LPUART_DATA_IDLINE(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_IDLINE_SHIFT))&LPUART_DATA_IDLINE_MASK)
#define LPUART_DATA_RXEMPT_MASK                  0x1000u
#define LPUART_DATA_RXEMPT_SHIFT                 12u
#define LPUART_DATA_RXEMPT_WIDTH                 1u
#define LPUART_DATA_RXEMPT(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_RXEMPT_SHIFT))&LPUART_DATA_RXEMPT_MASK)
#define LPUART_DATA_FRETSC_MASK                  0x2000u
#define LPUART_DATA_FRETSC_SHIFT                 13u
#define LPUART_DATA_FRETSC_WIDTH                 1u
#define LPUART_DATA_FRETSC(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_FRETSC_SHIFT))&LPUART_DATA_FRETSC_MASK)
#define LPUART_DATA_PARITYE_MASK                 0x4000u
#define LPUART_DATA_PARITYE_SHIFT                14u
#define LPUART_DATA_PARITYE_WIDTH                1u
#define LPUART_DATA_PARITYE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_PARITYE_SHIFT))&LPUART_DATA_PARITYE_MASK)
#define LPUART_DATA_NOISY_MASK                   0x8000u
#define LPUART_DATA_NOISY_SHIFT                  15u
#define LPUART_DATA_NOISY_WIDTH                  1u
#define LPUART_DATA_NOISY(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_DATA_NOISY_SHIFT))&LPUART_DATA_NOISY_MASK)
/* MATCH Bit Fields */
#define LPUART_MATCH_MA1_MASK                    0x3FFu
#define LPUART_MATCH_MA1_SHIFT                   0u
#define LPUART_MATCH_MA1_WIDTH                   10u
#define LPUART_MATCH_MA1(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MATCH_MA1_SHIFT))&LPUART_MATCH_MA1_MASK)
#define LPUART_MATCH_MA2_MASK                    0x3FF0000u
#define LPUART_MATCH_MA2_SHIFT                   16u
#define LPUART_MATCH_MA2_WIDTH                   10u
#define LPUART_MATCH_MA2(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MATCH_MA2_SHIFT))&LPUART_MATCH_MA2_MASK)
/* MODIR Bit Fields */
#define LPUART_MODIR_TXCTSE_MASK                 0x1u
#define LPUART_MODIR_TXCTSE_SHIFT                0u
#define LPUART_MODIR_TXCTSE_WIDTH                1u
#define LPUART_MODIR_TXCTSE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXCTSE_SHIFT))&LPUART_MODIR_TXCTSE_MASK)
#define LPUART_MODIR_TXRTSE_MASK                 0x2u
#define LPUART_MODIR_TXRTSE_SHIFT                1u
#define LPUART_MODIR_TXRTSE_WIDTH                1u
#define LPUART_MODIR_TXRTSE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXRTSE_SHIFT))&LPUART_MODIR_TXRTSE_MASK)
#define LPUART_MODIR_TXRTSPOL_MASK               0x4u
#define LPUART_MODIR_TXRTSPOL_SHIFT              2u
#define LPUART_MODIR_TXRTSPOL_WIDTH              1u
#define LPUART_MODIR_TXRTSPOL(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXRTSPOL_SHIFT))&LPUART_MODIR_TXRTSPOL_MASK)
#define LPUART_MODIR_RXRTSE_MASK                 0x8u
#define LPUART_MODIR_RXRTSE_SHIFT                3u
#define LPUART_MODIR_RXRTSE_WIDTH                1u
#define LPUART_MODIR_RXRTSE(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_RXRTSE_SHIFT))&LPUART_MODIR_RXRTSE_MASK)
#define LPUART_MODIR_TXCTSC_MASK                 0x10u
#define LPUART_MODIR_TXCTSC_SHIFT                4u
#define LPUART_MODIR_TXCTSC_WIDTH                1u
#define LPUART_MODIR_TXCTSC(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXCTSC_SHIFT))&LPUART_MODIR_TXCTSC_MASK)
#define LPUART_MODIR_TXCTSSRC_MASK               0x20u
#define LPUART_MODIR_TXCTSSRC_SHIFT              5u
#define LPUART_MODIR_TXCTSSRC_WIDTH              1u
#define LPUART_MODIR_TXCTSSRC(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TXCTSSRC_SHIFT))&LPUART_MODIR_TXCTSSRC_MASK)
#define LPUART_MODIR_RTSWATER_MASK               0x300u
#define LPUART_MODIR_RTSWATER_SHIFT              8u
#define LPUART_MODIR_RTSWATER_WIDTH              2u
#define LPUART_MODIR_RTSWATER(x)                 (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_RTSWATER_SHIFT))&LPUART_MODIR_RTSWATER_MASK)
#define LPUART_MODIR_TNP_MASK                    0x30000u
#define LPUART_MODIR_TNP_SHIFT                   16u
#define LPUART_MODIR_TNP_WIDTH                   2u
#define LPUART_MODIR_TNP(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_TNP_SHIFT))&LPUART_MODIR_TNP_MASK)
#define LPUART_MODIR_IREN_MASK                   0x40000u
#define LPUART_MODIR_IREN_SHIFT                  18u
#define LPUART_MODIR_IREN_WIDTH                  1u
#define LPUART_MODIR_IREN(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_MODIR_IREN_SHIFT))&LPUART_MODIR_IREN_MASK)
/* FIFO Bit Fields */
#define LPUART_FIFO_RXFIFOSIZE_MASK              0x7u
#define LPUART_FIFO_RXFIFOSIZE_SHIFT             0u
#define LPUART_FIFO_RXFIFOSIZE_WIDTH             3u
#define LPUART_FIFO_RXFIFOSIZE(x)                (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXFIFOSIZE_SHIFT))&LPUART_FIFO_RXFIFOSIZE_MASK)
#define LPUART_FIFO_RXFE_MASK                    0x8u
#define LPUART_FIFO_RXFE_SHIFT                   3u
#define LPUART_FIFO_RXFE_WIDTH                   1u
#define LPUART_FIFO_RXFE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXFE_SHIFT))&LPUART_FIFO_RXFE_MASK)
#define LPUART_FIFO_TXFIFOSIZE_MASK              0x70u
#define LPUART_FIFO_TXFIFOSIZE_SHIFT             4u
#define LPUART_FIFO_TXFIFOSIZE_WIDTH             3u
#define LPUART_FIFO_TXFIFOSIZE(x)                (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXFIFOSIZE_SHIFT))&LPUART_FIFO_TXFIFOSIZE_MASK)
#define LPUART_FIFO_TXFE_MASK                    0x80u
#define LPUART_FIFO_TXFE_SHIFT                   7u
#define LPUART_FIFO_TXFE_WIDTH                   1u
#define LPUART_FIFO_TXFE(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXFE_SHIFT))&LPUART_FIFO_TXFE_MASK)
#define LPUART_FIFO_RXUFE_MASK                   0x100u
#define LPUART_FIFO_RXUFE_SHIFT                  8u
#define LPUART_FIFO_RXUFE_WIDTH                  1u
#define LPUART_FIFO_RXUFE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXUFE_SHIFT))&LPUART_FIFO_RXUFE_MASK)
#define LPUART_FIFO_TXOFE_MASK                   0x200u
#define LPUART_FIFO_TXOFE_SHIFT                  9u
#define LPUART_FIFO_TXOFE_WIDTH                  1u
#define LPUART_FIFO_TXOFE(x)                     (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXOFE_SHIFT))&LPUART_FIFO_TXOFE_MASK)
#define LPUART_FIFO_RXIDEN_MASK                  0x1C00u
#define LPUART_FIFO_RXIDEN_SHIFT                 10u
#define LPUART_FIFO_RXIDEN_WIDTH                 3u
#define LPUART_FIFO_RXIDEN(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXIDEN_SHIFT))&LPUART_FIFO_RXIDEN_MASK)
#define LPUART_FIFO_RXFLUSH_MASK                 0x4000u
#define LPUART_FIFO_RXFLUSH_SHIFT                14u
#define LPUART_FIFO_RXFLUSH_WIDTH                1u
#define LPUART_FIFO_RXFLUSH(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXFLUSH_SHIFT))&LPUART_FIFO_RXFLUSH_MASK)
#define LPUART_FIFO_TXFLUSH_MASK                 0x8000u
#define LPUART_FIFO_TXFLUSH_SHIFT                15u
#define LPUART_FIFO_TXFLUSH_WIDTH                1u
#define LPUART_FIFO_TXFLUSH(x)                   (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXFLUSH_SHIFT))&LPUART_FIFO_TXFLUSH_MASK)
#define LPUART_FIFO_RXUF_MASK                    0x10000u
#define LPUART_FIFO_RXUF_SHIFT                   16u
#define LPUART_FIFO_RXUF_WIDTH                   1u
#define LPUART_FIFO_RXUF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXUF_SHIFT))&LPUART_FIFO_RXUF_MASK)
#define LPUART_FIFO_TXOF_MASK                    0x20000u
#define LPUART_FIFO_TXOF_SHIFT                   17u
#define LPUART_FIFO_TXOF_WIDTH                   1u
#define LPUART_FIFO_TXOF(x)                      (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXOF_SHIFT))&LPUART_FIFO_TXOF_MASK)
#define LPUART_FIFO_RXEMPT_MASK                  0x400000u
#define LPUART_FIFO_RXEMPT_SHIFT                 22u
#define LPUART_FIFO_RXEMPT_WIDTH                 1u
#define LPUART_FIFO_RXEMPT(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_RXEMPT_SHIFT))&LPUART_FIFO_RXEMPT_MASK)
#define LPUART_FIFO_TXEMPT_MASK                  0x800000u
#define LPUART_FIFO_TXEMPT_SHIFT                 23u
#define LPUART_FIFO_TXEMPT_WIDTH                 1u
#define LPUART_FIFO_TXEMPT(x)                    (((uint32_t)(((uint32_t)(x))<<LPUART_FIFO_TXEMPT_SHIFT))&LPUART_FIFO_TXEMPT_MASK)
/* WATER Bit Fields */
#define LPUART_WATER_TXWATER_MASK                0x3u
#define LPUART_WATER_TXWATER_SHIFT               0u
#define LPUART_WATER_TXWATER_WIDTH               2u
#define LPUART_WATER_TXWATER(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_TXWATER_SHIFT))&LPUART_WATER_TXWATER_MASK)
#define LPUART_WATER_TXCOUNT_MASK                0x700u
#define LPUART_WATER_TXCOUNT_SHIFT               8u
#define LPUART_WATER_TXCOUNT_WIDTH               3u
#define LPUART_WATER_TXCOUNT(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_TXCOUNT_SHIFT))&LPUART_WATER_TXCOUNT_MASK)
#define LPUART_WATER_RXWATER_MASK                0x30000u
#define LPUART_WATER_RXWATER_SHIFT               16u
#define LPUART_WATER_RXWATER_WIDTH               2u
#define LPUART_WATER_RXWATER(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_RXWATER_SHIFT))&LPUART_WATER_RXWATER_MASK)
#define LPUART_WATER_RXCOUNT_MASK                0x7000000u
#define LPUART_WATER_RXCOUNT_SHIFT               24u
#define LPUART_WATER_RXCOUNT_WIDTH               3u
#define LPUART_WATER_RXCOUNT(x)                  (((uint32_t)(((uint32_t)(x))<<LPUART_WATER_RXCOUNT_SHIFT))&LPUART_WATER_RXCOUNT_MASK)

/*!
 * @}
 */ /* end of group LPUART_Register_Masks */


/*!
 * @}
 */ /* end of group LPUART_Peripheral_Access_Layer */

#endif /* S32K1XX_LPUART_H_ */
