/*
 * S32K1xx.MPU.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_MPU_H_
#define S32K1XX_MPU_H_

#include "S32K1xx.Type.h"

/* ----------------------------------------------------------------------------
   -- MPU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MPU_Peripheral_Access_Layer MPU Peripheral Access Layer
 * @{
 */


/** MPU - Size of Registers Arrays */
#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
#define MPU_EAR_EDR_COUNT                        2u
#define MPU_RGD_COUNT                            8u
#define MPU_RGDAAC_COUNT                         8u
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
#define MPU_EAR_EDR_COUNT                        4u
#define MPU_RGD_COUNT                            8u
#define MPU_RGDAAC_COUNT                         8u
#elif (defined (__Target_S32K148__))
#define MPU_EAR_EDR_COUNT                        5u
#define MPU_RGD_COUNT                            16u
#define MPU_RGDAAC_COUNT                         16u
#endif

/** MPU - Register Layout Typedef */
typedef struct
{
	__IO uint32_t CESR;                              /**< Control/Error Status Register, offset: 0x0 */

	uint8_t RESERVED_0[12];

	struct
	{                                         /* offset: 0x10, array step: 0x8 */
		__I  uint32_t EAR;                               /**< Error Address Register, slave port
								0..Error Address Register, slave port
								4, array offset: 0x10, array step: 0x8 */
		__I  uint32_t EDR;                               /**< Error Detail Register, slave port
								0..Error Detail Register, slave port
								4, array offset: 0x14, array step: 0x8 */
	} EAR_EDR[MPU_EAR_EDR_COUNT];

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	uint8_t RESERVED_1[992];
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
	uint8_t RESERVED_1[976];
#elif (defined (__Target_S32K148__))
	uint8_t RESERVED_1[968];
#endif

	struct
	{                                         /* offset: 0x400, array step: 0x10 */
		__IO uint32_t WORD0;                             /**< Region Descriptor 0, Word 0..Region Descriptor 15, Word 0, array offset: 0x400, array step: 0x10 */
		__IO uint32_t WORD1;                             /**< Region Descriptor 0, Word 1..Region Descriptor 15, Word 1, array offset: 0x404, array step: 0x10 */
		__IO uint32_t WORD2;                             /**< Region Descriptor 0, Word 2..Region Descriptor 15, Word 2, array offset: 0x408, array step: 0x10 */
		__IO uint32_t WORD3;                             /**< Region Descriptor 0, Word 3..Region Descriptor 15, Word 3, array offset: 0x40C, array step: 0x10 */
	} RGD[MPU_RGD_COUNT];

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	uint8_t RESERVED_2[896];
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
	uint8_t RESERVED_2[896];
#elif (defined (__Target_S32K148__))
	uint8_t RESERVED_2[768];
#endif

	__IO uint32_t RGDAAC[MPU_RGDAAC_COUNT];          /**< Region Descriptor Alternate Access Control
						0..Region Descriptor Alternate Access Control
						15, array offset: 0x800, array step: 0x4 */
} MPU_Type, *MPU_MemMapPtr;

 /** Number of instances of the MPU module. */
#define MPU_INSTANCE_COUNT                       (1u)


/* MPU - Peripheral instance base addresses */
/** Peripheral MPU base address */
#define MPU_BASE                                 (0x4000D000u)
/** Peripheral MPU base pointer */
#define MPU                                      ((MPU_Type *)MPU_BASE)
/** Array initializer of MPU peripheral base addresses */
#define MPU_BASE_ADDRS                           { MPU_BASE }
/** Array initializer of MPU peripheral base pointers */
#define MPU_BASE_PTRS                            { MPU }

/* ----------------------------------------------------------------------------
   -- MPU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MPU_Register_Masks MPU Register Masks
 * @{
 */

