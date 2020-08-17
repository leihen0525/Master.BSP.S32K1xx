/*
 * S32K1xx.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_H_
#define S32K1XX_H_



#if (defined (__Target_S32K116__)		\
	|| defined (__Target_S32K118__)		\
	|| defined (__Target_S32K142__)		\
	|| defined (__Target_S32K144__)		\
	|| defined (__Target_S32K146__)		\
	|| defined (__Target_S32K148__))

#include "S32K1xx.Type.h"
#include "S32K1xx.Clock.h"
#include "S32K1xx.CAN.h"
#include "S32K1xx.ENET.h"
#include "S32K1xx.GPIO.h"
#include "S32K1xx.IRQ.h"
#include "S32K1xx.LPIT.h"
#include "S32K1xx.LPUART.h"
#include "S32K1xx.MPU.h"
#include "S32K1xx.NVIC.h"
#include "S32K1xx.PCC.h"
#include "S32K1xx.PORT.h"
#include "S32K1xx.SCB.h"
#include "S32K1xx.SCG.h"
#include "S32K1xx.WDOG.h"
#include "S32K1xx.ADC.h"
#include "S32K1xx.CRC.h"
#include "S32K1xx.FTM.h"
#include "S32K1xx.LPSPI.h"
#include "S32K1xx.LPI2C.h"
#include "S32K1xx.FlexIO.h"
#include "S32K1xx.SIM.h"
#include "S32K1xx.PDB.h"
#include "S32K1xx.DMA.h"
#include "S32K1xx.DMAMUX.h"

#else

#error "No valid Target Core defined!"

#endif




#endif /* S32K1XX_H_ */
