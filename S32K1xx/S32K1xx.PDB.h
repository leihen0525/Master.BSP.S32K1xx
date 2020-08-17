/*
 * S32K1xx.PDB.h
 *
 *  Created on: 2020年8月5日
 *      Author: Master.HE
 */

#ifndef S32K1XX_PDB_H_
#define S32K1XX_PDB_H_

#include "S32K1xx.Type.h"

/* ----------------------------------------------------------------------------
   -- PDB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PDB_Peripheral_Access_Layer PDB Peripheral Access Layer
 * @{
 */


/** PDB - Size of Registers Arrays */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__))
#define PDB_CH_COUNT                             2u
#elif (defined (__Target_S32K146__))
#define PDB_CH_COUNT                             3u
#elif (defined (__Target_S32K148__))
#define PDB_CH_COUNT                             4u
#endif

#define PDB_DLY_COUNT                            8u
#define PDB_POnDLY_COUNT                         1u

/** PDB - Register Layout Typedef */
typedef struct {
	__IO uint32_t SC;                                /**< Status and Control register, offset: 0x0 */
	__IO uint32_t MOD;                               /**< Modulus register, offset: 0x4 */
	__I  uint32_t CNT;                               /**< Counter register, offset: 0x8 */
	__IO uint32_t IDLY;                              /**< Interrupt Delay register, offset: 0xC */
	struct {                                         /* offset: 0x10, array step: 0x28 */
		__IO uint32_t C1;                                /**< Channel n Control register 1, array offset: 0x10, array step: 0x28 */
		__IO uint32_t S;                                 /**< Channel n Status register, array offset: 0x14, array step: 0x28 */
		__IO uint32_t DLY[PDB_DLY_COUNT];                /**< Channel n Delay 0 register..Channel n Delay 7 register, array offset: 0x18, array step: index*0x28, index2*0x4 */
	} CH[PDB_CH_COUNT];
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__))
	uint8_t RESERVED_0[304];
#elif (defined (__Target_S32K146__))
	uint8_t RESERVED_0[264];
#elif (defined (__Target_S32K148__))
	uint8_t RESERVED_0[224];
#endif
	__IO uint32_t POEN;                              /**< Pulse-Out n Enable register, offset: 0x190 */
	union {                                          /* offset: 0x194, array step: 0x4 */
		__IO uint32_t PODLY;                             /**< Pulse-Out n Delay register, array offset: 0x194, array step: 0x4 */
		struct {                                         /* offset: 0x194, array step: 0x4 */
			__IO uint16_t DLY2;                              /**< PDB1_DLY2 register...PDB0_DLY2 register., array offset: 0x194, array step: 0x4 */
			__IO uint16_t DLY1;                              /**< PDB1_DLY1 register...PDB0_DLY1 register., array offset: 0x196, array step: 0x4 */
		} ACCESS16BIT;
	} POnDLY[PDB_POnDLY_COUNT];
} PDB_Type, *PDB_MemMapPtr;

 /** Number of instances of the PDB module. */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define PDB_INSTANCE_COUNT                       (1u)
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PDB_INSTANCE_COUNT                       (2u)
#endif

/* PDB - Peripheral instance base addresses */
/** Peripheral PDB0 base address */
#define PDB0_BASE                                (0x40036000u)
/** Peripheral PDB0 base pointer */
#define PDB0                                     ((PDB_Type *)PDB0_BASE)

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Peripheral PDB1 base address */
#define PDB1_BASE                                (0x40031000u)
/** Peripheral PDB1 base pointer */
#define PDB1                                     ((PDB_Type *)PDB1_BASE)
#endif

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
/** Array initializer of PDB peripheral base addresses */
#define PDB_BASE_ADDRS                           { PDB0_BASE }
/** Array initializer of PDB peripheral base pointers */
#define PDB_BASE_PTRS                            { PDB0 }
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
/** Array initializer of PDB peripheral base addresses */
#define PDB_BASE_ADDRS                           { PDB0_BASE, PDB1_BASE }
/** Array initializer of PDB peripheral base pointers */
#define PDB_BASE_PTRS                            { PDB0, PDB1 }
#endif
 /** Number of interrupt vector arrays for the PDB module. */
#define PDB_IRQS_ARR_COUNT                       (1u)
 /** Number of interrupt channels for the PDB module. */
#define PDB_IRQS_CH_COUNT                        (1u)
/** Interrupt vectors for the PDB peripheral type */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define PDB_IRQS                                 { PDB0_IRQn }
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PDB_IRQS                                 { PDB0_IRQn, PDB1_IRQn }
#endif
/* ----------------------------------------------------------------------------
   -- PDB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PDB_Register_Masks PDB Register Masks
 * @{
 */