/* CESR Bit Fields */
#define MPU_CESR_VLD_MASK                        0x1u
#define MPU_CESR_VLD_SHIFT                       0u
#define MPU_CESR_VLD_WIDTH                       1u
#define MPU_CESR_VLD(x)                          (((uint32_t)(((uint32_t)(x))<<MPU_CESR_VLD_SHIFT))&MPU_CESR_VLD_MASK)
#define MPU_CESR_NRGD_MASK                       0xF00u
#define MPU_CESR_NRGD_SHIFT                      8u
#define MPU_CESR_NRGD_WIDTH                      4u
#define MPU_CESR_NRGD(x)                         (((uint32_t)(((uint32_t)(x))<<MPU_CESR_NRGD_SHIFT))&MPU_CESR_NRGD_MASK)
#define MPU_CESR_NSP_MASK                        0xF000u
#define MPU_CESR_NSP_SHIFT                       12u
#define MPU_CESR_NSP_WIDTH                       4u
#define MPU_CESR_NSP(x)                          (((uint32_t)(((uint32_t)(x))<<MPU_CESR_NSP_SHIFT))&MPU_CESR_NSP_MASK)
#define MPU_CESR_HRL_MASK                        0xF0000u
#define MPU_CESR_HRL_SHIFT                       16u
#define MPU_CESR_HRL_WIDTH                       4u
#define MPU_CESR_HRL(x)                          (((uint32_t)(((uint32_t)(x))<<MPU_CESR_HRL_SHIFT))&MPU_CESR_HRL_MASK)

#if (defined (__Target_S32K148__))
#define MPU_CESR_SPERR4_MASK                     0x8000000u
#define MPU_CESR_SPERR4_SHIFT                    27u
#define MPU_CESR_SPERR4_WIDTH                    1u
#define MPU_CESR_SPERR4(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_CESR_SPERR4_SHIFT))&MPU_CESR_SPERR4_MASK)
#endif

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
#define MPU_CESR_SPERR3_MASK                     0x10000000u
#define MPU_CESR_SPERR3_SHIFT                    28u
#define MPU_CESR_SPERR3_WIDTH                    1u
#define MPU_CESR_SPERR3(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_CESR_SPERR3_SHIFT))&MPU_CESR_SPERR3_MASK)
#define MPU_CESR_SPERR2_MASK                     0x20000000u
#define MPU_CESR_SPERR2_SHIFT                    29u
#define MPU_CESR_SPERR2_WIDTH                    1u
#define MPU_CESR_SPERR2(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_CESR_SPERR2_SHIFT))&MPU_CESR_SPERR2_MASK)
#endif

