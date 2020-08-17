/*
 * S32K1xx.IRQ.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_IRQ_H_
#define S32K1XX_IRQ_H_

/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers for S32K1xx
   ---------------------------------------------------------------------------- */

/**
 * @brief Defines the Interrupt Numbers definitions
 *
 * This enumeration is used to configure the interrupts.
 *
 * Implements : IRQn_Type_Class
 */
typedef enum
{
	/* Auxiliary constants */
	NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

	/* Core interrupts */
	NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
	HardFault_IRQn               = -13,              /**< Cortex-Mx SV Hard Fault Interrupt */

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	MemoryManagement_IRQn        = -12,              /**< Cortex-Mx Memory Management Interrupt */
	BusFault_IRQn                = -11,              /**< Cortex-Mx Bus Fault Interrupt */
	UsageFault_IRQn              = -10,              /**< Cortex-Mx Usage Fault Interrupt */
#endif

	SVCall_IRQn                  = -5,               /**< Cortex-Mx SV Call Interrupt */

#if (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	DebugMonitor_IRQn            = -4,               /**< Cortex-Mx Debug Monitor Interrupt */
#endif

	PendSV_IRQn                  = -2,               /**< Cortex-Mx Pend SV Interrupt */
	SysTick_IRQn                 = -1,               /**< Cortex-Mx System Tick Interrupt */

	/* Device specific interrupts */
	DMA0_IRQn                    = 0u,               /**< DMA channel 0 transfer complete */
	DMA1_IRQn                    = 1u,               /**< DMA channel 1 transfer complete */
	DMA2_IRQn                    = 2u,               /**< DMA channel 2 transfer complete */
	DMA3_IRQn                    = 3u,               /**< DMA channel 3 transfer complete */

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	DMA_Error_IRQn               = 4u,               /**< DMA error interrupt channels 0-3 */
	ERM_fault_IRQn               = 5u,               /**< ERM single and double bit error correction */
	RTC_IRQn                     = 6u,               /**< RTC alarm interrupt */
	RTC_Seconds_IRQn             = 7u,               /**< RTC seconds interrupt */
	LPTMR0_IRQn                  = 8u,               /**< LPTIMER interrupt request */
	PORT_IRQn                    = 9u,               /**< Port A, B, C, D and E pin detect interrupt */
	CAN0_ORed_Err_Wakeup_IRQn    = 10u,              /**< OR��ed [Bus Off OR Bus Off Done OR Transmit Warning OR Receive Warning], Interrupt indicating that errors were detected on the CAN bus, Interrupt asserted when Pretended Networking operation is enabled, and a valid message matches the selected filter criteria during Low Power mode */
	CAN0_ORed_0_31_MB_IRQn       = 11u,              /**< OR'ed Message buffer (0-15, 16-31) */
	FTM0_Ch0_7_IRQn              = 12u,              /**< FTM0 Channel 0 to 7 interrupt */
	FTM0_Fault_IRQn              = 13u,              /**< FTM0 Fault interrupt */
	FTM0_Ovf_Reload_IRQn         = 14u,              /**< FTM0 Counter overflow and Reload interrupt */
	FTM1_Ch0_7_IRQn              = 15u,              /**< FTM1 Channel 0 to 7 interrupt */
	FTM1_Fault_IRQn              = 16u,              /**< FTM1 Fault interrupt */
	FTM1_Ovf_Reload_IRQn         = 17u,              /**< FTM1 Counter overflow and Reload interrupt */
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	DMA4_IRQn                    = 4u,               /**< DMA channel 4 transfer complete */
	DMA5_IRQn                    = 5u,               /**< DMA channel 5 transfer complete */
	DMA6_IRQn                    = 6u,               /**< DMA channel 6 transfer complete */
	DMA7_IRQn                    = 7u,               /**< DMA channel 7 transfer complete */
	DMA8_IRQn                    = 8u,               /**< DMA channel 8 transfer complete */
	DMA9_IRQn                    = 9u,               /**< DMA channel 9 transfer complete */
	DMA10_IRQn                   = 10u,              /**< DMA channel 10 transfer complete */
	DMA11_IRQn                   = 11u,              /**< DMA channel 11 transfer complete */
	DMA12_IRQn                   = 12u,              /**< DMA channel 12 transfer complete */
	DMA13_IRQn                   = 13u,              /**< DMA channel 13 transfer complete */
	DMA14_IRQn                   = 14u,              /**< DMA channel 14 transfer complete */
	DMA15_IRQn                   = 15u,              /**< DMA channel 15 transfer complete */
	DMA_Error_IRQn               = 16u,              /**< DMA error interrupt channels 0-15 */
	MCM_IRQn                     = 17u,              /**< FPU sources */
#endif

	FTFC_IRQn                    = 18u,              /**< FTFC Command complete */

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	PDB0_IRQn                    = 19u,              /**< PDB0 interrupt */
	LPIT0_IRQn                   = 20u,              /**< LPIT interrupt */
	SCG_CMU_LVD_LVWSCG_IRQn      = 21u,              /**< PMC Low voltage detect interrupt, SCG bus interrupt request and CMU loss of range interrupt */
	WDOG_IRQn                    = 22u,              /**< WDOG interrupt request out before wdg reset out */
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	Read_Collision_IRQn          = 19u,              /**< FTFC Read collision */
	LVD_LVW_IRQn                 = 20u,              /**< PMC Low voltage detect interrupt */
	FTFC_Fault_IRQn              = 21u,              /**< FTFC Double bit fault detect */
	WDOG_EWM_IRQn                = 22u,              /**< Single interrupt vector for WDOG and EWM */
#endif

	RCM_IRQn                     = 23u,              /**< RCM Asynchronous Interrupt */

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	LPI2C0_Master_Slave_IRQn     = 24u,              /**< LPI2C0 Master Interrupt and Slave Interrupt */
	FLEXIO_IRQn                  = 25u,              /**< FlexIO Interrupt */
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	LPI2C0_Master_IRQn           = 24u,              /**< LPI2C0 Master Interrupt */
	LPI2C0_Slave_IRQn            = 25u,              /**< LPI2C0 Slave Interrupt */
#endif

	LPSPI0_IRQn                  = 26u,              /**< LPSPI0 Interrupt */

#if (defined (__Target_S32K118__) || defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	LPSPI1_IRQn                  = 27u,              /**< LPSPI1 Interrupt */
#endif

#if (defined (__Target_S32K116__) || defined (__Target_S32K118__))
	ADC0_IRQn                    = 28u,              /**< ADC0 interrupt request. */
	CMP0_IRQn                    = 29u,              /**< CMP0 interrupt request */
	LPUART1_RxTx_IRQn            = 30u,              /**< LPUART1 Transmit / Receive  Interrupt */
	LPUART0_RxTx_IRQn            = 31u,              /**< LPUART0 Transmit / Receive Interrupt */
#elif (defined (__Target_S32K142__) || defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

	LPSPI2_IRQn                  = 28u,              /**< LPSPI2 Interrupt */

#if	(defined (__Target_S32K148__))
	LPI2C1_Master_IRQn           = 29u,              /**< LPI2C1 Master Interrupt */
	LPI2C1_Slave_IRQn            = 30u,              /**< LPI2C1 Slave Interrupt */
#endif

#endif

	LPUART0_RxTx_IRQn            = 31u,              /**< LPUART0 Transmit / Receive Interrupt */
	LPUART1_RxTx_IRQn            = 33u,              /**< LPUART1 Transmit / Receive  Interrupt */

#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))
	LPUART2_RxTx_IRQn            = 35u,              /**< LPUART2 Transmit / Receive  Interrupt */
#endif

	ADC0_IRQn                    = 39u,              /**< ADC0 interrupt request. */
	ADC1_IRQn                    = 40u,              /**< ADC1 interrupt request. */
	CMP0_IRQn                    = 41u,              /**< CMP0 interrupt request */
	ERM_single_fault_IRQn        = 44u,              /**< ERM single bit error correction */
	ERM_double_fault_IRQn        = 45u,              /**< ERM double bit error non-correctable */
	RTC_IRQn                     = 46u,              /**< RTC alarm interrupt */
	RTC_Seconds_IRQn             = 47u,              /**< RTC seconds interrupt */
	LPIT0_Ch0_IRQn               = 48u,              /**< LPIT0 channel 0 overflow interrupt */
	LPIT0_Ch1_IRQn               = 49u,              /**< LPIT0 channel 1 overflow interrupt */
	LPIT0_Ch2_IRQn               = 50u,              /**< LPIT0 channel 2 overflow interrupt */
	LPIT0_Ch3_IRQn               = 51u,              /**< LPIT0 channel 3 overflow interrupt */
	PDB0_IRQn                    = 52u,              /**< PDB0 interrupt */

#if (defined (__Target_S32K148__))
	SAI1_Tx_IRQn                 = 55u,              /**< SAI1 Transmit Synchronous interrupt (for interrupt controller) */
	SAI1_Rx_IRQn                 = 56u,              /**< SAI1 Receive Synchronous interrupt (for interrupt controller) */
#endif

	SCG_IRQn                     = 57u,              /**< SCG bus interrupt request */
	LPTMR0_IRQn                  = 58u,              /**< LPTIMER interrupt request */
	PORTA_IRQn                   = 59u,              /**< Port A pin detect interrupt */
	PORTB_IRQn                   = 60u,              /**< Port B pin detect interrupt */
	PORTC_IRQn                   = 61u,              /**< Port C pin detect interrupt */
	PORTD_IRQn                   = 62u,              /**< Port D pin detect interrupt */
	PORTE_IRQn                   = 63u,              /**< Port E pin detect interrupt */
	SWI_IRQn                     = 64u,              /**< Software interrupt */

#if (defined (__Target_S32K148__))
	QSPI_IRQn                    = 65u,              /**< QSPI All interrupts ORed output */
#endif

	PDB1_IRQn                    = 68u,              /**< PDB1 interrupt */
	FLEXIO_IRQn                  = 69u,              /**< FlexIO Interrupt */

#if (defined (__Target_S32K148__))
	SAI0_Tx_IRQn                 = 70u,              /**< SAI0 Transmit Synchronous interrupt (for interrupt controller) */
	SAI0_Rx_IRQn                 = 71u,              /**< SAI0 Receive Synchronous interrupt (for interrupt controller) */
	ENET_TIMER_IRQn              = 72u,              /**< ENET 1588 Timer Interrupt - synchronous */
	ENET_TX_IRQn                 = 73u,              /**< ENET Data transfer done */
	ENET_RX_IRQn                 = 74u,              /**< ENET Receive Buffer Done for Ring/Queue 0 */
	ENET_ERR_IRQn                = 75u,              /**< ENET Payload receive error. */
	ENET_STOP_IRQn               = 76u,              /**< ENET Graceful stop */
	ENET_WAKE_IRQn               = 77u,              /**< ENET Wake from sleep. */
#endif

	CAN0_ORed_IRQn               = 78u,              /**< CAN0 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
	CAN0_Error_IRQn              = 79u,              /**< CAN0 Interrupt indicating that errors were detected on the CAN bus */
	CAN0_Wake_Up_IRQn            = 80u,              /**< CAN0 Interrupt asserted when Pretended Networking operation is enabled, and a valid message matches the selected filter criteria during Low Power mode */
	CAN0_ORed_0_15_MB_IRQn       = 81u,              /**< CAN0 OR'ed Message buffer (0-15) */
	CAN0_ORed_16_31_MB_IRQn      = 82u,              /**< CAN0 OR'ed Message buffer (16-31) */
	CAN1_ORed_IRQn               = 85u,              /**< CAN1 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
	CAN1_Error_IRQn              = 86u,              /**< CAN1 Interrupt indicating that errors were detected on the CAN bus */
	CAN1_ORed_0_15_MB_IRQn       = 88u,              /**< CAN1 OR'ed Interrupt for Message buffer (0-15) */

#if (defined (__Target_S32K144__) || defined (__Target_S32K146__) || defined (__Target_S32K148__))

#if	(defined (__Target_S32K146__) || defined (__Target_S32K148__))
	CAN1_ORed_16_31_MB_IRQn      = 89u,              /**< CAN1 OR'ed Interrupt for Message buffer (16-31) */
#endif

	CAN2_ORed_IRQn               = 92u,              /**< CAN2 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
	CAN2_Error_IRQn              = 93u,              /**< CAN2 Interrupt indicating that errors were detected on the CAN bus */
	CAN2_ORed_0_15_MB_IRQn       = 95u,              /**< CAN2 OR'ed Message buffer (0-15) */

#if	(defined (__Target_S32K148__))
	CAN2_ORed_16_31_MB_IRQn      = 96u,              /**< CAN2 OR'ed Message buffer (16-31) */
#endif

#endif

	FTM0_Ch0_Ch1_IRQn            = 99u,              /**< FTM0 Channel 0 and 1 interrupt */
	FTM0_Ch2_Ch3_IRQn            = 100u,             /**< FTM0 Channel 2 and 3 interrupt */
	FTM0_Ch4_Ch5_IRQn            = 101u,             /**< FTM0 Channel 4 and 5 interrupt */
	FTM0_Ch6_Ch7_IRQn            = 102u,             /**< FTM0 Channel 6 and 7 interrupt */
	FTM0_Fault_IRQn              = 103u,             /**< FTM0 Fault interrupt */
	FTM0_Ovf_Reload_IRQn         = 104u,             /**< FTM0 Counter overflow and Reload interrupt */
	FTM1_Ch0_Ch1_IRQn            = 105u,             /**< FTM1 Channel 0 and 1 interrupt */
	FTM1_Ch2_Ch3_IRQn            = 106u,             /**< FTM1 Channel 2 and 3 interrupt */
	FTM1_Ch4_Ch5_IRQn            = 107u,             /**< FTM1 Channel 4 and 5 interrupt */
	FTM1_Ch6_Ch7_IRQn            = 108u,             /**< FTM1 Channel 6 and 7 interrupt */
	FTM1_Fault_IRQn              = 109u,             /**< FTM1 Fault interrupt */
	FTM1_Ovf_Reload_IRQn         = 110u,             /**< FTM1 Counter overflow and Reload interrupt */
	FTM2_Ch0_Ch1_IRQn            = 111u,             /**< FTM2 Channel 0 and 1 interrupt */
	FTM2_Ch2_Ch3_IRQn            = 112u,             /**< FTM2 Channel 2 and 3 interrupt */
	FTM2_Ch4_Ch5_IRQn            = 113u,             /**< FTM2 Channel 4 and 5 interrupt */
	FTM2_Ch6_Ch7_IRQn            = 114u,             /**< FTM2 Channel 6 and 7 interrupt */
	FTM2_Fault_IRQn              = 115u,             /**< FTM2 Fault interrupt */
	FTM2_Ovf_Reload_IRQn         = 116u,             /**< FTM2 Counter overflow and Reload interrupt */
	FTM3_Ch0_Ch1_IRQn            = 117u,             /**< FTM3 Channel 0 and 1 interrupt */
	FTM3_Ch2_Ch3_IRQn            = 118u,             /**< FTM3 Channel 2 and 3 interrupt */
	FTM3_Ch4_Ch5_IRQn            = 119u,             /**< FTM3 Channel 4 and 5 interrupt */
	FTM3_Ch6_Ch7_IRQn            = 120u,             /**< FTM3 Channel 6 and 7 interrupt */
	FTM3_Fault_IRQn              = 121u,             /**< FTM3 Fault interrupt */
	FTM3_Ovf_Reload_IRQn         = 122u,             /**< FTM3 Counter overflow and Reload interrupt */

#if (defined (__Target_S32K146__) || defined (__Target_S32K148__))
	FTM4_Ch0_Ch1_IRQn            = 123u,             /**< FTM4 Channel 0 and 1 interrupt */
	FTM4_Ch2_Ch3_IRQn            = 124u,             /**< FTM4 Channel 2 and 3 interrupt */
	FTM4_Ch4_Ch5_IRQn            = 125u,             /**< FTM4 Channel 4 and 5 interrupt */
	FTM4_Ch6_Ch7_IRQn            = 126u,             /**< FTM4 Channel 6 and 7 interrupt */
	FTM4_Fault_IRQn              = 127u,             /**< FTM4 Fault interrupt */
	FTM4_Ovf_Reload_IRQn         = 128u,             /**< FTM4 Counter overflow and Reload interrupt */
	FTM5_Ch0_Ch1_IRQn            = 129u,             /**< FTM5 Channel 0 and 1 interrupt */
	FTM5_Ch2_Ch3_IRQn            = 130u,             /**< FTM5 Channel 2 and 3 interrupt */
	FTM5_Ch4_Ch5_IRQn            = 131u,             /**< FTM5 Channel 4 and 5 interrupt */
	FTM5_Ch6_Ch7_IRQn            = 132u,             /**< FTM5 Channel 6 and 7 interrupt */
	FTM5_Fault_IRQn              = 133u,             /**< FTM5 Fault interrupt */
	FTM5_Ovf_Reload_IRQn         = 134u,             /**< FTM5 Counter overflow and Reload interrupt */
#if (defined (__Target_S32K148__))
	FTM6_Ch0_Ch1_IRQn            = 135u,             /**< FTM6 Channel 0 and 1 interrupt */
	FTM6_Ch2_Ch3_IRQn            = 136u,             /**< FTM6 Channel 2 and 3 interrupt */
	FTM6_Ch4_Ch5_IRQn            = 137u,             /**< FTM6 Channel 4 and 5 interrupt */
	FTM6_Ch6_Ch7_IRQn            = 138u,             /**< FTM6 Channel 6 and 7 interrupt */
	FTM6_Fault_IRQn              = 139u,             /**< FTM6 Fault interrupt */
	FTM6_Ovf_Reload_IRQn         = 140u,             /**< FTM6 Counter overflow and Reload interrupt */
	FTM7_Ch0_Ch1_IRQn            = 141u,             /**< FTM7 Channel 0 and 1 interrupt */
	FTM7_Ch2_Ch3_IRQn            = 142u,             /**< FTM7 Channel 2 and 3 interrupt */
	FTM7_Ch4_Ch5_IRQn            = 143u,             /**< FTM7 Channel 4 and 5 interrupt */
	FTM7_Ch6_Ch7_IRQn            = 144u,             /**< FTM7 Channel 6 and 7 interrupt */
	FTM7_Fault_IRQn              = 145u,             /**< FTM7 Fault interrupt */
	FTM7_Ovf_Reload_IRQn         = 146u,             /**< FTM7 Counter overflow and Reload interrupt */
#endif

#endif

#endif

	IRQn_End,
} IRQn_Type;

#endif /* S32K1XX_IRQ_H_ */
