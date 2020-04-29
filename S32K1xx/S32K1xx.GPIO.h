/*
 * S32K1xx.GPIO.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_GPIO_H_
#define S32K1XX_GPIO_H_

#include "S32K1xx.Type.h"

 /** Number of instances of the GPIO module. */
#define GPIO_INSTANCE_COUNT                      (5u)
//-------------------------------------------------------------------------------------------------
//GPIO
typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t Bit0	:1;
		__IO uint32_t Bit1	:1;
		__IO uint32_t Bit2	:1;
		__IO uint32_t Bit3	:1;
		__IO uint32_t Bit4	:1;
		__IO uint32_t Bit5	:1;
		__IO uint32_t Bit6	:1;
		__IO uint32_t Bit7	:1;
		__IO uint32_t Bit8	:1;
		__IO uint32_t Bit9	:1;
		__IO uint32_t Bit10	:1;
		__IO uint32_t Bit11	:1;
		__IO uint32_t Bit12	:1;
		__IO uint32_t Bit13	:1;
		__IO uint32_t Bit14	:1;
		__IO uint32_t Bit15	:1;
		__IO uint32_t Bit16	:1;
		__IO uint32_t Bit17	:1;
		__IO uint32_t Bit18	:1;
		__IO uint32_t Bit19	:1;
		__IO uint32_t Bit20	:1;
		__IO uint32_t Bit21	:1;
		__IO uint32_t Bit22	:1;
		__IO uint32_t Bit23	:1;
		__IO uint32_t Bit24	:1;
		__IO uint32_t Bit25	:1;
		__IO uint32_t Bit26	:1;
		__IO uint32_t Bit27	:1;
		__IO uint32_t Bit28	:1;
		__IO uint32_t Bit29	:1;
		__IO uint32_t Bit30	:1;
		__IO uint32_t Bit31	:1;

	}Bit;

}GPIO_BIT_Type;


//-------------------------------------------------------------------------------------------------
typedef struct
{
	struct
	{
		GPIO_BIT_Type PDOR;                              /**< Port Data Output Register, offset: 0x0 */
		GPIO_BIT_Type PSOR;                              /**< Port Set Output Register, offset: 0x4 */
		GPIO_BIT_Type PCOR;                              /**< Port Clear Output Register, offset: 0x8 */
		GPIO_BIT_Type PTOR;                              /**< Port Toggle Output Register, offset: 0xC */
		GPIO_BIT_Type PDIR;                              /**< Port Data Input Register, offset: 0x10 */
		GPIO_BIT_Type PDDR;                              /**< Port Data Direction Register, offset: 0x14 */
		GPIO_BIT_Type PIDR;                              /**< Port Input Disable Register, offset: 0x18 */

		__I uint8_t Reserved1[36];						//0x1C-0x3F
	} Index[GPIO_INSTANCE_COUNT];
}GPIO_Type;




//-------------------------------------------------------------------------------------------------


#define GPIO						((GPIO_Type *)0x400FF000u)







/* ----------------------------------------------------------------------------
   -- GPIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Peripheral_Access_Layer GPIO Peripheral Access Layer
 * @{
 */


/** GPIO - Size of Registers Arrays */

/** GPIO - Register Layout Typedef */

//typedef struct {
//  __IO uint32_t PDOR;                              /**< Port Data Output Register, offset: 0x0 */
//  __O  uint32_t PSOR;                              /**< Port Set Output Register, offset: 0x4 */
//  __O  uint32_t PCOR;                              /**< Port Clear Output Register, offset: 0x8 */
//  __O  uint32_t PTOR;                              /**< Port Toggle Output Register, offset: 0xC */
//  __I  uint32_t PDIR;                              /**< Port Data Input Register, offset: 0x10 */
//  __IO uint32_t PDDR;                              /**< Port Data Direction Register, offset: 0x14 */
//  __IO uint32_t PIDR;                              /**< Port Input Disable Register, offset: 0x18 */
//} GPIO_Type, *GPIO_MemMapPtr;