#define MPU_CESR_SPERR1_MASK                     0x40000000u
#define MPU_CESR_SPERR1_SHIFT                    30u
#define MPU_CESR_SPERR1_WIDTH                    1u
#define MPU_CESR_SPERR1(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_CESR_SPERR1_SHIFT))&MPU_CESR_SPERR1_MASK)
#define MPU_CESR_SPERR0_MASK                     0x80000000u
#define MPU_CESR_SPERR0_SHIFT                    31u
#define MPU_CESR_SPERR0_WIDTH                    1u
#define MPU_CESR_SPERR0(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_CESR_SPERR0_SHIFT))&MPU_CESR_SPERR0_MASK)
/* EAR Bit Fields */
#define MPU_EAR_EADDR_MASK                       0xFFFFFFFFu
#define MPU_EAR_EADDR_SHIFT                      0u
#define MPU_EAR_EADDR_WIDTH                      32u
#define MPU_EAR_EADDR(x)                         (((uint32_t)(((uint32_t)(x))<<MPU_EAR_EADDR_SHIFT))&MPU_EAR_EADDR_MASK)
/* EDR Bit Fields */
#define MPU_EDR_ERW_MASK                         0x1u
#define MPU_EDR_ERW_SHIFT                        0u
#define MPU_EDR_ERW_WIDTH                        1u
#define MPU_EDR_ERW(x)                           (((uint32_t)(((uint32_t)(x))<<MPU_EDR_ERW_SHIFT))&MPU_EDR_ERW_MASK)
#define MPU_EDR_EATTR_MASK                       0xEu
#define MPU_EDR_EATTR_SHIFT                      1u
#define MPU_EDR_EATTR_WIDTH                      3u
#define MPU_EDR_EATTR(x)                         (((uint32_t)(((uint32_t)(x))<<MPU_EDR_EATTR_SHIFT))&MPU_EDR_EATTR_MASK)
#define MPU_EDR_EMN_MASK                         0xF0u
#define MPU_EDR_EMN_SHIFT                        4u
#define MPU_EDR_EMN_WIDTH                        4u
#define MPU_EDR_EMN(x)                           (((uint32_t)(((uint32_t)(x))<<MPU_EDR_EMN_SHIFT))&MPU_EDR_EMN_MASK)
#define MPU_EDR_EPID_MASK                        0xFF00u
#define MPU_EDR_EPID_SHIFT                       8u
#define MPU_EDR_EPID_WIDTH                       8u
#define MPU_EDR_EPID(x)                          (((uint32_t)(((uint32_t)(x))<<MPU_EDR_EPID_SHIFT))&MPU_EDR_EPID_MASK)
#define MPU_EDR_EACD_MASK                        0xFFFF0000u
#define MPU_EDR_EACD_SHIFT                       16u
#define MPU_EDR_EACD_WIDTH                       16u
#define MPU_EDR_EACD(x)                          (((uint32_t)(((uint32_t)(x))<<MPU_EDR_EACD_SHIFT))&MPU_EDR_EACD_MASK)
/* RGD_WORD0 Bit Fields */
#define MPU_RGD_WORD0_SRTADDR_MASK               0xFFFFFFE0u
#define MPU_RGD_WORD0_SRTADDR_SHIFT              5u
#define MPU_RGD_WORD0_SRTADDR_WIDTH              27u
#define MPU_RGD_WORD0_SRTADDR(x)                 (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD0_SRTADDR_SHIFT))&MPU_RGD_WORD0_SRTADDR_MASK)
/* RGD_WORD1 Bit Fields */
#define MPU_RGD_WORD1_ENDADDR_MASK               0xFFFFFFE0u
#define MPU_RGD_WORD1_ENDADDR_SHIFT              5u
#define MPU_RGD_WORD1_ENDADDR_WIDTH              27u
#define MPU_RGD_WORD1_ENDADDR(x)                 (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD1_ENDADDR_SHIFT))&MPU_RGD_WORD1_ENDADDR_MASK)
/* RGD_WORD2 Bit Fields */
#define MPU_RGD_WORD2_M0UM_MASK                  0x7u
#define MPU_RGD_WORD2_M0UM_SHIFT                 0u
#define MPU_RGD_WORD2_M0UM_WIDTH                 3u
#define MPU_RGD_WORD2_M0UM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M0UM_SHIFT))&MPU_RGD_WORD2_M0UM_MASK)
#define MPU_RGD_WORD2_M0SM_MASK                  0x18u
#define MPU_RGD_WORD2_M0SM_SHIFT                 3u
#define MPU_RGD_WORD2_M0SM_WIDTH                 2u
#define MPU_RGD_WORD2_M0SM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M0SM_SHIFT))&MPU_RGD_WORD2_M0SM_MASK)
#define MPU_RGD_WORD2_M0PE_MASK                  0x20u
#define MPU_RGD_WORD2_M0PE_SHIFT                 5u
#define MPU_RGD_WORD2_M0PE_WIDTH                 1u
#define MPU_RGD_WORD2_M0PE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M0PE_SHIFT))&MPU_RGD_WORD2_M0PE_MASK)
#define MPU_RGD_WORD2_M1UM_MASK                  0x1C0u
#define MPU_RGD_WORD2_M1UM_SHIFT                 6u
#define MPU_RGD_WORD2_M1UM_WIDTH                 3u
#define MPU_RGD_WORD2_M1UM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M1UM_SHIFT))&MPU_RGD_WORD2_M1UM_MASK)
#define MPU_RGD_WORD2_M1SM_MASK                  0x600u
#define MPU_RGD_WORD2_M1SM_SHIFT                 9u
#define MPU_RGD_WORD2_M1SM_WIDTH                 2u
#define MPU_RGD_WORD2_M1SM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M1SM_SHIFT))&MPU_RGD_WORD2_M1SM_MASK)

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
#define MPU_RGD_WORD2_M1PE_MASK                  0x800u
#define MPU_RGD_WORD2_M1PE_SHIFT                 11u
#define MPU_RGD_WORD2_M1PE_WIDTH                 1u
#define MPU_RGD_WORD2_M1PE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M1PE_SHIFT))&MPU_RGD_WORD2_M1PE_MASK)
#endif

