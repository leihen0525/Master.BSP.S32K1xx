/*
 * S32K1xx.WDOG.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_WDOG_H_
#define S32K1XX_WDOG_H_

#include "S32K1xx.Type.h"

/* ----------------------------------------------------------------------------
   -- WDOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WDOG_Peripheral_Access_Layer WDOG Peripheral Access Layer
 * @{
 */


/** WDOG - Size of Registers Arrays */

/** WDOG - Register Layout Typedef */
typedef struct {
  __IO uint32_t CS;                                /**< Watchdog Control and Status Register, offset: 0x0 */
  __IO uint32_t CNT;                               /**< Watchdog Counter Register, offset: 0x4 */
  __IO uint32_t TOVAL;                             /**< Watchdog Timeout Value Register, offset: 0x8 */
  __IO uint32_t WIN;                               /**< Watchdog Window Register, offset: 0xC */
} WDOG_Type, *WDOG_MemMapPtr;

 /** Number of instances of the WDOG module. */
#define WDOG_INSTANCE_COUNT                      (1u)


/* WDOG - Peripheral instance base addresses */
/** Peripheral WDOG base address */
#define WDOG_BASE                                (0x40052000u)
/** Peripheral WDOG base pointer */
#define WDOG                                     ((WDOG_Type *)WDOG_BASE)
/** Array initializer of WDOG peripheral base addresses */
#define WDOG_BASE_ADDRS                          { WDOG_BASE }
/** Array initializer of WDOG peripheral base pointers */
#define WDOG_BASE_PTRS                           { WDOG }
 /** Number of interrupt vector arrays for the WDOG module. */
#define WDOG_IRQS_ARR_COUNT                      (1u)
 /** Number of interrupt channels for the WDOG module. */
#define WDOG_IRQS_CH_COUNT                       (1u)
/** Interrupt vectors for the WDOG peripheral type */

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))

#define WDOG_IRQS                                { WDOG_IRQn }

#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

#define WDOG_IRQS                                { WDOG_EWM_IRQn }

#endif

/* ----------------------------------------------------------------------------
   -- WDOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WDOG_Register_Masks WDOG Register Masks
 * @{
 */

