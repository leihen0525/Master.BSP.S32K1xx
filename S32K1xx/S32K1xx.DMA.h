/*
 * S32K1xx.DMA.h
 *
 *  Created on: 2020年8月5日
 *      Author: Master.HE
 */

#ifndef S32K1XX_DMA_H_
#define S32K1XX_DMA_H_

#include "S32K1xx.Type.h"


/* ----------------------------------------------------------------------------
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Peripheral_Access_Layer DMA Peripheral Access Layer
 * @{
 */


/** DMA - Size of Registers Arrays */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define DMA_DCHPRI_COUNT                         4u
#define DMA_TCD_COUNT                            4u
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define DMA_DCHPRI_COUNT                         16u
#define DMA_TCD_COUNT                            16u
#endif

/** DMA - Register Layout Typedef */
typedef struct {
	__IO uint32_t CR;                                /**< Control Register, offset: 0x0 */
	__I  uint32_t ES;                                /**< Error Status Register, offset: 0x4 */
	uint8_t RESERVED_0[4];
	__IO uint32_t ERQ;                               /**< Enable Request Register, offset: 0xC */
	uint8_t RESERVED_1[4];
	__IO uint32_t EEI;                               /**< Enable Error Interrupt Register, offset: 0x14 */
	__O  uint8_t CEEI;                               /**< Clear Enable Error Interrupt Register, offset: 0x18 */
	__O  uint8_t SEEI;                               /**< Set Enable Error Interrupt Register, offset: 0x19 */
	__O  uint8_t CERQ;                               /**< Clear Enable Request Register, offset: 0x1A */
	__O  uint8_t SERQ;                               /**< Set Enable Request Register, offset: 0x1B */
	__O  uint8_t CDNE;                               /**< Clear DONE Status Bit Register, offset: 0x1C */
	__O  uint8_t SSRT;                               /**< Set START Bit Register, offset: 0x1D */
	__O  uint8_t CERR;                               /**< Clear Error Register, offset: 0x1E */
	__O  uint8_t CINT;                               /**< Clear Interrupt Request Register, offset: 0x1F */
	uint8_t RESERVED_2[4];
	__IO uint32_t INT;                               /**< Interrupt Request Register, offset: 0x24 */
	uint8_t RESERVED_3[4];
	__IO uint32_t ERR;                               /**< Error Register, offset: 0x2C */
	uint8_t RESERVED_4[4];
	__I  uint32_t HRS;                               /**< Hardware Request Status Register, offset: 0x34 */
	uint8_t RESERVED_5[12];
	__IO uint32_t EARS;                              /**< Enable Asynchronous Request in Stop Register, offset: 0x44 */
	uint8_t RESERVED_6[184];
	__IO uint8_t DCHPRI[DMA_DCHPRI_COUNT];           /**< Channel n Priority Register, array offset: 0x100, array step: 0x1 */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	uint8_t RESERVED_7[3836];
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	uint8_t RESERVED_7[3824];
#endif
	struct {                                         /* offset: 0x1000, array step: 0x20 */
		__IO uint32_t SADDR;                             /**< TCD Source Address, array offset: 0x1000, array step: 0x20 */
		__IO uint16_t SOFF;                              /**< TCD Signed Source Address Offset, array offset: 0x1004, array step: 0x20 */
		__IO uint16_t ATTR;                              /**< TCD Transfer Attributes, array offset: 0x1006, array step: 0x20 */
		union {                                          /* offset: 0x1008, array step: 0x20 */
				__IO uint32_t MLNO;                              /**< TCD Minor Byte Count (Minor Loop Mapping Disabled), array offset: 0x1008, array step: 0x20 */
			__IO uint32_t MLOFFNO;                           /**< TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled), array offset: 0x1008, array step: 0x20 */
			__IO uint32_t MLOFFYES;                          /**< TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled), array offset: 0x1008, array step: 0x20 */
		} NBYTES;
		__IO uint32_t SLAST;                             /**< TCD Last Source Address Adjustment, array offset: 0x100C, array step: 0x20 */
		__IO uint32_t DADDR;                             /**< TCD Destination Address, array offset: 0x1010, array step: 0x20 */
		__IO uint16_t DOFF;                              /**< TCD Signed Destination Address Offset, array offset: 0x1014, array step: 0x20 */
		union {                                          /* offset: 0x1016, array step: 0x20 */
			__IO uint16_t ELINKNO;                           /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x1016, array step: 0x20 */
			__IO uint16_t ELINKYES;                          /**< TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x1016, array step: 0x20 */
		} CITER;
		__IO uint32_t DLASTSGA;                          /**< TCD Last Destination Address Adjustment/Scatter Gather Address, array offset: 0x1018, array step: 0x20 */
		__IO uint16_t CSR;                               /**< TCD Control and Status, array offset: 0x101C, array step: 0x20 */
		union {                                          /* offset: 0x101E, array step: 0x20 */
			__IO uint16_t ELINKNO;                           /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled), array offset: 0x101E, array step: 0x20 */
			__IO uint16_t ELINKYES;                          /**< TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled), array offset: 0x101E, array step: 0x20 */
		} BITER;
	} TCD[DMA_TCD_COUNT];
} DMA_Type, *DMA_MemMapPtr;

 /** Number of instances of the DMA module. */
#define DMA_INSTANCE_COUNT                       (1u)


/* DMA - Peripheral instance base addresses */
/** Peripheral DMA base address */
#define DMA_BASE                                 (0x40008000u)
/** Peripheral DMA base pointer */
#define DMA                                      ((DMA_Type *)DMA_BASE)
/** Array initializer of DMA peripheral base addresses */
#define DMA_BASE_ADDRS                           { DMA_BASE }
/** Array initializer of DMA peripheral base pointers */
#define DMA_BASE_PTRS                            { DMA }
 /** Number of interrupt vector arrays for the DMA module. */
#define DMA_IRQS_ARR_COUNT                       (2u)
 /** Number of interrupt channels for the CHN type of DMA module. */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define DMA_CHN_IRQS_CH_COUNT                    (4u)
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define DMA_CHN_IRQS_CH_COUNT                    (16u)
#endif
 /** Number of interrupt channels for the ERROR type of DMA module. */
