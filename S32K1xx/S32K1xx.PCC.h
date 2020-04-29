/*
 * S32K1xx.PCC.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_PCC_H_
#define S32K1XX_PCC_H_

#include "S32K1xx.Type.h"

/* ----------------------------------------------------------------------------
   -- PCC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCC_Peripheral_Access_Layer PCC Peripheral Access Layer
 * @{
 */

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))

/** PCC - Size of Registers Arrays */
#define PCC_PCCn_COUNT                           116u

#elif (defined (__Target_S32K148__))

/** PCC - Size of Registers Arrays */
#define PCC_PCCn_COUNT                           122u

#endif

/** PCC - Register Layout Typedef */
typedef union
{
	__IO uint32_t PCCn[PCC_PCCn_COUNT];              /**< PCC Reserved Register 0..PCC ENET Register, array offset: 0x0, array step: 0x4 */
	struct
	{
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__))
		__IO uint32_t PCD										:4;
		__IO uint32_t FRAC										:1;
		__I  uint32_t											:19;
#elif (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
		__IO uint32_t PCD										:3;
		__IO uint32_t FRAC										:1;
		__I  uint32_t											:20;
#endif
		__IO uint32_t PCS										:3;
		__I  uint32_t											:2;
		__I  uint32_t											:1;
		__IO uint32_t CGC										:1;
		__IO uint32_t PR										:1;

	}PCCn_BIT[PCC_PCCn_COUNT];
} PCC_Type, *PCC_MemMapPtr;

 /** Number of instances of the PCC module. */
#define PCC_INSTANCE_COUNT                       (1u)


/* PCC - Peripheral instance base addresses */
/** Peripheral PCC base address */
#define PCC_BASE                                 (0x40065000u)
/** Peripheral PCC base pointer */
#define PCC                                      ((PCC_Type *)PCC_BASE)
/** Array initializer of PCC peripheral base addresses */
#define PCC_BASE_ADDRS                           { PCC_BASE }
/** Array initializer of PCC peripheral base pointers */
#define PCC_BASE_PTRS                            { PCC }

/* PCC index offsets */
#define PCC_FTFC_INDEX                           32
#define PCC_DMAMUX_INDEX                         33
#define PCC_FlexCAN0_INDEX                       36

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_FlexCAN1_INDEX                       37
#define PCC_FTM3_INDEX                           38
#define PCC_ADC1_INDEX                           39

#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_FlexCAN2_INDEX                       43
#endif

#endif

#define PCC_LPSPI0_INDEX                         44

#if (defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_LPSPI1_INDEX                         45
#endif

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_LPSPI2_INDEX                         46
#endif

#define PCC_PDB1_INDEX                           49
#endif

#define PCC_CRC_INDEX                            50
#define PCC_PDB0_INDEX                           54
#define PCC_LPIT_INDEX                           55
#define PCC_FTM0_INDEX                           56
#define PCC_FTM1_INDEX                           57

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_FTM2_INDEX                           58
#endif

#define PCC_ADC0_INDEX                           59
#define PCC_RTC_INDEX                            61

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define PCC_CMU0_INDEX                           62
#define PCC_CMU1_INDEX                           63
#endif

#define PCC_LPTMR0_INDEX                         64
#define PCC_PORTA_INDEX                          73
#define PCC_PORTB_INDEX                          74
#define PCC_PORTC_INDEX                          75
#define PCC_PORTD_INDEX                          76
#define PCC_PORTE_INDEX                          77

#if (defined (__Target_S32K148__))
#define PCC_SAI0_INDEX                           84
#define PCC_SAI1_INDEX                           85
#endif

#define PCC_FlexIO_INDEX                         90

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_EWM_INDEX                            97
#endif

#define PCC_LPI2C0_INDEX                         102

#if (defined (__Target_S32K148__))
#define PCC_LPI2C1_INDEX                         103
#endif

#define PCC_LPUART0_INDEX                        106
#define PCC_LPUART1_INDEX                        107

#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_LPUART2_INDEX                        108

#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_FTM4_INDEX                           110
#define PCC_FTM5_INDEX                           111

#if (defined (__Target_S32K148__))
#define PCC_FTM6_INDEX                           112
#define PCC_FTM7_INDEX                           113
#endif

#endif

#endif

#define PCC_CMP0_INDEX                           115

#if (defined (__Target_S32K148__))
#define PCC_QSPI_INDEX                           118
#define PCC_ENET_INDEX                           121
#endif

/* ----------------------------------------------------------------------------
   -- PCC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PCC_Register_Masks PCC Register Masks
 * @{
 */
//TODO ����ط��кܴ������ ������Ҫȷ��
/* PCCn Bit Fields */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__) || defined (__Target_S32K142__))
#define PCC_PCCn_PCD_MASK                        0xFu
#define PCC_PCCn_PCD_SHIFT                       0u
#define PCC_PCCn_PCD_WIDTH                       4u
#define PCC_PCCn_PCD(x)                          (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_PCD_SHIFT))&PCC_PCCn_PCD_MASK)
#define PCC_PCCn_FRAC_MASK                       0x10u
#define PCC_PCCn_FRAC_SHIFT                      4u
#elif (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
#define PCC_PCCn_PCD_MASK                        0x7u
#define PCC_PCCn_PCD_SHIFT                       0u
#define PCC_PCCn_PCD_WIDTH                       3u
#define PCC_PCCn_PCD(x)                          (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_PCD_SHIFT))&PCC_PCCn_PCD_MASK)
#define PCC_PCCn_FRAC_MASK                       0x8u
#define PCC_PCCn_FRAC_SHIFT                      3u
#endif

#define PCC_PCCn_FRAC_WIDTH                      1u
#define PCC_PCCn_FRAC(x)                         (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_FRAC_SHIFT))&PCC_PCCn_FRAC_MASK)
#define PCC_PCCn_PCS_MASK                        0x7000000u
#define PCC_PCCn_PCS_SHIFT                       24u
#define PCC_PCCn_PCS_WIDTH                       3u
#define PCC_PCCn_PCS(x)                          (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_PCS_SHIFT))&PCC_PCCn_PCS_MASK)
#define PCC_PCCn_CGC_MASK                        0x40000000u
#define PCC_PCCn_CGC_SHIFT                       30u
#define PCC_PCCn_CGC_WIDTH                       1u
#define PCC_PCCn_CGC(x)                          (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_CGC_SHIFT))&PCC_PCCn_CGC_MASK)
#define PCC_PCCn_PR_MASK                         0x80000000u
#define PCC_PCCn_PR_SHIFT                        31u
#define PCC_PCCn_PR_WIDTH                        1u
#define PCC_PCCn_PR(x)                           (((uint32_t)(((uint32_t)(x))<<PCC_PCCn_PR_SHIFT))&PCC_PCCn_PR_MASK)

/*!
 * @}
 */ /* end of group PCC_Register_Masks */


/*!
 * @}
 */ /* end of group PCC_Peripheral_Access_Layer */

#endif /* S32K1XX_PCC_H_ */
