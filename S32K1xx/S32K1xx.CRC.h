/*
 * S32K1xx.CRC.h
 *
 *  Created on: 2020年7月20日
 *      Author: Master.HE
 */

#ifndef S32K1XX_CRC_H_
#define S32K1XX_CRC_H_

#include "S32K1xx.Type.h"


/* ----------------------------------------------------------------------------
   -- CRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Peripheral_Access_Layer CRC Peripheral Access Layer
 * @{
 */


/** CRC - Size of Registers Arrays */

/** CRC - Register Layout Typedef */
typedef struct {
  union {                                          /* offset: 0x0 */
    __IO uint32_t DATA;                              /**< CRC Data register, offset: 0x0 */
    struct {                                         /* offset: 0x0 */
      __IO uint16_t L;                                 /**< CRC_DATAL register., offset: 0x0 */
      __IO uint16_t H;                                 /**< CRC_DATAH register., offset: 0x2 */
    } DATA_16;
    struct {                                         /* offset: 0x0 */
      __IO uint8_t LL;                                 /**< CRC_DATALL register., offset: 0x0 */
      __IO uint8_t LU;                                 /**< CRC_DATALU register., offset: 0x1 */
      __IO uint8_t HL;                                 /**< CRC_DATAHL register., offset: 0x2 */
      __IO uint8_t HU;                                 /**< CRC_DATAHU register., offset: 0x3 */
    } DATA_8;
  } DATAu;
  __IO uint32_t GPOLY;                             /**< CRC Polynomial register, offset: 0x4 */
  __IO uint32_t CTRL;                              /**< CRC Control register, offset: 0x8 */
} CRC_Type, *CRC_MemMapPtr;

 /** Number of instances of the CRC module. */
#define CRC_INSTANCE_COUNT                       (1u)


/* CRC - Peripheral instance base addresses */
/** Peripheral CRC base address */
#define CRC_BASE                                 (0x40032000u)
/** Peripheral CRC base pointer */
#define CRC                                      ((CRC_Type *)CRC_BASE)
/** Array initializer of CRC peripheral base addresses */
#define CRC_BASE_ADDRS                           { CRC_BASE }
/** Array initializer of CRC peripheral base pointers */
#define CRC_BASE_PTRS                            { CRC }

/* ----------------------------------------------------------------------------
   -- CRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Register_Masks CRC Register Masks
 * @{
 */

