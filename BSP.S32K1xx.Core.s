/*
 * BSP.S32K1xx.Core.s
 *
 *  Created on: 2020年7月1日
 *      Author: Master.HE
 */
	MODULE BSP_S32K1xx_Core

	SECTION .text:CODE:NOROOT(1)


	PUBLIC BSP_Core_Init

	THUMB

BSP_Core_Init:

	IMPORT __RAM_START, __RAM_END
	;; INIT ECC RAM

	LDR R1, =__RAM_START
	LDR R2, =__RAM_END

	SUBS    R2, R2, R1
	SUBS    R2, #1
	BLE .LC5

	MOVS    R0, #0
	MOVS    R3, #4
.LC4:
	STR R0, [R1]
	ADD	R1, R1, R3
	SUBS R2, #4
	BGE .LC4
.LC5:

	BX       LR


	END