/* SC Bit Fields */
#define PDB_SC_LDOK_MASK                         0x1u
#define PDB_SC_LDOK_SHIFT                        0u
#define PDB_SC_LDOK_WIDTH                        1u
#define PDB_SC_LDOK(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_LDOK_SHIFT))&PDB_SC_LDOK_MASK)
#define PDB_SC_CONT_MASK                         0x2u
#define PDB_SC_CONT_SHIFT                        1u
#define PDB_SC_CONT_WIDTH                        1u
#define PDB_SC_CONT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_CONT_SHIFT))&PDB_SC_CONT_MASK)
#define PDB_SC_MULT_MASK                         0xCu
#define PDB_SC_MULT_SHIFT                        2u
#define PDB_SC_MULT_WIDTH                        2u
#define PDB_SC_MULT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_SC_MULT_SHIFT))&PDB_SC_MULT_MASK)
#define PDB_SC_PDBIE_MASK                        0x20u
#define PDB_SC_PDBIE_SHIFT                       5u
#define PDB_SC_PDBIE_WIDTH                       1u
#define PDB_SC_PDBIE(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBIE_SHIFT))&PDB_SC_PDBIE_MASK)
#define PDB_SC_PDBIF_MASK                        0x40u
#define PDB_SC_PDBIF_SHIFT                       6u
#define PDB_SC_PDBIF_WIDTH                       1u
#define PDB_SC_PDBIF(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBIF_SHIFT))&PDB_SC_PDBIF_MASK)
#define PDB_SC_PDBEN_MASK                        0x80u
#define PDB_SC_PDBEN_SHIFT                       7u
#define PDB_SC_PDBEN_WIDTH                       1u
#define PDB_SC_PDBEN(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBEN_SHIFT))&PDB_SC_PDBEN_MASK)
#define PDB_SC_TRGSEL_MASK                       0xF00u
#define PDB_SC_TRGSEL_SHIFT                      8u
#define PDB_SC_TRGSEL_WIDTH                      4u
#define PDB_SC_TRGSEL(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_TRGSEL_SHIFT))&PDB_SC_TRGSEL_MASK)
#define PDB_SC_PRESCALER_MASK                    0x7000u
#define PDB_SC_PRESCALER_SHIFT                   12u
#define PDB_SC_PRESCALER_WIDTH                   3u
#define PDB_SC_PRESCALER(x)                      (((uint32_t)(((uint32_t)(x))<<PDB_SC_PRESCALER_SHIFT))&PDB_SC_PRESCALER_MASK)
#define PDB_SC_DMAEN_MASK                        0x8000u
#define PDB_SC_DMAEN_SHIFT                       15u
#define PDB_SC_DMAEN_WIDTH                       1u
#define PDB_SC_DMAEN(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_DMAEN_SHIFT))&PDB_SC_DMAEN_MASK)
#define PDB_SC_SWTRIG_MASK                       0x10000u
#define PDB_SC_SWTRIG_SHIFT                      16u
#define PDB_SC_SWTRIG_WIDTH                      1u
#define PDB_SC_SWTRIG(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_SWTRIG_SHIFT))&PDB_SC_SWTRIG_MASK)
#define PDB_SC_PDBEIE_MASK                       0x20000u
#define PDB_SC_PDBEIE_SHIFT                      17u
#define PDB_SC_PDBEIE_WIDTH                      1u
#define PDB_SC_PDBEIE(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_SC_PDBEIE_SHIFT))&PDB_SC_PDBEIE_MASK)
#define PDB_SC_LDMOD_MASK                        0xC0000u
#define PDB_SC_LDMOD_SHIFT                       18u
#define PDB_SC_LDMOD_WIDTH                       2u
#define PDB_SC_LDMOD(x)                          (((uint32_t)(((uint32_t)(x))<<PDB_SC_LDMOD_SHIFT))&PDB_SC_LDMOD_MASK)
/* MOD Bit Fields */
#define PDB_MOD_MOD_MASK                         0xFFFFu
#define PDB_MOD_MOD_SHIFT                        0u
#define PDB_MOD_MOD_WIDTH                        16u
#define PDB_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_MOD_MOD_SHIFT))&PDB_MOD_MOD_MASK)
/* CNT Bit Fields */
#define PDB_CNT_CNT_MASK                         0xFFFFu
#define PDB_CNT_CNT_SHIFT                        0u
#define PDB_CNT_CNT_WIDTH                        16u
#define PDB_CNT_CNT(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_CNT_CNT_SHIFT))&PDB_CNT_CNT_MASK)
/* IDLY Bit Fields */
#define PDB_IDLY_IDLY_MASK                       0xFFFFu
#define PDB_IDLY_IDLY_SHIFT                      0u
#define PDB_IDLY_IDLY_WIDTH                      16u
#define PDB_IDLY_IDLY(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_IDLY_IDLY_SHIFT))&PDB_IDLY_IDLY_MASK)
/* C1 Bit Fields */
#define PDB_C1_EN_MASK                           0xFFu
#define PDB_C1_EN_SHIFT                          0u
#define PDB_C1_EN_WIDTH                          8u
#define PDB_C1_EN(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_C1_EN_SHIFT))&PDB_C1_EN_MASK)
#define PDB_C1_TOS_MASK                          0xFF00u
#define PDB_C1_TOS_SHIFT                         8u
#define PDB_C1_TOS_WIDTH                         8u
#define PDB_C1_TOS(x)                            (((uint32_t)(((uint32_t)(x))<<PDB_C1_TOS_SHIFT))&PDB_C1_TOS_MASK)
#define PDB_C1_BB_MASK                           0xFF0000u
#define PDB_C1_BB_SHIFT                          16u
#define PDB_C1_BB_WIDTH                          8u
#define PDB_C1_BB(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_C1_BB_SHIFT))&PDB_C1_BB_MASK)
/* S Bit Fields */
#define PDB_S_ERR_MASK                           0xFFu
#define PDB_S_ERR_SHIFT                          0u
#define PDB_S_ERR_WIDTH                          8u
#define PDB_S_ERR(x)                             (((uint32_t)(((uint32_t)(x))<<PDB_S_ERR_SHIFT))&PDB_S_ERR_MASK)
#define PDB_S_CF_MASK                            0xFF0000u
#define PDB_S_CF_SHIFT                           16u
#define PDB_S_CF_WIDTH                           8u
#define PDB_S_CF(x)                              (((uint32_t)(((uint32_t)(x))<<PDB_S_CF_SHIFT))&PDB_S_CF_MASK)
/* DLY Bit Fields */
#define PDB_DLY_DLY_MASK                         0xFFFFu
#define PDB_DLY_DLY_SHIFT                        0u
#define PDB_DLY_DLY_WIDTH                        16u
#define PDB_DLY_DLY(x)                           (((uint32_t)(((uint32_t)(x))<<PDB_DLY_DLY_SHIFT))&PDB_DLY_DLY_MASK)
/* POEN Bit Fields */
#define PDB_POEN_POEN_MASK                       0xFFu
#define PDB_POEN_POEN_SHIFT                      0u
#define PDB_POEN_POEN_WIDTH                      8u
#define PDB_POEN_POEN(x)                         (((uint32_t)(((uint32_t)(x))<<PDB_POEN_POEN_SHIFT))&PDB_POEN_POEN_MASK)
/* POnDLY_PODLY Bit Fields */
#define PDB_POnDLY_PODLY_DLY2_MASK               0xFFFFu
#define PDB_POnDLY_PODLY_DLY2_SHIFT              0u
#define PDB_POnDLY_PODLY_DLY2_WIDTH              16u
#define PDB_POnDLY_PODLY_DLY2(x)                 (((uint32_t)(((uint32_t)(x))<<PDB_POnDLY_PODLY_DLY2_SHIFT))&PDB_POnDLY_PODLY_DLY2_MASK)
#define PDB_POnDLY_PODLY_DLY1_MASK               0xFFFF0000u
#define PDB_POnDLY_PODLY_DLY1_SHIFT              16u
#define PDB_POnDLY_PODLY_DLY1_WIDTH              16u
#define PDB_POnDLY_PODLY_DLY1(x)                 (((uint32_t)(((uint32_t)(x))<<PDB_POnDLY_PODLY_DLY1_SHIFT))&PDB_POnDLY_PODLY_DLY1_MASK)
/* POnDLY_ACCESS16BIT_DLY2 Bit Fields */
#define PDB_POnDLY_ACCESS16BIT_DLY2_DLY2_MASK    0xFFFFu
#define PDB_POnDLY_ACCESS16BIT_DLY2_DLY2_SHIFT   0u
#define PDB_POnDLY_ACCESS16BIT_DLY2_DLY2_WIDTH   16u
#define PDB_POnDLY_ACCESS16BIT_DLY2_DLY2(x)      (((uint16_t)(((uint16_t)(x))<<PDB_POnDLY_ACCESS16BIT_DLY2_DLY2_SHIFT))&PDB_POnDLY_ACCESS16BIT_DLY2_DLY2_MASK)
/* POnDLY_ACCESS16BIT_DLY1 Bit Fields */
#define PDB_POnDLY_ACCESS16BIT_DLY1_DLY1_MASK    0xFFFFu
#define PDB_POnDLY_ACCESS16BIT_DLY1_DLY1_SHIFT   0u
#define PDB_POnDLY_ACCESS16BIT_DLY1_DLY1_WIDTH   16u
#define PDB_POnDLY_ACCESS16BIT_DLY1_DLY1(x)      (((uint16_t)(((uint16_t)(x))<<PDB_POnDLY_ACCESS16BIT_DLY1_DLY1_SHIFT))&PDB_POnDLY_ACCESS16BIT_DLY1_DLY1_MASK)

/*!
 * @}
 */ /* end of group PDB_Register_Masks */


/*!
 * @}
 */ /* end of group PDB_Peripheral_Access_Layer */

#endif /* S32K1XX_PDB_H_ */