#define MPU_RGD_WORD2_M2UM_MASK                  0x7000u
#define MPU_RGD_WORD2_M2UM_SHIFT                 12u
#define MPU_RGD_WORD2_M2UM_WIDTH                 3u
#define MPU_RGD_WORD2_M2UM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M2UM_SHIFT))&MPU_RGD_WORD2_M2UM_MASK)
#define MPU_RGD_WORD2_M2SM_MASK                  0x18000u
#define MPU_RGD_WORD2_M2SM_SHIFT                 15u
#define MPU_RGD_WORD2_M2SM_WIDTH                 2u
#define MPU_RGD_WORD2_M2SM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M2SM_SHIFT))&MPU_RGD_WORD2_M2SM_MASK)
#define MPU_RGD_WORD2_M3UM_MASK                  0x1C0000u
#define MPU_RGD_WORD2_M3UM_SHIFT                 18u
#define MPU_RGD_WORD2_M3UM_WIDTH                 3u
#define MPU_RGD_WORD2_M3UM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M3UM_SHIFT))&MPU_RGD_WORD2_M3UM_MASK)
#define MPU_RGD_WORD2_M3SM_MASK                  0x600000u
#define MPU_RGD_WORD2_M3SM_SHIFT                 21u
#define MPU_RGD_WORD2_M3SM_WIDTH                 2u
#define MPU_RGD_WORD2_M3SM(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M3SM_SHIFT))&MPU_RGD_WORD2_M3SM_MASK)
#define MPU_RGD_WORD2_M4WE_MASK                  0x1000000u
#define MPU_RGD_WORD2_M4WE_SHIFT                 24u
#define MPU_RGD_WORD2_M4WE_WIDTH                 1u
#define MPU_RGD_WORD2_M4WE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M4WE_SHIFT))&MPU_RGD_WORD2_M4WE_MASK)
#define MPU_RGD_WORD2_M4RE_MASK                  0x2000000u
#define MPU_RGD_WORD2_M4RE_SHIFT                 25u
#define MPU_RGD_WORD2_M4RE_WIDTH                 1u
#define MPU_RGD_WORD2_M4RE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M4RE_SHIFT))&MPU_RGD_WORD2_M4RE_MASK)
#define MPU_RGD_WORD2_M5WE_MASK                  0x4000000u
#define MPU_RGD_WORD2_M5WE_SHIFT                 26u
#define MPU_RGD_WORD2_M5WE_WIDTH                 1u
#define MPU_RGD_WORD2_M5WE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M5WE_SHIFT))&MPU_RGD_WORD2_M5WE_MASK)
#define MPU_RGD_WORD2_M5RE_MASK                  0x8000000u
#define MPU_RGD_WORD2_M5RE_SHIFT                 27u
#define MPU_RGD_WORD2_M5RE_WIDTH                 1u
#define MPU_RGD_WORD2_M5RE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M5RE_SHIFT))&MPU_RGD_WORD2_M5RE_MASK)
#define MPU_RGD_WORD2_M6WE_MASK                  0x10000000u
#define MPU_RGD_WORD2_M6WE_SHIFT                 28u
#define MPU_RGD_WORD2_M6WE_WIDTH                 1u
#define MPU_RGD_WORD2_M6WE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M6WE_SHIFT))&MPU_RGD_WORD2_M6WE_MASK)
#define MPU_RGD_WORD2_M6RE_MASK                  0x20000000u
#define MPU_RGD_WORD2_M6RE_SHIFT                 29u
#define MPU_RGD_WORD2_M6RE_WIDTH                 1u
#define MPU_RGD_WORD2_M6RE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M6RE_SHIFT))&MPU_RGD_WORD2_M6RE_MASK)
#define MPU_RGD_WORD2_M7WE_MASK                  0x40000000u
#define MPU_RGD_WORD2_M7WE_SHIFT                 30u
#define MPU_RGD_WORD2_M7WE_WIDTH                 1u
#define MPU_RGD_WORD2_M7WE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M7WE_SHIFT))&MPU_RGD_WORD2_M7WE_MASK)
#define MPU_RGD_WORD2_M7RE_MASK                  0x80000000u
#define MPU_RGD_WORD2_M7RE_SHIFT                 31u
#define MPU_RGD_WORD2_M7RE_WIDTH                 1u
#define MPU_RGD_WORD2_M7RE(x)                    (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD2_M7RE_SHIFT))&MPU_RGD_WORD2_M7RE_MASK)
/* RGD_WORD3 Bit Fields */
#define MPU_RGD_WORD3_VLD_MASK                   0x1u
#define MPU_RGD_WORD3_VLD_SHIFT                  0u
#define MPU_RGD_WORD3_VLD_WIDTH                  1u
#define MPU_RGD_WORD3_VLD(x)                     (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD3_VLD_SHIFT))&MPU_RGD_WORD3_VLD_MASK)
#define MPU_RGD_WORD3_PIDMASK_MASK               0xFF0000u
#define MPU_RGD_WORD3_PIDMASK_SHIFT              16u
#define MPU_RGD_WORD3_PIDMASK_WIDTH              8u
#define MPU_RGD_WORD3_PIDMASK(x)                 (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD3_PIDMASK_SHIFT))&MPU_RGD_WORD3_PIDMASK_MASK)
#define MPU_RGD_WORD3_PID_MASK                   0xFF000000u
#define MPU_RGD_WORD3_PID_SHIFT                  24u
#define MPU_RGD_WORD3_PID_WIDTH                  8u
#define MPU_RGD_WORD3_PID(x)                     (((uint32_t)(((uint32_t)(x))<<MPU_RGD_WORD3_PID_SHIFT))&MPU_RGD_WORD3_PID_MASK)
/* RGDAAC Bit Fields */
#define MPU_RGDAAC_M0UM_MASK                     0x7u
#define MPU_RGDAAC_M0UM_SHIFT                    0u
#define MPU_RGDAAC_M0UM_WIDTH                    3u
#define MPU_RGDAAC_M0UM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M0UM_SHIFT))&MPU_RGDAAC_M0UM_MASK)
#define MPU_RGDAAC_M0SM_MASK                     0x18u
#define MPU_RGDAAC_M0SM_SHIFT                    3u
#define MPU_RGDAAC_M0SM_WIDTH                    2u
#define MPU_RGDAAC_M0SM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M0SM_SHIFT))&MPU_RGDAAC_M0SM_MASK)
#define MPU_RGDAAC_M0PE_MASK                     0x20u
#define MPU_RGDAAC_M0PE_SHIFT                    5u
#define MPU_RGDAAC_M0PE_WIDTH                    1u
#define MPU_RGDAAC_M0PE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M0PE_SHIFT))&MPU_RGDAAC_M0PE_MASK)
#define MPU_RGDAAC_M1UM_MASK                     0x1C0u
#define MPU_RGDAAC_M1UM_SHIFT                    6u
#define MPU_RGDAAC_M1UM_WIDTH                    3u
#define MPU_RGDAAC_M1UM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M1UM_SHIFT))&MPU_RGDAAC_M1UM_MASK)
#define MPU_RGDAAC_M1SM_MASK                     0x600u
#define MPU_RGDAAC_M1SM_SHIFT                    9u
#define MPU_RGDAAC_M1SM_WIDTH                    2u
#define MPU_RGDAAC_M1SM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M1SM_SHIFT))&MPU_RGDAAC_M1SM_MASK)

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__))
#define MPU_RGDAAC_M1PE_MASK                     0x800u
#define MPU_RGDAAC_M1PE_SHIFT                    11u
#define MPU_RGDAAC_M1PE_WIDTH                    1u
#define MPU_RGDAAC_M1PE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M1PE_SHIFT))&MPU_RGDAAC_M1PE_MASK)
#endif