/* DATAu_DATA Bit Fields */
#define CRC_DATAu_DATA_LL_MASK                   0xFFu
#define CRC_DATAu_DATA_LL_SHIFT                  0u
#define CRC_DATAu_DATA_LL_WIDTH                  8u
#define CRC_DATAu_DATA_LL(x)                     (((uint32_t)(((uint32_t)(x))<<CRC_DATAu_DATA_LL_SHIFT))&CRC_DATAu_DATA_LL_MASK)
#define CRC_DATAu_DATA_LU_MASK                   0xFF00u
#define CRC_DATAu_DATA_LU_SHIFT                  8u
#define CRC_DATAu_DATA_LU_WIDTH                  8u
#define CRC_DATAu_DATA_LU(x)                     (((uint32_t)(((uint32_t)(x))<<CRC_DATAu_DATA_LU_SHIFT))&CRC_DATAu_DATA_LU_MASK)
#define CRC_DATAu_DATA_HL_MASK                   0xFF0000u
#define CRC_DATAu_DATA_HL_SHIFT                  16u
#define CRC_DATAu_DATA_HL_WIDTH                  8u
#define CRC_DATAu_DATA_HL(x)                     (((uint32_t)(((uint32_t)(x))<<CRC_DATAu_DATA_HL_SHIFT))&CRC_DATAu_DATA_HL_MASK)
#define CRC_DATAu_DATA_HU_MASK                   0xFF000000u
#define CRC_DATAu_DATA_HU_SHIFT                  24u
#define CRC_DATAu_DATA_HU_WIDTH                  8u
#define CRC_DATAu_DATA_HU(x)                     (((uint32_t)(((uint32_t)(x))<<CRC_DATAu_DATA_HU_SHIFT))&CRC_DATAu_DATA_HU_MASK)
/* DATAu_DATA_16_L Bit Fields */
#define CRC_DATAu_DATA_16_L_DATAL_MASK           0xFFFFu
#define CRC_DATAu_DATA_16_L_DATAL_SHIFT          0u
#define CRC_DATAu_DATA_16_L_DATAL_WIDTH          16u
#define CRC_DATAu_DATA_16_L_DATAL(x)             (((uint16_t)(((uint16_t)(x))<<CRC_DATAu_DATA_16_L_DATAL_SHIFT))&CRC_DATAu_DATA_16_L_DATAL_MASK)
/* DATAu_DATA_16_H Bit Fields */
#define CRC_DATAu_DATA_16_H_DATAH_MASK           0xFFFFu
#define CRC_DATAu_DATA_16_H_DATAH_SHIFT          0u
#define CRC_DATAu_DATA_16_H_DATAH_WIDTH          16u
#define CRC_DATAu_DATA_16_H_DATAH(x)             (((uint16_t)(((uint16_t)(x))<<CRC_DATAu_DATA_16_H_DATAH_SHIFT))&CRC_DATAu_DATA_16_H_DATAH_MASK)
/* DATAu_DATA_8_LL Bit Fields */
#define CRC_DATAu_DATA_8_LL_DATALL_MASK          0xFFu
#define CRC_DATAu_DATA_8_LL_DATALL_SHIFT         0u
#define CRC_DATAu_DATA_8_LL_DATALL_WIDTH         8u
#define CRC_DATAu_DATA_8_LL_DATALL(x)            (((uint8_t)(((uint8_t)(x))<<CRC_DATAu_DATA_8_LL_DATALL_SHIFT))&CRC_DATAu_DATA_8_LL_DATALL_MASK)
/* DATAu_DATA_8_LU Bit Fields */
#define CRC_DATAu_DATA_8_LU_DATALU_MASK          0xFFu
#define CRC_DATAu_DATA_8_LU_DATALU_SHIFT         0u
#define CRC_DATAu_DATA_8_LU_DATALU_WIDTH         8u
#define CRC_DATAu_DATA_8_LU_DATALU(x)            (((uint8_t)(((uint8_t)(x))<<CRC_DATAu_DATA_8_LU_DATALU_SHIFT))&CRC_DATAu_DATA_8_LU_DATALU_MASK)
/* DATAu_DATA_8_HL Bit Fields */
#define CRC_DATAu_DATA_8_HL_DATAHL_MASK          0xFFu
#define CRC_DATAu_DATA_8_HL_DATAHL_SHIFT         0u
#define CRC_DATAu_DATA_8_HL_DATAHL_WIDTH         8u
#define CRC_DATAu_DATA_8_HL_DATAHL(x)            (((uint8_t)(((uint8_t)(x))<<CRC_DATAu_DATA_8_HL_DATAHL_SHIFT))&CRC_DATAu_DATA_8_HL_DATAHL_MASK)
/* DATAu_DATA_8_HU Bit Fields */
#define CRC_DATAu_DATA_8_HU_DATAHU_MASK          0xFFu
#define CRC_DATAu_DATA_8_HU_DATAHU_SHIFT         0u
#define CRC_DATAu_DATA_8_HU_DATAHU_WIDTH         8u
#define CRC_DATAu_DATA_8_HU_DATAHU(x)            (((uint8_t)(((uint8_t)(x))<<CRC_DATAu_DATA_8_HU_DATAHU_SHIFT))&CRC_DATAu_DATA_8_HU_DATAHU_MASK)
/* GPOLY Bit Fields */
#define CRC_GPOLY_LOW_MASK                       0xFFFFu
#define CRC_GPOLY_LOW_SHIFT                      0u
#define CRC_GPOLY_LOW_WIDTH                      16u
#define CRC_GPOLY_LOW(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_LOW_SHIFT))&CRC_GPOLY_LOW_MASK)
#define CRC_GPOLY_HIGH_MASK                      0xFFFF0000u
#define CRC_GPOLY_HIGH_SHIFT                     16u
#define CRC_GPOLY_HIGH_WIDTH                     16u
#define CRC_GPOLY_HIGH(x)                        (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_HIGH_SHIFT))&CRC_GPOLY_HIGH_MASK)
/* CTRL Bit Fields */
#define CRC_CTRL_TCRC_MASK                       0x1000000u
#define CRC_CTRL_TCRC_SHIFT                      24u
#define CRC_CTRL_TCRC_WIDTH                      1u
#define CRC_CTRL_TCRC(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TCRC_SHIFT))&CRC_CTRL_TCRC_MASK)
#define CRC_CTRL_WAS_MASK                        0x2000000u
#define CRC_CTRL_WAS_SHIFT                       25u
#define CRC_CTRL_WAS_WIDTH                       1u
#define CRC_CTRL_WAS(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_WAS_SHIFT))&CRC_CTRL_WAS_MASK)
#define CRC_CTRL_FXOR_MASK                       0x4000000u
#define CRC_CTRL_FXOR_SHIFT                      26u
#define CRC_CTRL_FXOR_WIDTH                      1u
#define CRC_CTRL_FXOR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_FXOR_SHIFT))&CRC_CTRL_FXOR_MASK)
#define CRC_CTRL_TOTR_MASK                       0x30000000u
#define CRC_CTRL_TOTR_SHIFT                      28u
#define CRC_CTRL_TOTR_WIDTH                      2u
#define CRC_CTRL_TOTR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOTR_SHIFT))&CRC_CTRL_TOTR_MASK)
#define CRC_CTRL_TOT_MASK                        0xC0000000u
#define CRC_CTRL_TOT_SHIFT                       30u
#define CRC_CTRL_TOT_WIDTH                       2u
#define CRC_CTRL_TOT(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOT_SHIFT))&CRC_CTRL_TOT_MASK)

/*!
 * @}
 */ /* end of group CRC_Register_Masks */


/*!
 * @}
 */ /* end of group CRC_Peripheral_Access_Layer */

#endif /* S32K1XX_CRC_H_ */