/* CS Bit Fields */
#define WDOG_CS_STOP_MASK                        0x1u
#define WDOG_CS_STOP_SHIFT                       0u
#define WDOG_CS_STOP_WIDTH                       1u
#define WDOG_CS_STOP(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_CS_STOP_SHIFT))&WDOG_CS_STOP_MASK)
#define WDOG_CS_WAIT_MASK                        0x2u
#define WDOG_CS_WAIT_SHIFT                       1u
#define WDOG_CS_WAIT_WIDTH                       1u
#define WDOG_CS_WAIT(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_CS_WAIT_SHIFT))&WDOG_CS_WAIT_MASK)
#define WDOG_CS_DBG_MASK                         0x4u
#define WDOG_CS_DBG_SHIFT                        2u
#define WDOG_CS_DBG_WIDTH                        1u
#define WDOG_CS_DBG(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_DBG_SHIFT))&WDOG_CS_DBG_MASK)
#define WDOG_CS_TST_MASK                         0x18u
#define WDOG_CS_TST_SHIFT                        3u
#define WDOG_CS_TST_WIDTH                        2u
#define WDOG_CS_TST(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_TST_SHIFT))&WDOG_CS_TST_MASK)
#define WDOG_CS_UPDATE_MASK                      0x20u
#define WDOG_CS_UPDATE_SHIFT                     5u
#define WDOG_CS_UPDATE_WIDTH                     1u
#define WDOG_CS_UPDATE(x)                        (((uint32_t)(((uint32_t)(x))<<WDOG_CS_UPDATE_SHIFT))&WDOG_CS_UPDATE_MASK)
#define WDOG_CS_INT_MASK                         0x40u
#define WDOG_CS_INT_SHIFT                        6u
#define WDOG_CS_INT_WIDTH                        1u
#define WDOG_CS_INT(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_INT_SHIFT))&WDOG_CS_INT_MASK)
#define WDOG_CS_EN_MASK                          0x80u
#define WDOG_CS_EN_SHIFT                         7u
#define WDOG_CS_EN_WIDTH                         1u
#define WDOG_CS_EN(x)                            (((uint32_t)(((uint32_t)(x))<<WDOG_CS_EN_SHIFT))&WDOG_CS_EN_MASK)
#define WDOG_CS_CLK_MASK                         0x300u
#define WDOG_CS_CLK_SHIFT                        8u
#define WDOG_CS_CLK_WIDTH                        2u
#define WDOG_CS_CLK(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_CLK_SHIFT))&WDOG_CS_CLK_MASK)
#define WDOG_CS_RCS_MASK                         0x400u
#define WDOG_CS_RCS_SHIFT                        10u
#define WDOG_CS_RCS_WIDTH                        1u
#define WDOG_CS_RCS(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_RCS_SHIFT))&WDOG_CS_RCS_MASK)
#define WDOG_CS_ULK_MASK                         0x800u
#define WDOG_CS_ULK_SHIFT                        11u
#define WDOG_CS_ULK_WIDTH                        1u
#define WDOG_CS_ULK(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_ULK_SHIFT))&WDOG_CS_ULK_MASK)
#define WDOG_CS_PRES_MASK                        0x1000u
#define WDOG_CS_PRES_SHIFT                       12u
#define WDOG_CS_PRES_WIDTH                       1u
#define WDOG_CS_PRES(x)                          (((uint32_t)(((uint32_t)(x))<<WDOG_CS_PRES_SHIFT))&WDOG_CS_PRES_MASK)
#define WDOG_CS_CMD32EN_MASK                     0x2000u
#define WDOG_CS_CMD32EN_SHIFT                    13u
#define WDOG_CS_CMD32EN_WIDTH                    1u
#define WDOG_CS_CMD32EN(x)                       (((uint32_t)(((uint32_t)(x))<<WDOG_CS_CMD32EN_SHIFT))&WDOG_CS_CMD32EN_MASK)
#define WDOG_CS_FLG_MASK                         0x4000u
#define WDOG_CS_FLG_SHIFT                        14u
#define WDOG_CS_FLG_WIDTH                        1u
#define WDOG_CS_FLG(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_FLG_SHIFT))&WDOG_CS_FLG_MASK)
#define WDOG_CS_WIN_MASK                         0x8000u
#define WDOG_CS_WIN_SHIFT                        15u
#define WDOG_CS_WIN_WIDTH                        1u
#define WDOG_CS_WIN(x)                           (((uint32_t)(((uint32_t)(x))<<WDOG_CS_WIN_SHIFT))&WDOG_CS_WIN_MASK)
/* CNT Bit Fields */
#define WDOG_CNT_CNTLOW_MASK                     0xFFu
#define WDOG_CNT_CNTLOW_SHIFT                    0u
#define WDOG_CNT_CNTLOW_WIDTH                    8u
#define WDOG_CNT_CNTLOW(x)                       (((uint32_t)(((uint32_t)(x))<<WDOG_CNT_CNTLOW_SHIFT))&WDOG_CNT_CNTLOW_MASK)
#define WDOG_CNT_CNTHIGH_MASK                    0xFF00u
#define WDOG_CNT_CNTHIGH_SHIFT                   8u
#define WDOG_CNT_CNTHIGH_WIDTH                   8u
#define WDOG_CNT_CNTHIGH(x)                      (((uint32_t)(((uint32_t)(x))<<WDOG_CNT_CNTHIGH_SHIFT))&WDOG_CNT_CNTHIGH_MASK)
/* TOVAL Bit Fields */
#define WDOG_TOVAL_TOVALLOW_MASK                 0xFFu
#define WDOG_TOVAL_TOVALLOW_SHIFT                0u
#define WDOG_TOVAL_TOVALLOW_WIDTH                8u
#define WDOG_TOVAL_TOVALLOW(x)                   (((uint32_t)(((uint32_t)(x))<<WDOG_TOVAL_TOVALLOW_SHIFT))&WDOG_TOVAL_TOVALLOW_MASK)
#define WDOG_TOVAL_TOVALHIGH_MASK                0xFF00u
#define WDOG_TOVAL_TOVALHIGH_SHIFT               8u
#define WDOG_TOVAL_TOVALHIGH_WIDTH               8u
#define WDOG_TOVAL_TOVALHIGH(x)                  (((uint32_t)(((uint32_t)(x))<<WDOG_TOVAL_TOVALHIGH_SHIFT))&WDOG_TOVAL_TOVALHIGH_MASK)
/* WIN Bit Fields */
#define WDOG_WIN_WINLOW_MASK                     0xFFu
#define WDOG_WIN_WINLOW_SHIFT                    0u
#define WDOG_WIN_WINLOW_WIDTH                    8u
#define WDOG_WIN_WINLOW(x)                       (((uint32_t)(((uint32_t)(x))<<WDOG_WIN_WINLOW_SHIFT))&WDOG_WIN_WINLOW_MASK)
#define WDOG_WIN_WINHIGH_MASK                    0xFF00u
#define WDOG_WIN_WINHIGH_SHIFT                   8u
#define WDOG_WIN_WINHIGH_WIDTH                   8u
#define WDOG_WIN_WINHIGH(x)                      (((uint32_t)(((uint32_t)(x))<<WDOG_WIN_WINHIGH_SHIFT))&WDOG_WIN_WINHIGH_MASK)

/*!
 * @}
 */ /* end of group WDOG_Register_Masks */


/*!
 * @}
 */ /* end of group WDOG_Peripheral_Access_Layer */

#endif /* S32K1XX_WDOG_H_ */