#define MPU_RGDAAC_M2UM_MASK                     0x7000u
#define MPU_RGDAAC_M2UM_SHIFT                    12u
#define MPU_RGDAAC_M2UM_WIDTH                    3u
#define MPU_RGDAAC_M2UM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M2UM_SHIFT))&MPU_RGDAAC_M2UM_MASK)
#define MPU_RGDAAC_M2SM_MASK                     0x18000u
#define MPU_RGDAAC_M2SM_SHIFT                    15u
#define MPU_RGDAAC_M2SM_WIDTH                    2u
#define MPU_RGDAAC_M2SM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M2SM_SHIFT))&MPU_RGDAAC_M2SM_MASK)
#define MPU_RGDAAC_M3UM_MASK                     0x1C0000u
#define MPU_RGDAAC_M3UM_SHIFT                    18u
#define MPU_RGDAAC_M3UM_WIDTH                    3u
#define MPU_RGDAAC_M3UM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M3UM_SHIFT))&MPU_RGDAAC_M3UM_MASK)
#define MPU_RGDAAC_M3SM_MASK                     0x600000u
#define MPU_RGDAAC_M3SM_SHIFT                    21u
#define MPU_RGDAAC_M3SM_WIDTH                    2u
#define MPU_RGDAAC_M3SM(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M3SM_SHIFT))&MPU_RGDAAC_M3SM_MASK)
#define MPU_RGDAAC_M4WE_MASK                     0x1000000u
#define MPU_RGDAAC_M4WE_SHIFT                    24u
#define MPU_RGDAAC_M4WE_WIDTH                    1u
#define MPU_RGDAAC_M4WE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M4WE_SHIFT))&MPU_RGDAAC_M4WE_MASK)
#define MPU_RGDAAC_M4RE_MASK                     0x2000000u
#define MPU_RGDAAC_M4RE_SHIFT                    25u
#define MPU_RGDAAC_M4RE_WIDTH                    1u
#define MPU_RGDAAC_M4RE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M4RE_SHIFT))&MPU_RGDAAC_M4RE_MASK)
#define MPU_RGDAAC_M5WE_MASK                     0x4000000u
#define MPU_RGDAAC_M5WE_SHIFT                    26u
#define MPU_RGDAAC_M5WE_WIDTH                    1u
#define MPU_RGDAAC_M5WE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M5WE_SHIFT))&MPU_RGDAAC_M5WE_MASK)
#define MPU_RGDAAC_M5RE_MASK                     0x8000000u
#define MPU_RGDAAC_M5RE_SHIFT                    27u
#define MPU_RGDAAC_M5RE_WIDTH                    1u
#define MPU_RGDAAC_M5RE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M5RE_SHIFT))&MPU_RGDAAC_M5RE_MASK)
#define MPU_RGDAAC_M6WE_MASK                     0x10000000u
#define MPU_RGDAAC_M6WE_SHIFT                    28u
#define MPU_RGDAAC_M6WE_WIDTH                    1u
#define MPU_RGDAAC_M6WE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M6WE_SHIFT))&MPU_RGDAAC_M6WE_MASK)
#define MPU_RGDAAC_M6RE_MASK                     0x20000000u
#define MPU_RGDAAC_M6RE_SHIFT                    29u
#define MPU_RGDAAC_M6RE_WIDTH                    1u
#define MPU_RGDAAC_M6RE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M6RE_SHIFT))&MPU_RGDAAC_M6RE_MASK)
#define MPU_RGDAAC_M7WE_MASK                     0x40000000u
#define MPU_RGDAAC_M7WE_SHIFT                    30u
#define MPU_RGDAAC_M7WE_WIDTH                    1u
#define MPU_RGDAAC_M7WE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M7WE_SHIFT))&MPU_RGDAAC_M7WE_MASK)
#define MPU_RGDAAC_M7RE_MASK                     0x80000000u
#define MPU_RGDAAC_M7RE_SHIFT                    31u
#define MPU_RGDAAC_M7RE_WIDTH                    1u
#define MPU_RGDAAC_M7RE(x)                       (((uint32_t)(((uint32_t)(x))<<MPU_RGDAAC_M7RE_SHIFT))&MPU_RGDAAC_M7RE_MASK)

/*!
 * @}
 */ /* end of group MPU_Register_Masks */


/*!
 * @}
 */ /* end of group MPU_Peripheral_Access_Layer */

#endif /* S32K1XX_MPU_H_ */
