/*
 * S32K1xx.FlexIO.h
 *
 *  Created on: 2020年7月20日
 *      Author: Master.HE
 */

#ifndef S32K1XX_FLEXIO_H_
#define S32K1XX_FLEXIO_H_

#include "S32K1xx.Type.h"

/* ----------------------------------------------------------------------------
   -- FLEXIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FLEXIO_Peripheral_Access_Layer FLEXIO Peripheral Access Layer
 * @{
 */


/** FLEXIO - Size of Registers Arrays */
#define FLEXIO_SHIFTCTL_COUNT                    4u
#define FLEXIO_SHIFTCFG_COUNT                    4u
#define FLEXIO_SHIFTBUF_COUNT                    4u
#define FLEXIO_SHIFTBUFBIS_COUNT                 4u
#define FLEXIO_SHIFTBUFBYS_COUNT                 4u
#define FLEXIO_SHIFTBUFBBS_COUNT                 4u
#define FLEXIO_TIMCTL_COUNT                      4u
#define FLEXIO_TIMCFG_COUNT                      4u
#define FLEXIO_TIMCMP_COUNT                      4u

/** FLEXIO - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
  __IO uint32_t CTRL;                              /**< FlexIO Control Register, offset: 0x8 */
  __I  uint32_t PIN;                               /**< Pin State Register, offset: 0xC */
  __IO uint32_t SHIFTSTAT;                         /**< Shifter Status Register, offset: 0x10 */
  __IO uint32_t SHIFTERR;                          /**< Shifter Error Register, offset: 0x14 */
  __IO uint32_t TIMSTAT;                           /**< Timer Status Register, offset: 0x18 */
       uint8_t RESERVED_0[4];
  __IO uint32_t SHIFTSIEN;                         /**< Shifter Status Interrupt Enable, offset: 0x20 */
  __IO uint32_t SHIFTEIEN;                         /**< Shifter Error Interrupt Enable, offset: 0x24 */
  __IO uint32_t TIMIEN;                            /**< Timer Interrupt Enable Register, offset: 0x28 */
       uint8_t RESERVED_1[4];
  __IO uint32_t SHIFTSDEN;                         /**< Shifter Status DMA Enable, offset: 0x30 */
       uint8_t RESERVED_2[76];
  __IO uint32_t SHIFTCTL[FLEXIO_SHIFTCTL_COUNT];   /**< Shifter Control N Register, array offset: 0x80, array step: 0x4 */
       uint8_t RESERVED_3[112];
  __IO uint32_t SHIFTCFG[FLEXIO_SHIFTCFG_COUNT];   /**< Shifter Configuration N Register, array offset: 0x100, array step: 0x4 */
       uint8_t RESERVED_4[240];
  __IO uint32_t SHIFTBUF[FLEXIO_SHIFTBUF_COUNT];   /**< Shifter Buffer N Register, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_5[112];
  __IO uint32_t SHIFTBUFBIS[FLEXIO_SHIFTBUFBIS_COUNT]; /**< Shifter Buffer N Bit Swapped Register, array offset: 0x280, array step: 0x4 */
       uint8_t RESERVED_6[112];
  __IO uint32_t SHIFTBUFBYS[FLEXIO_SHIFTBUFBYS_COUNT]; /**< Shifter Buffer N Byte Swapped Register, array offset: 0x300, array step: 0x4 */
       uint8_t RESERVED_7[112];
  __IO uint32_t SHIFTBUFBBS[FLEXIO_SHIFTBUFBBS_COUNT]; /**< Shifter Buffer N Bit Byte Swapped Register, array offset: 0x380, array step: 0x4 */
       uint8_t RESERVED_8[112];
  __IO uint32_t TIMCTL[FLEXIO_TIMCTL_COUNT];       /**< Timer Control N Register, array offset: 0x400, array step: 0x4 */
       uint8_t RESERVED_9[112];
  __IO uint32_t TIMCFG[FLEXIO_TIMCFG_COUNT];       /**< Timer Configuration N Register, array offset: 0x480, array step: 0x4 */
       uint8_t RESERVED_10[112];
  __IO uint32_t TIMCMP[FLEXIO_TIMCMP_COUNT];       /**< Timer Compare N Register, array offset: 0x500, array step: 0x4 */
} FLEXIO_Type, *FLEXIO_MemMapPtr;

 /** Number of instances of the FLEXIO module. */