/* GPIO - Peripheral instance base addresses */
/** Peripheral PTA base address */
#define PTA_BASE                                 (0x400FF000u)
/** Peripheral PTA base pointer */
//#define PTA                                      ((GPIO_Type *)PTA_BASE)
/** Peripheral PTB base address */
#define PTB_BASE                                 (0x400FF040u)
/** Peripheral PTB base pointer */
//#define PTB                                      ((GPIO_Type *)PTB_BASE)
/** Peripheral PTC base address */
#define PTC_BASE                                 (0x400FF080u)
/** Peripheral PTC base pointer */
//#define PTC                                      ((GPIO_Type *)PTC_BASE)
/** Peripheral PTD base address */
#define PTD_BASE                                 (0x400FF0C0u)
/** Peripheral PTD base pointer */
//#define PTD                                      ((GPIO_Type *)PTD_BASE)
/** Peripheral PTE base address */
#define PTE_BASE                                 (0x400FF100u)
/** Peripheral PTE base pointer */
//#define PTE                                      ((GPIO_Type *)PTE_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { PTA_BASE, PTB_BASE, PTC_BASE, PTD_BASE, PTE_BASE }
/** Array initializer of GPIO peripheral base pointers */
//#define GPIO_BASE_PTRS                           { PTA, PTB, PTC, PTD, PTE }

/* ----------------------------------------------------------------------------
   -- GPIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Register_Masks GPIO Register Masks
 * @{
 */

/* PDOR Bit Fields */
#define GPIO_PDOR_PDO_MASK                       0xFFFFFFFFu
#define GPIO_PDOR_PDO_SHIFT                      0u
#define GPIO_PDOR_PDO_WIDTH                      32u
#define GPIO_PDOR_PDO(x)                         (((uint32_t)(((uint32_t)(x))<<GPIO_PDOR_PDO_SHIFT))&GPIO_PDOR_PDO_MASK)
/* PSOR Bit Fields */
#define GPIO_PSOR_PTSO_MASK                      0xFFFFFFFFu
#define GPIO_PSOR_PTSO_SHIFT                     0u
#define GPIO_PSOR_PTSO_WIDTH                     32u
#define GPIO_PSOR_PTSO(x)                        (((uint32_t)(((uint32_t)(x))<<GPIO_PSOR_PTSO_SHIFT))&GPIO_PSOR_PTSO_MASK)
/* PCOR Bit Fields */
#define GPIO_PCOR_PTCO_MASK                      0xFFFFFFFFu
#define GPIO_PCOR_PTCO_SHIFT                     0u
#define GPIO_PCOR_PTCO_WIDTH                     32u
#define GPIO_PCOR_PTCO(x)                        (((uint32_t)(((uint32_t)(x))<<GPIO_PCOR_PTCO_SHIFT))&GPIO_PCOR_PTCO_MASK)
/* PTOR Bit Fields */
#define GPIO_PTOR_PTTO_MASK                      0xFFFFFFFFu
#define GPIO_PTOR_PTTO_SHIFT                     0u
#define GPIO_PTOR_PTTO_WIDTH                     32u
#define GPIO_PTOR_PTTO(x)                        (((uint32_t)(((uint32_t)(x))<<GPIO_PTOR_PTTO_SHIFT))&GPIO_PTOR_PTTO_MASK)
/* PDIR Bit Fields */
#define GPIO_PDIR_PDI_MASK                       0xFFFFFFFFu
#define GPIO_PDIR_PDI_SHIFT                      0u
#define GPIO_PDIR_PDI_WIDTH                      32u
#define GPIO_PDIR_PDI(x)                         (((uint32_t)(((uint32_t)(x))<<GPIO_PDIR_PDI_SHIFT))&GPIO_PDIR_PDI_MASK)
/* PDDR Bit Fields */
#define GPIO_PDDR_PDD_MASK                       0xFFFFFFFFu
#define GPIO_PDDR_PDD_SHIFT                      0u
#define GPIO_PDDR_PDD_WIDTH                      32u
#define GPIO_PDDR_PDD(x)                         (((uint32_t)(((uint32_t)(x))<<GPIO_PDDR_PDD_SHIFT))&GPIO_PDDR_PDD_MASK)
/* PIDR Bit Fields */
#define GPIO_PIDR_PID_MASK                       0xFFFFFFFFu
#define GPIO_PIDR_PID_SHIFT                      0u
#define GPIO_PIDR_PID_WIDTH                      32u
#define GPIO_PIDR_PID(x)                         (((uint32_t)(((uint32_t)(x))<<GPIO_PIDR_PID_SHIFT))&GPIO_PIDR_PID_MASK)

/*!
 * @}
 */ /* end of group GPIO_Register_Masks */


/*!
 * @}
 */ /* end of group GPIO_Peripheral_Access_Layer */


#endif /* S32K1XX_GPIO_H_ */