#define DMA_ERROR_IRQS_CH_COUNT                  (1u)
/** Interrupt vectors for the DMA peripheral type */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define DMA_CHN_IRQS                             { DMA0_IRQn, DMA1_IRQn, DMA2_IRQn, DMA3_IRQn }
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define DMA_CHN_IRQS                             { DMA0_IRQn, DMA1_IRQn, DMA2_IRQn, DMA3_IRQn, DMA4_IRQn, DMA5_IRQn, DMA6_IRQn, DMA7_IRQn, DMA8_IRQn, DMA9_IRQn, DMA10_IRQn, DMA11_IRQn, DMA12_IRQn, DMA13_IRQn, DMA14_IRQn, DMA15_IRQn }
#endif
#define DMA_ERROR_IRQS                           { DMA_Error_IRQn }

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/* CR Bit Fields */
#define DMA_CR_EDBG_MASK                         0x2u
#define DMA_CR_EDBG_SHIFT                        1u
#define DMA_CR_EDBG_WIDTH                        1u
#define DMA_CR_EDBG(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_EDBG_SHIFT))&DMA_CR_EDBG_MASK)
#define DMA_CR_ERCA_MASK                         0x4u
#define DMA_CR_ERCA_SHIFT                        2u
#define DMA_CR_ERCA_WIDTH                        1u
#define DMA_CR_ERCA(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_ERCA_SHIFT))&DMA_CR_ERCA_MASK)
#define DMA_CR_HOE_MASK                          0x10u
#define DMA_CR_HOE_SHIFT                         4u
#define DMA_CR_HOE_WIDTH                         1u
#define DMA_CR_HOE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_CR_HOE_SHIFT))&DMA_CR_HOE_MASK)
#define DMA_CR_HALT_MASK                         0x20u
#define DMA_CR_HALT_SHIFT                        5u
#define DMA_CR_HALT_WIDTH                        1u
#define DMA_CR_HALT(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_HALT_SHIFT))&DMA_CR_HALT_MASK)
#define DMA_CR_CLM_MASK                          0x40u
#define DMA_CR_CLM_SHIFT                         6u
#define DMA_CR_CLM_WIDTH                         1u
#define DMA_CR_CLM(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_CR_CLM_SHIFT))&DMA_CR_CLM_MASK)
#define DMA_CR_EMLM_MASK                         0x80u
#define DMA_CR_EMLM_SHIFT                        7u
#define DMA_CR_EMLM_WIDTH                        1u
#define DMA_CR_EMLM(x)                           (((uint32_t)(((uint32_t)(x))<<DMA_CR_EMLM_SHIFT))&DMA_CR_EMLM_MASK)
#define DMA_CR_ECX_MASK                          0x10000u
#define DMA_CR_ECX_SHIFT                         16u
#define DMA_CR_ECX_WIDTH                         1u
#define DMA_CR_ECX(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_CR_ECX_SHIFT))&DMA_CR_ECX_MASK)
#define DMA_CR_CX_MASK                           0x20000u
#define DMA_CR_CX_SHIFT                          17u
#define DMA_CR_CX_WIDTH                          1u
#define DMA_CR_CX(x)                             (((uint32_t)(((uint32_t)(x))<<DMA_CR_CX_SHIFT))&DMA_CR_CX_MASK)
#if (defined (__Target_S32K146__))
#define DMA_CR_ACTIVE_MASK                       0x80000000u
#define DMA_CR_ACTIVE_SHIFT                      31u
#define DMA_CR_ACTIVE_WIDTH                      1u
#define DMA_CR_ACTIVE(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_CR_ACTIVE_SHIFT))&DMA_CR_ACTIVE_MASK)
#endif
/* ES Bit Fields */
#define DMA_ES_DBE_MASK                          0x1u
#define DMA_ES_DBE_SHIFT                         0u
#define DMA_ES_DBE_WIDTH                         1u
#define DMA_ES_DBE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_DBE_SHIFT))&DMA_ES_DBE_MASK)
#define DMA_ES_SBE_MASK                          0x2u
#define DMA_ES_SBE_SHIFT                         1u
#define DMA_ES_SBE_WIDTH                         1u
#define DMA_ES_SBE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SBE_SHIFT))&DMA_ES_SBE_MASK)
#define DMA_ES_SGE_MASK                          0x4u
#define DMA_ES_SGE_SHIFT                         2u
#define DMA_ES_SGE_WIDTH                         1u
#define DMA_ES_SGE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SGE_SHIFT))&DMA_ES_SGE_MASK)
#define DMA_ES_NCE_MASK                          0x8u
#define DMA_ES_NCE_SHIFT                         3u
#define DMA_ES_NCE_WIDTH                         1u
#define DMA_ES_NCE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_NCE_SHIFT))&DMA_ES_NCE_MASK)
#define DMA_ES_DOE_MASK                          0x10u
#define DMA_ES_DOE_SHIFT                         4u
#define DMA_ES_DOE_WIDTH                         1u
#define DMA_ES_DOE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_DOE_SHIFT))&DMA_ES_DOE_MASK)
#define DMA_ES_DAE_MASK                          0x20u
#define DMA_ES_DAE_SHIFT                         5u
#define DMA_ES_DAE_WIDTH                         1u
#define DMA_ES_DAE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_DAE_SHIFT))&DMA_ES_DAE_MASK)
#define DMA_ES_SOE_MASK                          0x40u
#define DMA_ES_SOE_SHIFT                         6u
#define DMA_ES_SOE_WIDTH                         1u
#define DMA_ES_SOE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SOE_SHIFT))&DMA_ES_SOE_MASK)
#define DMA_ES_SAE_MASK                          0x80u
#define DMA_ES_SAE_SHIFT                         7u
#define DMA_ES_SAE_WIDTH                         1u
#define DMA_ES_SAE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_SAE_SHIFT))&DMA_ES_SAE_MASK)
#define DMA_ES_ERRCHN_MASK                       0xF00u
#define DMA_ES_ERRCHN_SHIFT                      8u
#define DMA_ES_ERRCHN_WIDTH                      4u
#define DMA_ES_ERRCHN(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ES_ERRCHN_SHIFT))&DMA_ES_ERRCHN_MASK)
#define DMA_ES_CPE_MASK                          0x4000u
#define DMA_ES_CPE_SHIFT                         14u
#define DMA_ES_CPE_WIDTH                         1u
#define DMA_ES_CPE(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_CPE_SHIFT))&DMA_ES_CPE_MASK)
#define DMA_ES_ECX_MASK                          0x10000u
#define DMA_ES_ECX_SHIFT                         16u
#define DMA_ES_ECX_WIDTH                         1u
#define DMA_ES_ECX(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_ECX_SHIFT))&DMA_ES_ECX_MASK)
#define DMA_ES_VLD_MASK                          0x80000000u
#define DMA_ES_VLD_SHIFT                         31u
#define DMA_ES_VLD_WIDTH                         1u
#define DMA_ES_VLD(x)                            (((uint32_t)(((uint32_t)(x))<<DMA_ES_VLD_SHIFT))&DMA_ES_VLD_MASK)
/* ERQ Bit Fields */
#define DMA_ERQ_ERQ0_MASK                        0x1u
#define DMA_ERQ_ERQ0_SHIFT                       0u
#define DMA_ERQ_ERQ0_WIDTH                       1u
#define DMA_ERQ_ERQ0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ0_SHIFT))&DMA_ERQ_ERQ0_MASK)
#define DMA_ERQ_ERQ1_MASK                        0x2u
#define DMA_ERQ_ERQ1_SHIFT                       1u
#define DMA_ERQ_ERQ1_WIDTH                       1u
#define DMA_ERQ_ERQ1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ1_SHIFT))&DMA_ERQ_ERQ1_MASK)
#define DMA_ERQ_ERQ2_MASK                        0x4u
#define DMA_ERQ_ERQ2_SHIFT                       2u
#define DMA_ERQ_ERQ2_WIDTH                       1u
#define DMA_ERQ_ERQ2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ2_SHIFT))&DMA_ERQ_ERQ2_MASK)
#define DMA_ERQ_ERQ3_MASK                        0x8u
#define DMA_ERQ_ERQ3_SHIFT                       3u
#define DMA_ERQ_ERQ3_WIDTH                       1u
#define DMA_ERQ_ERQ3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ3_SHIFT))&DMA_ERQ_ERQ3_MASK)
#define DMA_ERQ_ERQ4_MASK                        0x10u
#define DMA_ERQ_ERQ4_SHIFT                       4u
#define DMA_ERQ_ERQ4_WIDTH                       1u
#define DMA_ERQ_ERQ4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ4_SHIFT))&DMA_ERQ_ERQ4_MASK)
#define DMA_ERQ_ERQ5_MASK                        0x20u
#define DMA_ERQ_ERQ5_SHIFT                       5u
#define DMA_ERQ_ERQ5_WIDTH                       1u
#define DMA_ERQ_ERQ5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ5_SHIFT))&DMA_ERQ_ERQ5_MASK)
#define DMA_ERQ_ERQ6_MASK                        0x40u
#define DMA_ERQ_ERQ6_SHIFT                       6u
#define DMA_ERQ_ERQ6_WIDTH                       1u
#define DMA_ERQ_ERQ6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ6_SHIFT))&DMA_ERQ_ERQ6_MASK)
#define DMA_ERQ_ERQ7_MASK                        0x80u
#define DMA_ERQ_ERQ7_SHIFT                       7u
#define DMA_ERQ_ERQ7_WIDTH                       1u
#define DMA_ERQ_ERQ7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ7_SHIFT))&DMA_ERQ_ERQ7_MASK)
#define DMA_ERQ_ERQ8_MASK                        0x100u
#define DMA_ERQ_ERQ8_SHIFT                       8u
#define DMA_ERQ_ERQ8_WIDTH                       1u
#define DMA_ERQ_ERQ8(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ8_SHIFT))&DMA_ERQ_ERQ8_MASK)
#define DMA_ERQ_ERQ9_MASK                        0x200u
#define DMA_ERQ_ERQ9_SHIFT                       9u
#define DMA_ERQ_ERQ9_WIDTH                       1u
#define DMA_ERQ_ERQ9(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ9_SHIFT))&DMA_ERQ_ERQ9_MASK)
#define DMA_ERQ_ERQ10_MASK                       0x400u
#define DMA_ERQ_ERQ10_SHIFT                      10u
#define DMA_ERQ_ERQ10_WIDTH                      1u
#define DMA_ERQ_ERQ10(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ10_SHIFT))&DMA_ERQ_ERQ10_MASK)
#define DMA_ERQ_ERQ11_MASK                       0x800u
#define DMA_ERQ_ERQ11_SHIFT                      11u
#define DMA_ERQ_ERQ11_WIDTH                      1u
#define DMA_ERQ_ERQ11(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ11_SHIFT))&DMA_ERQ_ERQ11_MASK)
#define DMA_ERQ_ERQ12_MASK                       0x1000u
#define DMA_ERQ_ERQ12_SHIFT                      12u
#define DMA_ERQ_ERQ12_WIDTH                      1u
#define DMA_ERQ_ERQ12(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ12_SHIFT))&DMA_ERQ_ERQ12_MASK)
#define DMA_ERQ_ERQ13_MASK                       0x2000u
#define DMA_ERQ_ERQ13_SHIFT                      13u
#define DMA_ERQ_ERQ13_WIDTH                      1u
#define DMA_ERQ_ERQ13(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ13_SHIFT))&DMA_ERQ_ERQ13_MASK)
#define DMA_ERQ_ERQ14_MASK                       0x4000u
#define DMA_ERQ_ERQ14_SHIFT                      14u
#define DMA_ERQ_ERQ14_WIDTH                      1u
#define DMA_ERQ_ERQ14(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ14_SHIFT))&DMA_ERQ_ERQ14_MASK)
#define DMA_ERQ_ERQ15_MASK                       0x8000u
#define DMA_ERQ_ERQ15_SHIFT                      15u
#define DMA_ERQ_ERQ15_WIDTH                      1u
#define DMA_ERQ_ERQ15(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERQ_ERQ15_SHIFT))&DMA_ERQ_ERQ15_MASK)
/* EEI Bit Fields */
#define DMA_EEI_EEI0_MASK                        0x1u
#define DMA_EEI_EEI0_SHIFT                       0u
#define DMA_EEI_EEI0_WIDTH                       1u
#define DMA_EEI_EEI0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI0_SHIFT))&DMA_EEI_EEI0_MASK)
#define DMA_EEI_EEI1_MASK                        0x2u
#define DMA_EEI_EEI1_SHIFT                       1u
#define DMA_EEI_EEI1_WIDTH                       1u
#define DMA_EEI_EEI1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI1_SHIFT))&DMA_EEI_EEI1_MASK)
#define DMA_EEI_EEI2_MASK                        0x4u
#define DMA_EEI_EEI2_SHIFT                       2u
#define DMA_EEI_EEI2_WIDTH                       1u
#define DMA_EEI_EEI2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI2_SHIFT))&DMA_EEI_EEI2_MASK)
#define DMA_EEI_EEI3_MASK                        0x8u
#define DMA_EEI_EEI3_SHIFT                       3u
#define DMA_EEI_EEI3_WIDTH                       1u
#define DMA_EEI_EEI3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI3_SHIFT))&DMA_EEI_EEI3_MASK)
#define DMA_EEI_EEI4_MASK                        0x10u
#define DMA_EEI_EEI4_SHIFT                       4u
#define DMA_EEI_EEI4_WIDTH                       1u
#define DMA_EEI_EEI4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI4_SHIFT))&DMA_EEI_EEI4_MASK)
#define DMA_EEI_EEI5_MASK                        0x20u
#define DMA_EEI_EEI5_SHIFT                       5u
#define DMA_EEI_EEI5_WIDTH                       1u
#define DMA_EEI_EEI5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI5_SHIFT))&DMA_EEI_EEI5_MASK)
#define DMA_EEI_EEI6_MASK                        0x40u
#define DMA_EEI_EEI6_SHIFT                       6u
#define DMA_EEI_EEI6_WIDTH                       1u
#define DMA_EEI_EEI6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI6_SHIFT))&DMA_EEI_EEI6_MASK)
#define DMA_EEI_EEI7_MASK                        0x80u
#define DMA_EEI_EEI7_SHIFT                       7u
#define DMA_EEI_EEI7_WIDTH                       1u
#define DMA_EEI_EEI7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI7_SHIFT))&DMA_EEI_EEI7_MASK)
#define DMA_EEI_EEI8_MASK                        0x100u
#define DMA_EEI_EEI8_SHIFT                       8u
#define DMA_EEI_EEI8_WIDTH                       1u
#define DMA_EEI_EEI8(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI8_SHIFT))&DMA_EEI_EEI8_MASK)
#define DMA_EEI_EEI9_MASK                        0x200u
#define DMA_EEI_EEI9_SHIFT                       9u
#define DMA_EEI_EEI9_WIDTH                       1u
#define DMA_EEI_EEI9(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI9_SHIFT))&DMA_EEI_EEI9_MASK)
#define DMA_EEI_EEI10_MASK                       0x400u
#define DMA_EEI_EEI10_SHIFT                      10u
#define DMA_EEI_EEI10_WIDTH                      1u
#define DMA_EEI_EEI10(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI10_SHIFT))&DMA_EEI_EEI10_MASK)
#define DMA_EEI_EEI11_MASK                       0x800u
#define DMA_EEI_EEI11_SHIFT                      11u
#define DMA_EEI_EEI11_WIDTH                      1u
#define DMA_EEI_EEI11(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI11_SHIFT))&DMA_EEI_EEI11_MASK)
#define DMA_EEI_EEI12_MASK                       0x1000u
#define DMA_EEI_EEI12_SHIFT                      12u
#define DMA_EEI_EEI12_WIDTH                      1u
#define DMA_EEI_EEI12(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI12_SHIFT))&DMA_EEI_EEI12_MASK)
#define DMA_EEI_EEI13_MASK                       0x2000u
#define DMA_EEI_EEI13_SHIFT                      13u
#define DMA_EEI_EEI13_WIDTH                      1u
#define DMA_EEI_EEI13(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI13_SHIFT))&DMA_EEI_EEI13_MASK)
#define DMA_EEI_EEI14_MASK                       0x4000u
#define DMA_EEI_EEI14_SHIFT                      14u
#define DMA_EEI_EEI14_WIDTH                      1u
#define DMA_EEI_EEI14(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI14_SHIFT))&DMA_EEI_EEI14_MASK)
#define DMA_EEI_EEI15_MASK                       0x8000u
#define DMA_EEI_EEI15_SHIFT                      15u
#define DMA_EEI_EEI15_WIDTH                      1u
#define DMA_EEI_EEI15(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_EEI_EEI15_SHIFT))&DMA_EEI_EEI15_MASK)
/* CEEI Bit Fields */
#define DMA_CEEI_CEEI_MASK                       0xFu
#define DMA_CEEI_CEEI_SHIFT                      0u
#define DMA_CEEI_CEEI_WIDTH                      4u
#define DMA_CEEI_CEEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_CEEI_SHIFT))&DMA_CEEI_CEEI_MASK)
#define DMA_CEEI_CAEE_MASK                       0x40u
#define DMA_CEEI_CAEE_SHIFT                      6u
#define DMA_CEEI_CAEE_WIDTH                      1u
#define DMA_CEEI_CAEE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_CAEE_SHIFT))&DMA_CEEI_CAEE_MASK)
#define DMA_CEEI_NOP_MASK                        0x80u
#define DMA_CEEI_NOP_SHIFT                       7u
#define DMA_CEEI_NOP_WIDTH                       1u
#define DMA_CEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CEEI_NOP_SHIFT))&DMA_CEEI_NOP_MASK)
/* SEEI Bit Fields */
#define DMA_SEEI_SEEI_MASK                       0xFu
#define DMA_SEEI_SEEI_SHIFT                      0u
#define DMA_SEEI_SEEI_WIDTH                      4u
#define DMA_SEEI_SEEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_SEEI_SHIFT))&DMA_SEEI_SEEI_MASK)
#define DMA_SEEI_SAEE_MASK                       0x40u
#define DMA_SEEI_SAEE_SHIFT                      6u
#define DMA_SEEI_SAEE_WIDTH                      1u
#define DMA_SEEI_SAEE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_SAEE_SHIFT))&DMA_SEEI_SAEE_MASK)
#define DMA_SEEI_NOP_MASK                        0x80u
#define DMA_SEEI_NOP_SHIFT                       7u
#define DMA_SEEI_NOP_WIDTH                       1u
#define DMA_SEEI_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_SEEI_NOP_SHIFT))&DMA_SEEI_NOP_MASK)
/* CERQ Bit Fields */
#define DMA_CERQ_CERQ_MASK                       0xFu
#define DMA_CERQ_CERQ_SHIFT                      0u
#define DMA_CERQ_CERQ_WIDTH                      4u
#define DMA_CERQ_CERQ(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_CERQ_SHIFT))&DMA_CERQ_CERQ_MASK)
#define DMA_CERQ_CAER_MASK                       0x40u
#define DMA_CERQ_CAER_SHIFT                      6u
#define DMA_CERQ_CAER_WIDTH                      1u
#define DMA_CERQ_CAER(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_CAER_SHIFT))&DMA_CERQ_CAER_MASK)
#define DMA_CERQ_NOP_MASK                        0x80u
#define DMA_CERQ_NOP_SHIFT                       7u
#define DMA_CERQ_NOP_WIDTH                       1u
#define DMA_CERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CERQ_NOP_SHIFT))&DMA_CERQ_NOP_MASK)
/* SERQ Bit Fields */
#define DMA_SERQ_SERQ_MASK                       0xFu
#define DMA_SERQ_SERQ_SHIFT                      0u
#define DMA_SERQ_SERQ_WIDTH                      4u
#define DMA_SERQ_SERQ(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_SERQ_SHIFT))&DMA_SERQ_SERQ_MASK)
#define DMA_SERQ_SAER_MASK                       0x40u
#define DMA_SERQ_SAER_SHIFT                      6u
#define DMA_SERQ_SAER_WIDTH                      1u
#define DMA_SERQ_SAER(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_SAER_SHIFT))&DMA_SERQ_SAER_MASK)
#define DMA_SERQ_NOP_MASK                        0x80u
#define DMA_SERQ_NOP_SHIFT                       7u
#define DMA_SERQ_NOP_WIDTH                       1u
#define DMA_SERQ_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_SERQ_NOP_SHIFT))&DMA_SERQ_NOP_MASK)
/* CDNE Bit Fields */
#define DMA_CDNE_CDNE_MASK                       0xFu
#define DMA_CDNE_CDNE_SHIFT                      0u
#define DMA_CDNE_CDNE_WIDTH                      4u
#define DMA_CDNE_CDNE(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_CDNE_SHIFT))&DMA_CDNE_CDNE_MASK)
#define DMA_CDNE_CADN_MASK                       0x40u
#define DMA_CDNE_CADN_SHIFT                      6u
#define DMA_CDNE_CADN_WIDTH                      1u
#define DMA_CDNE_CADN(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_CADN_SHIFT))&DMA_CDNE_CADN_MASK)
#define DMA_CDNE_NOP_MASK                        0x80u
#define DMA_CDNE_NOP_SHIFT                       7u
#define DMA_CDNE_NOP_WIDTH                       1u
#define DMA_CDNE_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CDNE_NOP_SHIFT))&DMA_CDNE_NOP_MASK)
/* SSRT Bit Fields */
#define DMA_SSRT_SSRT_MASK                       0xFu
#define DMA_SSRT_SSRT_SHIFT                      0u
#define DMA_SSRT_SSRT_WIDTH                      4u
#define DMA_SSRT_SSRT(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_SSRT_SHIFT))&DMA_SSRT_SSRT_MASK)
#define DMA_SSRT_SAST_MASK                       0x40u
#define DMA_SSRT_SAST_SHIFT                      6u
#define DMA_SSRT_SAST_WIDTH                      1u
#define DMA_SSRT_SAST(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_SAST_SHIFT))&DMA_SSRT_SAST_MASK)
#define DMA_SSRT_NOP_MASK                        0x80u
#define DMA_SSRT_NOP_SHIFT                       7u
#define DMA_SSRT_NOP_WIDTH                       1u
#define DMA_SSRT_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_SSRT_NOP_SHIFT))&DMA_SSRT_NOP_MASK)
/* CERR Bit Fields */
#define DMA_CERR_CERR_MASK                       0xFu
#define DMA_CERR_CERR_SHIFT                      0u
#define DMA_CERR_CERR_WIDTH                      4u
#define DMA_CERR_CERR(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERR_CERR_SHIFT))&DMA_CERR_CERR_MASK)
#define DMA_CERR_CAEI_MASK                       0x40u
#define DMA_CERR_CAEI_SHIFT                      6u
#define DMA_CERR_CAEI_WIDTH                      1u
#define DMA_CERR_CAEI(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CERR_CAEI_SHIFT))&DMA_CERR_CAEI_MASK)
#define DMA_CERR_NOP_MASK                        0x80u
#define DMA_CERR_NOP_SHIFT                       7u
#define DMA_CERR_NOP_WIDTH                       1u
#define DMA_CERR_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CERR_NOP_SHIFT))&DMA_CERR_NOP_MASK)
/* CINT Bit Fields */
#define DMA_CINT_CINT_MASK                       0xFu
#define DMA_CINT_CINT_SHIFT                      0u
#define DMA_CINT_CINT_WIDTH                      4u
#define DMA_CINT_CINT(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CINT_CINT_SHIFT))&DMA_CINT_CINT_MASK)
#define DMA_CINT_CAIR_MASK                       0x40u
#define DMA_CINT_CAIR_SHIFT                      6u
#define DMA_CINT_CAIR_WIDTH                      1u
#define DMA_CINT_CAIR(x)                         (((uint8_t)(((uint8_t)(x))<<DMA_CINT_CAIR_SHIFT))&DMA_CINT_CAIR_MASK)
#define DMA_CINT_NOP_MASK                        0x80u
#define DMA_CINT_NOP_SHIFT                       7u
#define DMA_CINT_NOP_WIDTH                       1u
#define DMA_CINT_NOP(x)                          (((uint8_t)(((uint8_t)(x))<<DMA_CINT_NOP_SHIFT))&DMA_CINT_NOP_MASK)
/* INT Bit Fields */
#define DMA_INT_INT0_MASK                        0x1u
#define DMA_INT_INT0_SHIFT                       0u
#define DMA_INT_INT0_WIDTH                       1u
#define DMA_INT_INT0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT0_SHIFT))&DMA_INT_INT0_MASK)
#define DMA_INT_INT1_MASK                        0x2u
#define DMA_INT_INT1_SHIFT                       1u
#define DMA_INT_INT1_WIDTH                       1u
#define DMA_INT_INT1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT1_SHIFT))&DMA_INT_INT1_MASK)
#define DMA_INT_INT2_MASK                        0x4u
#define DMA_INT_INT2_SHIFT                       2u
#define DMA_INT_INT2_WIDTH                       1u
#define DMA_INT_INT2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT2_SHIFT))&DMA_INT_INT2_MASK)
#define DMA_INT_INT3_MASK                        0x8u
#define DMA_INT_INT3_SHIFT                       3u
#define DMA_INT_INT3_WIDTH                       1u
#define DMA_INT_INT3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT3_SHIFT))&DMA_INT_INT3_MASK)
#define DMA_INT_INT4_MASK                        0x10u
#define DMA_INT_INT4_SHIFT                       4u
#define DMA_INT_INT4_WIDTH                       1u
#define DMA_INT_INT4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT4_SHIFT))&DMA_INT_INT4_MASK)
#define DMA_INT_INT5_MASK                        0x20u
#define DMA_INT_INT5_SHIFT                       5u
#define DMA_INT_INT5_WIDTH                       1u
#define DMA_INT_INT5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT5_SHIFT))&DMA_INT_INT5_MASK)
#define DMA_INT_INT6_MASK                        0x40u
#define DMA_INT_INT6_SHIFT                       6u
#define DMA_INT_INT6_WIDTH                       1u
#define DMA_INT_INT6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT6_SHIFT))&DMA_INT_INT6_MASK)
#define DMA_INT_INT7_MASK                        0x80u
#define DMA_INT_INT7_SHIFT                       7u
#define DMA_INT_INT7_WIDTH                       1u
#define DMA_INT_INT7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT7_SHIFT))&DMA_INT_INT7_MASK)
#define DMA_INT_INT8_MASK                        0x100u
#define DMA_INT_INT8_SHIFT                       8u
#define DMA_INT_INT8_WIDTH                       1u
#define DMA_INT_INT8(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT8_SHIFT))&DMA_INT_INT8_MASK)
#define DMA_INT_INT9_MASK                        0x200u
#define DMA_INT_INT9_SHIFT                       9u
#define DMA_INT_INT9_WIDTH                       1u
#define DMA_INT_INT9(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT9_SHIFT))&DMA_INT_INT9_MASK)
#define DMA_INT_INT10_MASK                       0x400u
#define DMA_INT_INT10_SHIFT                      10u
#define DMA_INT_INT10_WIDTH                      1u
#define DMA_INT_INT10(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT10_SHIFT))&DMA_INT_INT10_MASK)
#define DMA_INT_INT11_MASK                       0x800u
#define DMA_INT_INT11_SHIFT                      11u
#define DMA_INT_INT11_WIDTH                      1u
#define DMA_INT_INT11(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT11_SHIFT))&DMA_INT_INT11_MASK)
#define DMA_INT_INT12_MASK                       0x1000u
#define DMA_INT_INT12_SHIFT                      12u
#define DMA_INT_INT12_WIDTH                      1u
#define DMA_INT_INT12(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT12_SHIFT))&DMA_INT_INT12_MASK)
#define DMA_INT_INT13_MASK                       0x2000u
#define DMA_INT_INT13_SHIFT                      13u
#define DMA_INT_INT13_WIDTH                      1u
#define DMA_INT_INT13(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT13_SHIFT))&DMA_INT_INT13_MASK)
#define DMA_INT_INT14_MASK                       0x4000u
#define DMA_INT_INT14_SHIFT                      14u
#define DMA_INT_INT14_WIDTH                      1u
#define DMA_INT_INT14(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT14_SHIFT))&DMA_INT_INT14_MASK)
#define DMA_INT_INT15_MASK                       0x8000u
#define DMA_INT_INT15_SHIFT                      15u
#define DMA_INT_INT15_WIDTH                      1u
#define DMA_INT_INT15(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_INT_INT15_SHIFT))&DMA_INT_INT15_MASK)
/* ERR Bit Fields */
#define DMA_ERR_ERR0_MASK                        0x1u
#define DMA_ERR_ERR0_SHIFT                       0u
#define DMA_ERR_ERR0_WIDTH                       1u
#define DMA_ERR_ERR0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR0_SHIFT))&DMA_ERR_ERR0_MASK)
#define DMA_ERR_ERR1_MASK                        0x2u
#define DMA_ERR_ERR1_SHIFT                       1u
#define DMA_ERR_ERR1_WIDTH                       1u
#define DMA_ERR_ERR1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR1_SHIFT))&DMA_ERR_ERR1_MASK)
#define DMA_ERR_ERR2_MASK                        0x4u
#define DMA_ERR_ERR2_SHIFT                       2u
#define DMA_ERR_ERR2_WIDTH                       1u
#define DMA_ERR_ERR2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR2_SHIFT))&DMA_ERR_ERR2_MASK)
#define DMA_ERR_ERR3_MASK                        0x8u
#define DMA_ERR_ERR3_SHIFT                       3u
#define DMA_ERR_ERR3_WIDTH                       1u
#define DMA_ERR_ERR3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR3_SHIFT))&DMA_ERR_ERR3_MASK)
#define DMA_ERR_ERR4_MASK                        0x10u
#define DMA_ERR_ERR4_SHIFT                       4u
#define DMA_ERR_ERR4_WIDTH                       1u
#define DMA_ERR_ERR4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR4_SHIFT))&DMA_ERR_ERR4_MASK)
#define DMA_ERR_ERR5_MASK                        0x20u
#define DMA_ERR_ERR5_SHIFT                       5u
#define DMA_ERR_ERR5_WIDTH                       1u
#define DMA_ERR_ERR5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR5_SHIFT))&DMA_ERR_ERR5_MASK)
#define DMA_ERR_ERR6_MASK                        0x40u
#define DMA_ERR_ERR6_SHIFT                       6u
#define DMA_ERR_ERR6_WIDTH                       1u
#define DMA_ERR_ERR6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR6_SHIFT))&DMA_ERR_ERR6_MASK)
#define DMA_ERR_ERR7_MASK                        0x80u
#define DMA_ERR_ERR7_SHIFT                       7u
#define DMA_ERR_ERR7_WIDTH                       1u
#define DMA_ERR_ERR7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR7_SHIFT))&DMA_ERR_ERR7_MASK)
#define DMA_ERR_ERR8_MASK                        0x100u
#define DMA_ERR_ERR8_SHIFT                       8u
#define DMA_ERR_ERR8_WIDTH                       1u
#define DMA_ERR_ERR8(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR8_SHIFT))&DMA_ERR_ERR8_MASK)
#define DMA_ERR_ERR9_MASK                        0x200u
#define DMA_ERR_ERR9_SHIFT                       9u
#define DMA_ERR_ERR9_WIDTH                       1u
#define DMA_ERR_ERR9(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR9_SHIFT))&DMA_ERR_ERR9_MASK)
#define DMA_ERR_ERR10_MASK                       0x400u
#define DMA_ERR_ERR10_SHIFT                      10u
#define DMA_ERR_ERR10_WIDTH                      1u
#define DMA_ERR_ERR10(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR10_SHIFT))&DMA_ERR_ERR10_MASK)
#define DMA_ERR_ERR11_MASK                       0x800u
#define DMA_ERR_ERR11_SHIFT                      11u
#define DMA_ERR_ERR11_WIDTH                      1u
#define DMA_ERR_ERR11(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR11_SHIFT))&DMA_ERR_ERR11_MASK)
#define DMA_ERR_ERR12_MASK                       0x1000u
#define DMA_ERR_ERR12_SHIFT                      12u
#define DMA_ERR_ERR12_WIDTH                      1u
#define DMA_ERR_ERR12(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR12_SHIFT))&DMA_ERR_ERR12_MASK)
#define DMA_ERR_ERR13_MASK                       0x2000u
#define DMA_ERR_ERR13_SHIFT                      13u
#define DMA_ERR_ERR13_WIDTH                      1u
#define DMA_ERR_ERR13(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR13_SHIFT))&DMA_ERR_ERR13_MASK)
#define DMA_ERR_ERR14_MASK                       0x4000u
#define DMA_ERR_ERR14_SHIFT                      14u
#define DMA_ERR_ERR14_WIDTH                      1u
#define DMA_ERR_ERR14(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR14_SHIFT))&DMA_ERR_ERR14_MASK)
#define DMA_ERR_ERR15_MASK                       0x8000u
#define DMA_ERR_ERR15_SHIFT                      15u
#define DMA_ERR_ERR15_WIDTH                      1u
#define DMA_ERR_ERR15(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_ERR_ERR15_SHIFT))&DMA_ERR_ERR15_MASK)
/* HRS Bit Fields */
#define DMA_HRS_HRS0_MASK                        0x1u
#define DMA_HRS_HRS0_SHIFT                       0u
#define DMA_HRS_HRS0_WIDTH                       1u
#define DMA_HRS_HRS0(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS0_SHIFT))&DMA_HRS_HRS0_MASK)
#define DMA_HRS_HRS1_MASK                        0x2u
#define DMA_HRS_HRS1_SHIFT                       1u
#define DMA_HRS_HRS1_WIDTH                       1u
#define DMA_HRS_HRS1(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS1_SHIFT))&DMA_HRS_HRS1_MASK)
#define DMA_HRS_HRS2_MASK                        0x4u
#define DMA_HRS_HRS2_SHIFT                       2u
#define DMA_HRS_HRS2_WIDTH                       1u
#define DMA_HRS_HRS2(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS2_SHIFT))&DMA_HRS_HRS2_MASK)
#define DMA_HRS_HRS3_MASK                        0x8u
#define DMA_HRS_HRS3_SHIFT                       3u
#define DMA_HRS_HRS3_WIDTH                       1u
#define DMA_HRS_HRS3(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS3_SHIFT))&DMA_HRS_HRS3_MASK)
#define DMA_HRS_HRS4_MASK                        0x10u
#define DMA_HRS_HRS4_SHIFT                       4u
#define DMA_HRS_HRS4_WIDTH                       1u
#define DMA_HRS_HRS4(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS4_SHIFT))&DMA_HRS_HRS4_MASK)
#define DMA_HRS_HRS5_MASK                        0x20u
#define DMA_HRS_HRS5_SHIFT                       5u
#define DMA_HRS_HRS5_WIDTH                       1u
#define DMA_HRS_HRS5(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS5_SHIFT))&DMA_HRS_HRS5_MASK)
#define DMA_HRS_HRS6_MASK                        0x40u
#define DMA_HRS_HRS6_SHIFT                       6u
#define DMA_HRS_HRS6_WIDTH                       1u
#define DMA_HRS_HRS6(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS6_SHIFT))&DMA_HRS_HRS6_MASK)
#define DMA_HRS_HRS7_MASK                        0x80u
#define DMA_HRS_HRS7_SHIFT                       7u
#define DMA_HRS_HRS7_WIDTH                       1u
#define DMA_HRS_HRS7(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS7_SHIFT))&DMA_HRS_HRS7_MASK)
#define DMA_HRS_HRS8_MASK                        0x100u
#define DMA_HRS_HRS8_SHIFT                       8u
#define DMA_HRS_HRS8_WIDTH                       1u
#define DMA_HRS_HRS8(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS8_SHIFT))&DMA_HRS_HRS8_MASK)
#define DMA_HRS_HRS9_MASK                        0x200u
#define DMA_HRS_HRS9_SHIFT                       9u
#define DMA_HRS_HRS9_WIDTH                       1u
#define DMA_HRS_HRS9(x)                          (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS9_SHIFT))&DMA_HRS_HRS9_MASK)
#define DMA_HRS_HRS10_MASK                       0x400u
#define DMA_HRS_HRS10_SHIFT                      10u
#define DMA_HRS_HRS10_WIDTH                      1u
#define DMA_HRS_HRS10(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS10_SHIFT))&DMA_HRS_HRS10_MASK)
#define DMA_HRS_HRS11_MASK                       0x800u
#define DMA_HRS_HRS11_SHIFT                      11u
#define DMA_HRS_HRS11_WIDTH                      1u
#define DMA_HRS_HRS11(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS11_SHIFT))&DMA_HRS_HRS11_MASK)
#define DMA_HRS_HRS12_MASK                       0x1000u
#define DMA_HRS_HRS12_SHIFT                      12u
#define DMA_HRS_HRS12_WIDTH                      1u
#define DMA_HRS_HRS12(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS12_SHIFT))&DMA_HRS_HRS12_MASK)
#define DMA_HRS_HRS13_MASK                       0x2000u
#define DMA_HRS_HRS13_SHIFT                      13u
#define DMA_HRS_HRS13_WIDTH                      1u
#define DMA_HRS_HRS13(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS13_SHIFT))&DMA_HRS_HRS13_MASK)
#define DMA_HRS_HRS14_MASK                       0x4000u
#define DMA_HRS_HRS14_SHIFT                      14u
#define DMA_HRS_HRS14_WIDTH                      1u
#define DMA_HRS_HRS14(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS14_SHIFT))&DMA_HRS_HRS14_MASK)
#define DMA_HRS_HRS15_MASK                       0x8000u
#define DMA_HRS_HRS15_SHIFT                      15u
#define DMA_HRS_HRS15_WIDTH                      1u
#define DMA_HRS_HRS15(x)                         (((uint32_t)(((uint32_t)(x))<<DMA_HRS_HRS15_SHIFT))&DMA_HRS_HRS15_MASK)
/* EARS Bit Fields */
#define DMA_EARS_EDREQ_0_MASK                    0x1u
#define DMA_EARS_EDREQ_0_SHIFT                   0u
#define DMA_EARS_EDREQ_0_WIDTH                   1u
#define DMA_EARS_EDREQ_0(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_0_SHIFT))&DMA_EARS_EDREQ_0_MASK)
#define DMA_EARS_EDREQ_1_MASK                    0x2u
#define DMA_EARS_EDREQ_1_SHIFT                   1u
#define DMA_EARS_EDREQ_1_WIDTH                   1u
#define DMA_EARS_EDREQ_1(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_1_SHIFT))&DMA_EARS_EDREQ_1_MASK)
#define DMA_EARS_EDREQ_2_MASK                    0x4u
#define DMA_EARS_EDREQ_2_SHIFT                   2u
#define DMA_EARS_EDREQ_2_WIDTH                   1u
#define DMA_EARS_EDREQ_2(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_2_SHIFT))&DMA_EARS_EDREQ_2_MASK)
#define DMA_EARS_EDREQ_3_MASK                    0x8u
#define DMA_EARS_EDREQ_3_SHIFT                   3u
#define DMA_EARS_EDREQ_3_WIDTH                   1u
#define DMA_EARS_EDREQ_3(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_3_SHIFT))&DMA_EARS_EDREQ_3_MASK)
#define DMA_EARS_EDREQ_4_MASK                    0x10u
#define DMA_EARS_EDREQ_4_SHIFT                   4u
#define DMA_EARS_EDREQ_4_WIDTH                   1u
#define DMA_EARS_EDREQ_4(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_4_SHIFT))&DMA_EARS_EDREQ_4_MASK)
#define DMA_EARS_EDREQ_5_MASK                    0x20u
#define DMA_EARS_EDREQ_5_SHIFT                   5u
#define DMA_EARS_EDREQ_5_WIDTH                   1u
#define DMA_EARS_EDREQ_5(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_5_SHIFT))&DMA_EARS_EDREQ_5_MASK)
#define DMA_EARS_EDREQ_6_MASK                    0x40u
#define DMA_EARS_EDREQ_6_SHIFT                   6u
#define DMA_EARS_EDREQ_6_WIDTH                   1u
#define DMA_EARS_EDREQ_6(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_6_SHIFT))&DMA_EARS_EDREQ_6_MASK)
#define DMA_EARS_EDREQ_7_MASK                    0x80u
#define DMA_EARS_EDREQ_7_SHIFT                   7u
#define DMA_EARS_EDREQ_7_WIDTH                   1u
#define DMA_EARS_EDREQ_7(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_7_SHIFT))&DMA_EARS_EDREQ_7_MASK)
#define DMA_EARS_EDREQ_8_MASK                    0x100u
#define DMA_EARS_EDREQ_8_SHIFT                   8u
#define DMA_EARS_EDREQ_8_WIDTH                   1u
#define DMA_EARS_EDREQ_8(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_8_SHIFT))&DMA_EARS_EDREQ_8_MASK)
#define DMA_EARS_EDREQ_9_MASK                    0x200u
#define DMA_EARS_EDREQ_9_SHIFT                   9u
#define DMA_EARS_EDREQ_9_WIDTH                   1u
#define DMA_EARS_EDREQ_9(x)                      (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_9_SHIFT))&DMA_EARS_EDREQ_9_MASK)
#define DMA_EARS_EDREQ_10_MASK                   0x400u
#define DMA_EARS_EDREQ_10_SHIFT                  10u
#define DMA_EARS_EDREQ_10_WIDTH                  1u
#define DMA_EARS_EDREQ_10(x)                     (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_10_SHIFT))&DMA_EARS_EDREQ_10_MASK)
#define DMA_EARS_EDREQ_11_MASK                   0x800u
#define DMA_EARS_EDREQ_11_SHIFT                  11u
#define DMA_EARS_EDREQ_11_WIDTH                  1u
#define DMA_EARS_EDREQ_11(x)                     (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_11_SHIFT))&DMA_EARS_EDREQ_11_MASK)
#define DMA_EARS_EDREQ_12_MASK                   0x1000u
#define DMA_EARS_EDREQ_12_SHIFT                  12u
#define DMA_EARS_EDREQ_12_WIDTH                  1u
#define DMA_EARS_EDREQ_12(x)                     (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_12_SHIFT))&DMA_EARS_EDREQ_12_MASK)
#define DMA_EARS_EDREQ_13_MASK                   0x2000u
#define DMA_EARS_EDREQ_13_SHIFT                  13u
#define DMA_EARS_EDREQ_13_WIDTH                  1u
#define DMA_EARS_EDREQ_13(x)                     (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_13_SHIFT))&DMA_EARS_EDREQ_13_MASK)
#define DMA_EARS_EDREQ_14_MASK                   0x4000u
#define DMA_EARS_EDREQ_14_SHIFT                  14u
#define DMA_EARS_EDREQ_14_WIDTH                  1u
#define DMA_EARS_EDREQ_14(x)                     (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_14_SHIFT))&DMA_EARS_EDREQ_14_MASK)
#define DMA_EARS_EDREQ_15_MASK                   0x8000u
#define DMA_EARS_EDREQ_15_SHIFT                  15u
#define DMA_EARS_EDREQ_15_WIDTH                  1u
#define DMA_EARS_EDREQ_15(x)                     (((uint32_t)(((uint32_t)(x))<<DMA_EARS_EDREQ_15_SHIFT))&DMA_EARS_EDREQ_15_MASK)
/* DCHPRI Bit Fields */
#define DMA_DCHPRI_CHPRI_MASK                    0xFu
#define DMA_DCHPRI_CHPRI_SHIFT                   0u
#define DMA_DCHPRI_CHPRI_WIDTH                   4u
#define DMA_DCHPRI_CHPRI(x)                      (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_CHPRI_SHIFT))&DMA_DCHPRI_CHPRI_MASK)
#define DMA_DCHPRI_DPA_MASK                      0x40u
#define DMA_DCHPRI_DPA_SHIFT                     6u
#define DMA_DCHPRI_DPA_WIDTH                     1u
#define DMA_DCHPRI_DPA(x)                        (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_DPA_SHIFT))&DMA_DCHPRI_DPA_MASK)
#define DMA_DCHPRI_ECP_MASK                      0x80u
#define DMA_DCHPRI_ECP_SHIFT                     7u
#define DMA_DCHPRI_ECP_WIDTH                     1u
#define DMA_DCHPRI_ECP(x)                        (((uint8_t)(((uint8_t)(x))<<DMA_DCHPRI_ECP_SHIFT))&DMA_DCHPRI_ECP_MASK)
/* TCD_SADDR Bit Fields */
#define DMA_TCD_SADDR_SADDR_MASK                 0xFFFFFFFFu
#define DMA_TCD_SADDR_SADDR_SHIFT                0u
#define DMA_TCD_SADDR_SADDR_WIDTH                32u
#define DMA_TCD_SADDR_SADDR(x)                   (((uint32_t)(((uint32_t)(x))<<DMA_TCD_SADDR_SADDR_SHIFT))&DMA_TCD_SADDR_SADDR_MASK)
/* TCD_SOFF Bit Fields */
#define DMA_TCD_SOFF_SOFF_MASK                   0xFFFFu
#define DMA_TCD_SOFF_SOFF_SHIFT                  0u
#define DMA_TCD_SOFF_SOFF_WIDTH                  16u
#define DMA_TCD_SOFF_SOFF(x)                     (((uint16_t)(((uint16_t)(x))<<DMA_TCD_SOFF_SOFF_SHIFT))&DMA_TCD_SOFF_SOFF_MASK)
/* TCD_ATTR Bit Fields */
#define DMA_TCD_ATTR_DSIZE_MASK                  0x7u
#define DMA_TCD_ATTR_DSIZE_SHIFT                 0u
#define DMA_TCD_ATTR_DSIZE_WIDTH                 3u
#define DMA_TCD_ATTR_DSIZE(x)                    (((uint16_t)(((uint16_t)(x))<<DMA_TCD_ATTR_DSIZE_SHIFT))&DMA_TCD_ATTR_DSIZE_MASK)
#define DMA_TCD_ATTR_DMOD_MASK                   0xF8u
#define DMA_TCD_ATTR_DMOD_SHIFT                  3u
#define DMA_TCD_ATTR_DMOD_WIDTH                  5u
#define DMA_TCD_ATTR_DMOD(x)                     (((uint16_t)(((uint16_t)(x))<<DMA_TCD_ATTR_DMOD_SHIFT))&DMA_TCD_ATTR_DMOD_MASK)
#define DMA_TCD_ATTR_SSIZE_MASK                  0x700u
#define DMA_TCD_ATTR_SSIZE_SHIFT                 8u
#define DMA_TCD_ATTR_SSIZE_WIDTH                 3u
#define DMA_TCD_ATTR_SSIZE(x)                    (((uint16_t)(((uint16_t)(x))<<DMA_TCD_ATTR_SSIZE_SHIFT))&DMA_TCD_ATTR_SSIZE_MASK)
#define DMA_TCD_ATTR_SMOD_MASK                   0xF800u
#define DMA_TCD_ATTR_SMOD_SHIFT                  11u
#define DMA_TCD_ATTR_SMOD_WIDTH                  5u
#define DMA_TCD_ATTR_SMOD(x)                     (((uint16_t)(((uint16_t)(x))<<DMA_TCD_ATTR_SMOD_SHIFT))&DMA_TCD_ATTR_SMOD_MASK)
/* TCD_NBYTES_MLNO Bit Fields */
#define DMA_TCD_NBYTES_MLNO_NBYTES_MASK          0xFFFFFFFFu
#define DMA_TCD_NBYTES_MLNO_NBYTES_SHIFT         0u
#define DMA_TCD_NBYTES_MLNO_NBYTES_WIDTH         32u
#define DMA_TCD_NBYTES_MLNO_NBYTES(x)            (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLNO_NBYTES_SHIFT))&DMA_TCD_NBYTES_MLNO_NBYTES_MASK)
/* TCD_NBYTES_MLOFFNO Bit Fields */
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES_MASK       0x3FFFFFFFu
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES_SHIFT      0u
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES_WIDTH      30u
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES(x)         (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFNO_NBYTES_SHIFT))&DMA_TCD_NBYTES_MLOFFNO_NBYTES_MASK)
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE_MASK        0x40000000u
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE_SHIFT       30u
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE_WIDTH       1u
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE(x)          (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFNO_DMLOE_SHIFT))&DMA_TCD_NBYTES_MLOFFNO_DMLOE_MASK)
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE_MASK        0x80000000u
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE_SHIFT       31u
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE_WIDTH       1u
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE(x)          (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFNO_SMLOE_SHIFT))&DMA_TCD_NBYTES_MLOFFNO_SMLOE_MASK)
/* TCD_NBYTES_MLOFFYES Bit Fields */
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES_MASK      0x3FFu
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES_SHIFT     0u
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES_WIDTH     10u
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES(x)        (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFYES_NBYTES_SHIFT))&DMA_TCD_NBYTES_MLOFFYES_NBYTES_MASK)
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF_MASK       0x3FFFFC00u
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF_SHIFT      10u
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF_WIDTH      20u
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF(x)         (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFYES_MLOFF_SHIFT))&DMA_TCD_NBYTES_MLOFFYES_MLOFF_MASK)
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE_MASK       0x40000000u
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE_SHIFT      30u
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE_WIDTH      1u
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE(x)         (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFYES_DMLOE_SHIFT))&DMA_TCD_NBYTES_MLOFFYES_DMLOE_MASK)
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE_MASK       0x80000000u
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE_SHIFT      31u
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE_WIDTH      1u
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE(x)         (((uint32_t)(((uint32_t)(x))<<DMA_TCD_NBYTES_MLOFFYES_SMLOE_SHIFT))&DMA_TCD_NBYTES_MLOFFYES_SMLOE_MASK)
/* TCD_SLAST Bit Fields */
#define DMA_TCD_SLAST_SLAST_MASK                 0xFFFFFFFFu
#define DMA_TCD_SLAST_SLAST_SHIFT                0u
#define DMA_TCD_SLAST_SLAST_WIDTH                32u
#define DMA_TCD_SLAST_SLAST(x)                   (((uint32_t)(((uint32_t)(x))<<DMA_TCD_SLAST_SLAST_SHIFT))&DMA_TCD_SLAST_SLAST_MASK)
/* TCD_DADDR Bit Fields */
#define DMA_TCD_DADDR_DADDR_MASK                 0xFFFFFFFFu
#define DMA_TCD_DADDR_DADDR_SHIFT                0u
#define DMA_TCD_DADDR_DADDR_WIDTH                32u
#define DMA_TCD_DADDR_DADDR(x)                   (((uint32_t)(((uint32_t)(x))<<DMA_TCD_DADDR_DADDR_SHIFT))&DMA_TCD_DADDR_DADDR_MASK)
/* TCD_DOFF Bit Fields */
#define DMA_TCD_DOFF_DOFF_MASK                   0xFFFFu
#define DMA_TCD_DOFF_DOFF_SHIFT                  0u
#define DMA_TCD_DOFF_DOFF_WIDTH                  16u
#define DMA_TCD_DOFF_DOFF(x)                     (((uint16_t)(((uint16_t)(x))<<DMA_TCD_DOFF_DOFF_SHIFT))&DMA_TCD_DOFF_DOFF_MASK)
/* TCD_CITER_ELINKNO Bit Fields */
#define DMA_TCD_CITER_ELINKNO_CITER_MASK         0x7FFFu
#define DMA_TCD_CITER_ELINKNO_CITER_SHIFT        0u
#define DMA_TCD_CITER_ELINKNO_CITER_WIDTH        15u
#define DMA_TCD_CITER_ELINKNO_CITER(x)           (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CITER_ELINKNO_CITER_SHIFT))&DMA_TCD_CITER_ELINKNO_CITER_MASK)
#define DMA_TCD_CITER_ELINKNO_ELINK_MASK         0x8000u
#define DMA_TCD_CITER_ELINKNO_ELINK_SHIFT        15u
#define DMA_TCD_CITER_ELINKNO_ELINK_WIDTH        1u
#define DMA_TCD_CITER_ELINKNO_ELINK(x)           (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CITER_ELINKNO_ELINK_SHIFT))&DMA_TCD_CITER_ELINKNO_ELINK_MASK)
/* TCD_CITER_ELINKYES Bit Fields */
#define DMA_TCD_CITER_ELINKYES_CITER_LE_MASK     0x1FFu
#define DMA_TCD_CITER_ELINKYES_CITER_LE_SHIFT    0u
#define DMA_TCD_CITER_ELINKYES_CITER_LE_WIDTH    9u
#define DMA_TCD_CITER_ELINKYES_CITER_LE(x)       (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CITER_ELINKYES_CITER_LE_SHIFT))&DMA_TCD_CITER_ELINKYES_CITER_LE_MASK)
#define DMA_TCD_CITER_ELINKYES_LINKCH_MASK       0x1E00u
#define DMA_TCD_CITER_ELINKYES_LINKCH_SHIFT      9u
#define DMA_TCD_CITER_ELINKYES_LINKCH_WIDTH      4u
#define DMA_TCD_CITER_ELINKYES_LINKCH(x)         (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CITER_ELINKYES_LINKCH_SHIFT))&DMA_TCD_CITER_ELINKYES_LINKCH_MASK)
#define DMA_TCD_CITER_ELINKYES_ELINK_MASK        0x8000u
#define DMA_TCD_CITER_ELINKYES_ELINK_SHIFT       15u
#define DMA_TCD_CITER_ELINKYES_ELINK_WIDTH       1u
#define DMA_TCD_CITER_ELINKYES_ELINK(x)          (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CITER_ELINKYES_ELINK_SHIFT))&DMA_TCD_CITER_ELINKYES_ELINK_MASK)
/* TCD_DLASTSGA Bit Fields */
#define DMA_TCD_DLASTSGA_DLASTSGA_MASK           0xFFFFFFFFu
#define DMA_TCD_DLASTSGA_DLASTSGA_SHIFT          0u
#define DMA_TCD_DLASTSGA_DLASTSGA_WIDTH          32u
#define DMA_TCD_DLASTSGA_DLASTSGA(x)             (((uint32_t)(((uint32_t)(x))<<DMA_TCD_DLASTSGA_DLASTSGA_SHIFT))&DMA_TCD_DLASTSGA_DLASTSGA_MASK)
/* TCD_CSR Bit Fields */
#define DMA_TCD_CSR_START_MASK                   0x1u
#define DMA_TCD_CSR_START_SHIFT                  0u
#define DMA_TCD_CSR_START_WIDTH                  1u
#define DMA_TCD_CSR_START(x)                     (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_START_SHIFT))&DMA_TCD_CSR_START_MASK)
#define DMA_TCD_CSR_INTMAJOR_MASK                0x2u
#define DMA_TCD_CSR_INTMAJOR_SHIFT               1u
#define DMA_TCD_CSR_INTMAJOR_WIDTH               1u
#define DMA_TCD_CSR_INTMAJOR(x)                  (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_INTMAJOR_SHIFT))&DMA_TCD_CSR_INTMAJOR_MASK)
#define DMA_TCD_CSR_INTHALF_MASK                 0x4u
#define DMA_TCD_CSR_INTHALF_SHIFT                2u
#define DMA_TCD_CSR_INTHALF_WIDTH                1u
#define DMA_TCD_CSR_INTHALF(x)                   (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_INTHALF_SHIFT))&DMA_TCD_CSR_INTHALF_MASK)
#define DMA_TCD_CSR_DREQ_MASK                    0x8u
#define DMA_TCD_CSR_DREQ_SHIFT                   3u
#define DMA_TCD_CSR_DREQ_WIDTH                   1u
#define DMA_TCD_CSR_DREQ(x)                      (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_DREQ_SHIFT))&DMA_TCD_CSR_DREQ_MASK)
#define DMA_TCD_CSR_ESG_MASK                     0x10u
#define DMA_TCD_CSR_ESG_SHIFT                    4u
#define DMA_TCD_CSR_ESG_WIDTH                    1u
#define DMA_TCD_CSR_ESG(x)                       (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_ESG_SHIFT))&DMA_TCD_CSR_ESG_MASK)
#define DMA_TCD_CSR_MAJORELINK_MASK              0x20u
#define DMA_TCD_CSR_MAJORELINK_SHIFT             5u
#define DMA_TCD_CSR_MAJORELINK_WIDTH             1u
#define DMA_TCD_CSR_MAJORELINK(x)                (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_MAJORELINK_SHIFT))&DMA_TCD_CSR_MAJORELINK_MASK)
#define DMA_TCD_CSR_ACTIVE_MASK                  0x40u
#define DMA_TCD_CSR_ACTIVE_SHIFT                 6u
#define DMA_TCD_CSR_ACTIVE_WIDTH                 1u
#define DMA_TCD_CSR_ACTIVE(x)                    (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_ACTIVE_SHIFT))&DMA_TCD_CSR_ACTIVE_MASK)
#define DMA_TCD_CSR_DONE_MASK                    0x80u
#define DMA_TCD_CSR_DONE_SHIFT                   7u
#define DMA_TCD_CSR_DONE_WIDTH                   1u
#define DMA_TCD_CSR_DONE(x)                      (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_DONE_SHIFT))&DMA_TCD_CSR_DONE_MASK)
#define DMA_TCD_CSR_MAJORLINKCH_MASK             0xF00u
#define DMA_TCD_CSR_MAJORLINKCH_SHIFT            8u
#define DMA_TCD_CSR_MAJORLINKCH_WIDTH            4u
#define DMA_TCD_CSR_MAJORLINKCH(x)               (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_MAJORLINKCH_SHIFT))&DMA_TCD_CSR_MAJORLINKCH_MASK)
#define DMA_TCD_CSR_BWC_MASK                     0xC000u
#define DMA_TCD_CSR_BWC_SHIFT                    14u
#define DMA_TCD_CSR_BWC_WIDTH                    2u
#define DMA_TCD_CSR_BWC(x)                       (((uint16_t)(((uint16_t)(x))<<DMA_TCD_CSR_BWC_SHIFT))&DMA_TCD_CSR_BWC_MASK)
/* TCD_BITER_ELINKNO Bit Fields */
#define DMA_TCD_BITER_ELINKNO_BITER_MASK         0x7FFFu
#define DMA_TCD_BITER_ELINKNO_BITER_SHIFT        0u
#define DMA_TCD_BITER_ELINKNO_BITER_WIDTH        15u
#define DMA_TCD_BITER_ELINKNO_BITER(x)           (((uint16_t)(((uint16_t)(x))<<DMA_TCD_BITER_ELINKNO_BITER_SHIFT))&DMA_TCD_BITER_ELINKNO_BITER_MASK)
#define DMA_TCD_BITER_ELINKNO_ELINK_MASK         0x8000u
#define DMA_TCD_BITER_ELINKNO_ELINK_SHIFT        15u
#define DMA_TCD_BITER_ELINKNO_ELINK_WIDTH        1u
#define DMA_TCD_BITER_ELINKNO_ELINK(x)           (((uint16_t)(((uint16_t)(x))<<DMA_TCD_BITER_ELINKNO_ELINK_SHIFT))&DMA_TCD_BITER_ELINKNO_ELINK_MASK)
/* TCD_BITER_ELINKYES Bit Fields */
#define DMA_TCD_BITER_ELINKYES_BITER_MASK        0x1FFu
#define DMA_TCD_BITER_ELINKYES_BITER_SHIFT       0u
#define DMA_TCD_BITER_ELINKYES_BITER_WIDTH       9u
#define DMA_TCD_BITER_ELINKYES_BITER(x)          (((uint16_t)(((uint16_t)(x))<<DMA_TCD_BITER_ELINKYES_BITER_SHIFT))&DMA_TCD_BITER_ELINKYES_BITER_MASK)
#define DMA_TCD_BITER_ELINKYES_LINKCH_MASK       0x1E00u
#define DMA_TCD_BITER_ELINKYES_LINKCH_SHIFT      9u
#define DMA_TCD_BITER_ELINKYES_LINKCH_WIDTH      4u
#define DMA_TCD_BITER_ELINKYES_LINKCH(x)         (((uint16_t)(((uint16_t)(x))<<DMA_TCD_BITER_ELINKYES_LINKCH_SHIFT))&DMA_TCD_BITER_ELINKYES_LINKCH_MASK)
#define DMA_TCD_BITER_ELINKYES_ELINK_MASK        0x8000u
#define DMA_TCD_BITER_ELINKYES_ELINK_SHIFT       15u
#define DMA_TCD_BITER_ELINKYES_ELINK_WIDTH       1u
#define DMA_TCD_BITER_ELINKYES_ELINK(x)          (((uint16_t)(((uint16_t)(x))<<DMA_TCD_BITER_ELINKYES_ELINK_SHIFT))&DMA_TCD_BITER_ELINKYES_ELINK_MASK)

/*!
 * @}
 */ /* end of group DMA_Register_Masks */


/*!
 * @}
 */ /* end of group DMA_Peripheral_Access_Layer */

#endif /* S32K1XX_DMA_H_ */