#define FLEXIO_INSTANCE_COUNT                    (1u)


/* FLEXIO - Peripheral instance base addresses */
/** Peripheral FLEXIO base address */
#define FLEXIO_BASE                              (0x4005A000u)
/** Peripheral FLEXIO base pointer */
#define FLEXIO                                   ((FLEXIO_Type *)FLEXIO_BASE)
/** Array initializer of FLEXIO peripheral base addresses */
#define FLEXIO_BASE_ADDRS                        { FLEXIO_BASE }
/** Array initializer of FLEXIO peripheral base pointers */
#define FLEXIO_BASE_PTRS                         { FLEXIO }
 /** Number of interrupt vector arrays for the FLEXIO module. */
#define FLEXIO_IRQS_ARR_COUNT                    (1u)
 /** Number of interrupt channels for the FLEXIO module. */
#define FLEXIO_IRQS_CH_COUNT                     (1u)
/** Interrupt vectors for the FLEXIO peripheral type */
#define FLEXIO_IRQS                              { FLEXIO_IRQn }

/* ----------------------------------------------------------------------------
   -- FLEXIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FLEXIO_Register_Masks FLEXIO Register Masks
 * @{
 */

/* VERID Bit Fields */
#define FLEXIO_VERID_FEATURE_MASK                0xFFFFu
#define FLEXIO_VERID_FEATURE_SHIFT               0u
#define FLEXIO_VERID_FEATURE_WIDTH               16u
#define FLEXIO_VERID_FEATURE(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_VERID_FEATURE_SHIFT))&FLEXIO_VERID_FEATURE_MASK)
#define FLEXIO_VERID_MINOR_MASK                  0xFF0000u
#define FLEXIO_VERID_MINOR_SHIFT                 16u
#define FLEXIO_VERID_MINOR_WIDTH                 8u
#define FLEXIO_VERID_MINOR(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_VERID_MINOR_SHIFT))&FLEXIO_VERID_MINOR_MASK)
#define FLEXIO_VERID_MAJOR_MASK                  0xFF000000u
#define FLEXIO_VERID_MAJOR_SHIFT                 24u
#define FLEXIO_VERID_MAJOR_WIDTH                 8u
#define FLEXIO_VERID_MAJOR(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_VERID_MAJOR_SHIFT))&FLEXIO_VERID_MAJOR_MASK)
/* PARAM Bit Fields */
#define FLEXIO_PARAM_SHIFTER_MASK                0xFFu
#define FLEXIO_PARAM_SHIFTER_SHIFT               0u
#define FLEXIO_PARAM_SHIFTER_WIDTH               8u
#define FLEXIO_PARAM_SHIFTER(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_SHIFTER_SHIFT))&FLEXIO_PARAM_SHIFTER_MASK)
#define FLEXIO_PARAM_TIMER_MASK                  0xFF00u
#define FLEXIO_PARAM_TIMER_SHIFT                 8u
#define FLEXIO_PARAM_TIMER_WIDTH                 8u
#define FLEXIO_PARAM_TIMER(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_TIMER_SHIFT))&FLEXIO_PARAM_TIMER_MASK)
#define FLEXIO_PARAM_PIN_MASK                    0xFF0000u
#define FLEXIO_PARAM_PIN_SHIFT                   16u
#define FLEXIO_PARAM_PIN_WIDTH                   8u
#define FLEXIO_PARAM_PIN(x)                      (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_PIN_SHIFT))&FLEXIO_PARAM_PIN_MASK)
#define FLEXIO_PARAM_TRIGGER_MASK                0xFF000000u
#define FLEXIO_PARAM_TRIGGER_SHIFT               24u
#define FLEXIO_PARAM_TRIGGER_WIDTH               8u
#define FLEXIO_PARAM_TRIGGER(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_PARAM_TRIGGER_SHIFT))&FLEXIO_PARAM_TRIGGER_MASK)
/* CTRL Bit Fields */
#define FLEXIO_CTRL_FLEXEN_MASK                  0x1u
#define FLEXIO_CTRL_FLEXEN_SHIFT                 0u
#define FLEXIO_CTRL_FLEXEN_WIDTH                 1u
#define FLEXIO_CTRL_FLEXEN(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_FLEXEN_SHIFT))&FLEXIO_CTRL_FLEXEN_MASK)
#define FLEXIO_CTRL_SWRST_MASK                   0x2u
#define FLEXIO_CTRL_SWRST_SHIFT                  1u
#define FLEXIO_CTRL_SWRST_WIDTH                  1u
#define FLEXIO_CTRL_SWRST(x)                     (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_SWRST_SHIFT))&FLEXIO_CTRL_SWRST_MASK)
#define FLEXIO_CTRL_FASTACC_MASK                 0x4u
#define FLEXIO_CTRL_FASTACC_SHIFT                2u
#define FLEXIO_CTRL_FASTACC_WIDTH                1u
#define FLEXIO_CTRL_FASTACC(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_FASTACC_SHIFT))&FLEXIO_CTRL_FASTACC_MASK)
#define FLEXIO_CTRL_DBGE_MASK                    0x40000000u
#define FLEXIO_CTRL_DBGE_SHIFT                   30u
#define FLEXIO_CTRL_DBGE_WIDTH                   1u
#define FLEXIO_CTRL_DBGE(x)                      (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_DBGE_SHIFT))&FLEXIO_CTRL_DBGE_MASK)
#define FLEXIO_CTRL_DOZEN_MASK                   0x80000000u
#define FLEXIO_CTRL_DOZEN_SHIFT                  31u
#define FLEXIO_CTRL_DOZEN_WIDTH                  1u
#define FLEXIO_CTRL_DOZEN(x)                     (((uint32_t)(((uint32_t)(x))<<FLEXIO_CTRL_DOZEN_SHIFT))&FLEXIO_CTRL_DOZEN_MASK)
/* PIN Bit Fields */
#define FLEXIO_PIN_PDI_MASK                      0xFFu
#define FLEXIO_PIN_PDI_SHIFT                     0u
#define FLEXIO_PIN_PDI_WIDTH                     8u
#define FLEXIO_PIN_PDI(x)                        (((uint32_t)(((uint32_t)(x))<<FLEXIO_PIN_PDI_SHIFT))&FLEXIO_PIN_PDI_MASK)
/* SHIFTSTAT Bit Fields */
#define FLEXIO_SHIFTSTAT_SSF_MASK                0xFu
#define FLEXIO_SHIFTSTAT_SSF_SHIFT               0u
#define FLEXIO_SHIFTSTAT_SSF_WIDTH               4u
#define FLEXIO_SHIFTSTAT_SSF(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTSTAT_SSF_SHIFT))&FLEXIO_SHIFTSTAT_SSF_MASK)
/* SHIFTERR Bit Fields */
#define FLEXIO_SHIFTERR_SEF_MASK                 0xFu
#define FLEXIO_SHIFTERR_SEF_SHIFT                0u
#define FLEXIO_SHIFTERR_SEF_WIDTH                4u
#define FLEXIO_SHIFTERR_SEF(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTERR_SEF_SHIFT))&FLEXIO_SHIFTERR_SEF_MASK)
/* TIMSTAT Bit Fields */
#define FLEXIO_TIMSTAT_TSF_MASK                  0xFu
#define FLEXIO_TIMSTAT_TSF_SHIFT                 0u
#define FLEXIO_TIMSTAT_TSF_WIDTH                 4u
#define FLEXIO_TIMSTAT_TSF(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMSTAT_TSF_SHIFT))&FLEXIO_TIMSTAT_TSF_MASK)
/* SHIFTSIEN Bit Fields */
#define FLEXIO_SHIFTSIEN_SSIE_MASK               0xFu
#define FLEXIO_SHIFTSIEN_SSIE_SHIFT              0u
#define FLEXIO_SHIFTSIEN_SSIE_WIDTH              4u
#define FLEXIO_SHIFTSIEN_SSIE(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTSIEN_SSIE_SHIFT))&FLEXIO_SHIFTSIEN_SSIE_MASK)
/* SHIFTEIEN Bit Fields */
#define FLEXIO_SHIFTEIEN_SEIE_MASK               0xFu
#define FLEXIO_SHIFTEIEN_SEIE_SHIFT              0u
#define FLEXIO_SHIFTEIEN_SEIE_WIDTH              4u
#define FLEXIO_SHIFTEIEN_SEIE(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTEIEN_SEIE_SHIFT))&FLEXIO_SHIFTEIEN_SEIE_MASK)
/* TIMIEN Bit Fields */
#define FLEXIO_TIMIEN_TEIE_MASK                  0xFu
#define FLEXIO_TIMIEN_TEIE_SHIFT                 0u
#define FLEXIO_TIMIEN_TEIE_WIDTH                 4u
#define FLEXIO_TIMIEN_TEIE(x)                    (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMIEN_TEIE_SHIFT))&FLEXIO_TIMIEN_TEIE_MASK)
/* SHIFTSDEN Bit Fields */
#define FLEXIO_SHIFTSDEN_SSDE_MASK               0xFu
#define FLEXIO_SHIFTSDEN_SSDE_SHIFT              0u
#define FLEXIO_SHIFTSDEN_SSDE_WIDTH              4u
#define FLEXIO_SHIFTSDEN_SSDE(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTSDEN_SSDE_SHIFT))&FLEXIO_SHIFTSDEN_SSDE_MASK)
/* SHIFTCTL Bit Fields */
#define FLEXIO_SHIFTCTL_SMOD_MASK                0x7u
#define FLEXIO_SHIFTCTL_SMOD_SHIFT               0u
#define FLEXIO_SHIFTCTL_SMOD_WIDTH               3u
#define FLEXIO_SHIFTCTL_SMOD(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_SMOD_SHIFT))&FLEXIO_SHIFTCTL_SMOD_MASK)
#define FLEXIO_SHIFTCTL_PINPOL_MASK              0x80u
#define FLEXIO_SHIFTCTL_PINPOL_SHIFT             7u
#define FLEXIO_SHIFTCTL_PINPOL_WIDTH             1u
#define FLEXIO_SHIFTCTL_PINPOL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_PINPOL_SHIFT))&FLEXIO_SHIFTCTL_PINPOL_MASK)
#define FLEXIO_SHIFTCTL_PINSEL_MASK              0x700u
#define FLEXIO_SHIFTCTL_PINSEL_SHIFT             8u
#define FLEXIO_SHIFTCTL_PINSEL_WIDTH             3u
#define FLEXIO_SHIFTCTL_PINSEL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_PINSEL_SHIFT))&FLEXIO_SHIFTCTL_PINSEL_MASK)
#define FLEXIO_SHIFTCTL_PINCFG_MASK              0x30000u
#define FLEXIO_SHIFTCTL_PINCFG_SHIFT             16u
#define FLEXIO_SHIFTCTL_PINCFG_WIDTH             2u
#define FLEXIO_SHIFTCTL_PINCFG(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_PINCFG_SHIFT))&FLEXIO_SHIFTCTL_PINCFG_MASK)
#define FLEXIO_SHIFTCTL_TIMPOL_MASK              0x800000u
#define FLEXIO_SHIFTCTL_TIMPOL_SHIFT             23u
#define FLEXIO_SHIFTCTL_TIMPOL_WIDTH             1u
#define FLEXIO_SHIFTCTL_TIMPOL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_TIMPOL_SHIFT))&FLEXIO_SHIFTCTL_TIMPOL_MASK)
#define FLEXIO_SHIFTCTL_TIMSEL_MASK              0x3000000u
#define FLEXIO_SHIFTCTL_TIMSEL_SHIFT             24u
#define FLEXIO_SHIFTCTL_TIMSEL_WIDTH             2u
#define FLEXIO_SHIFTCTL_TIMSEL(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCTL_TIMSEL_SHIFT))&FLEXIO_SHIFTCTL_TIMSEL_MASK)
/* SHIFTCFG Bit Fields */
#define FLEXIO_SHIFTCFG_SSTART_MASK              0x3u
#define FLEXIO_SHIFTCFG_SSTART_SHIFT             0u
#define FLEXIO_SHIFTCFG_SSTART_WIDTH             2u
#define FLEXIO_SHIFTCFG_SSTART(x)                (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCFG_SSTART_SHIFT))&FLEXIO_SHIFTCFG_SSTART_MASK)
#define FLEXIO_SHIFTCFG_SSTOP_MASK               0x30u
#define FLEXIO_SHIFTCFG_SSTOP_SHIFT              4u
#define FLEXIO_SHIFTCFG_SSTOP_WIDTH              2u
#define FLEXIO_SHIFTCFG_SSTOP(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCFG_SSTOP_SHIFT))&FLEXIO_SHIFTCFG_SSTOP_MASK)
#define FLEXIO_SHIFTCFG_INSRC_MASK               0x100u
#define FLEXIO_SHIFTCFG_INSRC_SHIFT              8u
#define FLEXIO_SHIFTCFG_INSRC_WIDTH              1u
#define FLEXIO_SHIFTCFG_INSRC(x)                 (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTCFG_INSRC_SHIFT))&FLEXIO_SHIFTCFG_INSRC_MASK)
/* SHIFTBUF Bit Fields */
#define FLEXIO_SHIFTBUF_SHIFTBUF_MASK            0xFFFFFFFFu
#define FLEXIO_SHIFTBUF_SHIFTBUF_SHIFT           0u
#define FLEXIO_SHIFTBUF_SHIFTBUF_WIDTH           32u
#define FLEXIO_SHIFTBUF_SHIFTBUF(x)              (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUF_SHIFTBUF_SHIFT))&FLEXIO_SHIFTBUF_SHIFTBUF_MASK)
/* SHIFTBUFBIS Bit Fields */
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_MASK      0xFFFFFFFFu
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_SHIFT     0u
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_WIDTH     32u
#define FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS(x)        (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_SHIFT))&FLEXIO_SHIFTBUFBIS_SHIFTBUFBIS_MASK)
/* SHIFTBUFBYS Bit Fields */
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_MASK      0xFFFFFFFFu
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_SHIFT     0u
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_WIDTH     32u
#define FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS(x)        (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_SHIFT))&FLEXIO_SHIFTBUFBYS_SHIFTBUFBYS_MASK)
/* SHIFTBUFBBS Bit Fields */
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_MASK      0xFFFFFFFFu
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_SHIFT     0u
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_WIDTH     32u
#define FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS(x)        (((uint32_t)(((uint32_t)(x))<<FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_SHIFT))&FLEXIO_SHIFTBUFBBS_SHIFTBUFBBS_MASK)
/* TIMCTL Bit Fields */
#define FLEXIO_TIMCTL_TIMOD_MASK                 0x3u
#define FLEXIO_TIMCTL_TIMOD_SHIFT                0u
#define FLEXIO_TIMCTL_TIMOD_WIDTH                2u
#define FLEXIO_TIMCTL_TIMOD(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TIMOD_SHIFT))&FLEXIO_TIMCTL_TIMOD_MASK)
#define FLEXIO_TIMCTL_PINPOL_MASK                0x80u
#define FLEXIO_TIMCTL_PINPOL_SHIFT               7u
#define FLEXIO_TIMCTL_PINPOL_WIDTH               1u
#define FLEXIO_TIMCTL_PINPOL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_PINPOL_SHIFT))&FLEXIO_TIMCTL_PINPOL_MASK)
#define FLEXIO_TIMCTL_PINSEL_MASK                0x700u
#define FLEXIO_TIMCTL_PINSEL_SHIFT               8u
#define FLEXIO_TIMCTL_PINSEL_WIDTH               3u
#define FLEXIO_TIMCTL_PINSEL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_PINSEL_SHIFT))&FLEXIO_TIMCTL_PINSEL_MASK)
#define FLEXIO_TIMCTL_PINCFG_MASK                0x30000u
#define FLEXIO_TIMCTL_PINCFG_SHIFT               16u
#define FLEXIO_TIMCTL_PINCFG_WIDTH               2u
#define FLEXIO_TIMCTL_PINCFG(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_PINCFG_SHIFT))&FLEXIO_TIMCTL_PINCFG_MASK)
#define FLEXIO_TIMCTL_TRGSRC_MASK                0x400000u
#define FLEXIO_TIMCTL_TRGSRC_SHIFT               22u
#define FLEXIO_TIMCTL_TRGSRC_WIDTH               1u
#define FLEXIO_TIMCTL_TRGSRC(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TRGSRC_SHIFT))&FLEXIO_TIMCTL_TRGSRC_MASK)
#define FLEXIO_TIMCTL_TRGPOL_MASK                0x800000u
#define FLEXIO_TIMCTL_TRGPOL_SHIFT               23u
#define FLEXIO_TIMCTL_TRGPOL_WIDTH               1u
#define FLEXIO_TIMCTL_TRGPOL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TRGPOL_SHIFT))&FLEXIO_TIMCTL_TRGPOL_MASK)
#define FLEXIO_TIMCTL_TRGSEL_MASK                0xF000000u
#define FLEXIO_TIMCTL_TRGSEL_SHIFT               24u
#define FLEXIO_TIMCTL_TRGSEL_WIDTH               4u
#define FLEXIO_TIMCTL_TRGSEL(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCTL_TRGSEL_SHIFT))&FLEXIO_TIMCTL_TRGSEL_MASK)
/* TIMCFG Bit Fields */
#define FLEXIO_TIMCFG_TSTART_MASK                0x2u
#define FLEXIO_TIMCFG_TSTART_SHIFT               1u
#define FLEXIO_TIMCFG_TSTART_WIDTH               1u
#define FLEXIO_TIMCFG_TSTART(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TSTART_SHIFT))&FLEXIO_TIMCFG_TSTART_MASK)
#define FLEXIO_TIMCFG_TSTOP_MASK                 0x30u
#define FLEXIO_TIMCFG_TSTOP_SHIFT                4u
#define FLEXIO_TIMCFG_TSTOP_WIDTH                2u
#define FLEXIO_TIMCFG_TSTOP(x)                   (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TSTOP_SHIFT))&FLEXIO_TIMCFG_TSTOP_MASK)
#define FLEXIO_TIMCFG_TIMENA_MASK                0x700u
#define FLEXIO_TIMCFG_TIMENA_SHIFT               8u
#define FLEXIO_TIMCFG_TIMENA_WIDTH               3u
#define FLEXIO_TIMCFG_TIMENA(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMENA_SHIFT))&FLEXIO_TIMCFG_TIMENA_MASK)
#define FLEXIO_TIMCFG_TIMDIS_MASK                0x7000u
#define FLEXIO_TIMCFG_TIMDIS_SHIFT               12u
#define FLEXIO_TIMCFG_TIMDIS_WIDTH               3u
#define FLEXIO_TIMCFG_TIMDIS(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMDIS_SHIFT))&FLEXIO_TIMCFG_TIMDIS_MASK)
#define FLEXIO_TIMCFG_TIMRST_MASK                0x70000u
#define FLEXIO_TIMCFG_TIMRST_SHIFT               16u
#define FLEXIO_TIMCFG_TIMRST_WIDTH               3u
#define FLEXIO_TIMCFG_TIMRST(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMRST_SHIFT))&FLEXIO_TIMCFG_TIMRST_MASK)
#define FLEXIO_TIMCFG_TIMDEC_MASK                0x300000u
#define FLEXIO_TIMCFG_TIMDEC_SHIFT               20u
#define FLEXIO_TIMCFG_TIMDEC_WIDTH               2u
#define FLEXIO_TIMCFG_TIMDEC(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMDEC_SHIFT))&FLEXIO_TIMCFG_TIMDEC_MASK)
#define FLEXIO_TIMCFG_TIMOUT_MASK                0x3000000u
#define FLEXIO_TIMCFG_TIMOUT_SHIFT               24u
#define FLEXIO_TIMCFG_TIMOUT_WIDTH               2u
#define FLEXIO_TIMCFG_TIMOUT(x)                  (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCFG_TIMOUT_SHIFT))&FLEXIO_TIMCFG_TIMOUT_MASK)
/* TIMCMP Bit Fields */
#define FLEXIO_TIMCMP_CMP_MASK                   0xFFFFu
#define FLEXIO_TIMCMP_CMP_SHIFT                  0u
#define FLEXIO_TIMCMP_CMP_WIDTH                  16u
#define FLEXIO_TIMCMP_CMP(x)                     (((uint32_t)(((uint32_t)(x))<<FLEXIO_TIMCMP_CMP_SHIFT))&FLEXIO_TIMCMP_CMP_MASK)

/*!
 * @}
 */ /* end of group FLEXIO_Register_Masks */


/*!
 * @}
 */ /* end of group FLEXIO_Peripheral_Access_Layer */

#endif /* S32K1XX_FLEXIO_H_ */
