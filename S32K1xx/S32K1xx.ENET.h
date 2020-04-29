/*
 * S32K1xx.ENET.h
 *
 *  Created on: 2020年1月14日
 *      Author: Master.HE
 */

#ifndef S32K1XX_ENET_H_
#define S32K1XX_ENET_H_

#include "S32K1xx.Type.h"

#if (defined (__Target_S32K148__))

/** ENET - Size of Registers Arrays */
#define ENET_CHANNEL_COUNT                       4u
//-------------------------------------------------------------------------------------------------
//ENET
typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:15;
		__IO uint32_t TS_TIMER				:1;

		__IO uint32_t TS_AVAIL				:1;
		__IO uint32_t WAKEUP				:1;
		__IO uint32_t PLR					:1;
		__IO uint32_t UN					:1;
		__IO uint32_t RL					:1;
		__IO uint32_t LC					:1;
		__IO uint32_t EBERR					:1;
		__IO uint32_t MII					:1;

		__IO uint32_t RXB					:1;
		__IO uint32_t RXF					:1;
		__IO uint32_t TXB					:1;
		__IO uint32_t TXF					:1;
		__IO uint32_t GRA					:1;
		__IO uint32_t BABT					:1;
		__IO uint32_t BABR					:1;
		__IO uint32_t						:1;
	}Bit;
}ENET_EIR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:15;
		__IO uint32_t TS_TIMER				:1;

		__IO uint32_t TS_AVAIL				:1;
		__IO uint32_t WAKEUP				:1;
		__IO uint32_t PLR					:1;
		__IO uint32_t UN					:1;
		__IO uint32_t RL					:1;
		__IO uint32_t LC					:1;
		__IO uint32_t EBERR					:1;
		__IO uint32_t MII					:1;

		__IO uint32_t RXB					:1;
		__IO uint32_t RXF					:1;
		__IO uint32_t TXB					:1;
		__IO uint32_t TXF					:1;
		__IO uint32_t GRA					:1;
		__IO uint32_t BABT					:1;
		__IO uint32_t BABR					:1;
		__IO uint32_t						:1;
	}Bit;
}ENET_EIMR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:24;
		__IO uint32_t RDAR					:1;
		__IO uint32_t						:7;
	}Bit;
}ENET_RDAR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:24;
		__IO uint32_t TDAR					:1;
		__IO uint32_t						:7;
	}Bit;
}ENET_TDAR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RESET					:1;
		__IO uint32_t ETHEREN				:1;
		__IO uint32_t MAGICEN				:1;
		__IO uint32_t SLEEP					:1;
		__IO uint32_t EN1588				:1;
		__IO uint32_t						:1;
		__IO uint32_t DBGEN					:1;
		__IO uint32_t						:1;

		__IO uint32_t DBSWP					:1;
		__IO uint32_t 						:23;
	}Bit;
}ENET_ECR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t DATA					:16;

		__IO uint32_t TA					:2;
		__IO uint32_t RA					:5;
		__IO uint32_t PA					:5;
		__IO uint32_t OP					:2;
		__IO uint32_t ST					:2;
	}Bit;
}ENET_MMFR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:1;
		__IO uint32_t MII_SPEED				:6;
		__IO uint32_t DIS_PRE				:1;

		__IO uint32_t HOLDTIME				:3;
		__IO uint32_t						:21;
	}Bit;
}ENET_MSCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:29;
		__IO uint32_t MIB_CLEAR				:1;
		__IO uint32_t MIB_IDLE				:1;
		__IO uint32_t MIB_DIS				:1;
	}Bit;
}ENET_MIBC_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t LOOP					:1;
		__IO uint32_t DRT					:1;
		__IO uint32_t MII_MODE				:1;
		__IO uint32_t PROM					:1;
		__IO uint32_t BC_REJ				:1;
		__IO uint32_t FCE					:1;
		__IO uint32_t						:2;

		__IO uint32_t RMII_MODE				:1;
		__IO uint32_t RMII_10T				:1;
		__IO uint32_t						:2;
		__IO uint32_t PADEN					:1;
		__IO uint32_t PAUFWD				:1;
		__IO uint32_t CRCFWD				:1;
		__IO uint32_t CFEN					:1;

		__IO uint32_t MAX_FL				:14;
		__IO uint32_t NLC					:1;
		__IO uint32_t GRS					:1;
	}Bit;
}ENET_RCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t GTS					:1;
		__IO uint32_t						:1;
		__IO uint32_t FDEN					:1;
		__IO uint32_t TFC_PAUSE				:1;
		__IO uint32_t RFC_PAUSE				:1;
		__IO uint32_t ADDSEL				:3;

		__IO uint32_t ADDINS				:1;
		__IO uint32_t CRCFWD				:1;
		__IO uint32_t						:22;
	}Bit;
}ENET_TCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PADDR3				:8;
		__IO uint32_t PADDR2				:8;
		__IO uint32_t PADDR1				:8;
		__IO uint32_t PADDR0				:8;
	}Bit;
}ENET_PALR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:16;
		__IO uint32_t PADDR5				:8;
		__IO uint32_t PADDR6				:8;
	}Bit;
}ENET_PAUR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PAUSE_DUR				:16;
		__IO uint32_t OPCODE				:16;
	}Bit;
}ENET_OPD_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t IADDR1;
	}Bit;
}ENET_IAUR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t IADDR2;
	}Bit;
}ENET_IALR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t GADDR1;
	}Bit;
}ENET_GAUR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t GADDR2;
	}Bit;
}ENET_GALR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TFWR					:6;
		__IO uint32_t						:2;

		__IO uint32_t STRFWD				:1;
		__IO uint32_t						:23;
	}Bit;
}ENET_TFWR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:3;
		__IO uint32_t R_DES_START			:29;
	}Bit;
}ENET_RDSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:3;
		__IO uint32_t X_DES_START			:29;
	}Bit;
}ENET_TDSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t						:4;
		__IO uint32_t R_BUF_SIZE			:10;
		__IO uint32_t						:18;
	}Bit;
}ENET_MRBR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RX_SECTION_FULL		:8;
		__IO uint32_t						:24;
	}Bit;
}ENET_RSFL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RX_SECTION_EMPTY		:8;
		__IO uint32_t						:8;
		__IO uint32_t STAT_SECTION_EMPTY	:5;
		__IO uint32_t						:11;
	}Bit;
}ENET_RSEM_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RX_ALMOST_EMPTY		:8;
		__IO uint32_t						:24;
	}Bit;
}ENET_RAEM_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t RX_ALMOST_FULL		:8;
		__IO uint32_t						:24;
	}Bit;
}ENET_RAFL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TX_SECTION_EMPTY		:8;
		__IO uint32_t						:24;
	}Bit;
}ENET_TSEM_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TX_ALMOST_EMPTY		:8;
		__IO uint32_t						:24;
	}Bit;
}ENET_TAEM_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TX_ALMOST_FULL		:8;
		__IO uint32_t						:24;
	}Bit;
}ENET_TAFL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t IPG					:5;
		__IO uint32_t						:27;
	}Bit;
}ENET_TIPG_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TRUNC_FL				:14;
		__IO uint32_t						:18;
	}Bit;
}ENET_FTRL_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t SHIFT16				:1;
		__IO uint32_t						:2;
		__IO uint32_t IPCHK					:1;
		__IO uint32_t PROCHK				:1;
		__IO uint32_t						:27;
	}Bit;
}ENET_TACC_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PADREM				:1;
		__IO uint32_t IPDIS					:1;
		__IO uint32_t PRODIS				:1;
		__IO uint32_t						:3;
		__IO uint32_t LINEDIS				:1;
		__IO uint32_t SHIFT16				:1;

		__IO uint32_t						:24;
	}Bit;
}ENET_RACC_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t TXPKTS				:16;
		__I  uint32_t						:16;
	}Bit;
}ENET_RMON_T_PACKETS_Type;

//.....


typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t EN					:1;
		__IO uint32_t						:1;
		__IO uint32_t OFFEN					:1;
		__IO uint32_t OFFRST				:1;
		__IO uint32_t PEREN					:1;
		__IO uint32_t						:2;
		__IO uint32_t PINPER				:1;

		__IO uint32_t						:1;
		__IO uint32_t RESTART				:1;
		__IO uint32_t						:1;
		__IO uint32_t CAPTURE				:1;
		__IO uint32_t						:1;
		__IO uint32_t SLAVE					:1;
		__IO uint32_t						:18;
	}Bit;
}ENET_ATCR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t ATIME;
	}Bit;
}ENET_ATVR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t OFFSET;
	}Bit;
}ENET_ATOFF_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t PERIOD;
	}Bit;
}ENET_ATPER_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t COR					:31;
		__IO uint32_t						:1;
	}Bit;
}ENET_ATCOR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t INC					:7;
		__IO uint32_t						:1;

		__IO uint32_t INC_CORR				:7;
		__IO uint32_t						:17;
	}Bit;
}ENET_ATINC_Type;

typedef union
{
	__I  uint32_t DATA;
	struct
	{
		__I  uint32_t TIMESTAMP;
	}Bit;
}ENET_ATSTMP_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TF0					:1;
		__IO uint32_t TF1					:1;
		__IO uint32_t TF2					:1;
		__IO uint32_t TF3					:1;
		__IO uint32_t						:28;
	}Bit;
}ENET_TGSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TDRE					:1;
		__IO uint32_t						:1;
		__IO uint32_t TMODE					:4;
		__IO uint32_t TIE					:1;
		__IO uint32_t TF					:1;
		__IO uint32_t						:24;
	}Bit;
}ENET_TCSR_Type;

typedef union
{
	__IO uint32_t DATA;
	struct
	{
		__IO uint32_t TCC;
	}Bit;
}ENET_TCCR_Type;
//-------------------------------------------------------------------------------------------------
typedef struct
{
	__I  uint8_t RESERVED_0[4];
	ENET_EIR_Type EIR;                               /**< Interrupt Event Register, offset: 0x4 */
	ENET_EIMR_Type EIMR;                              /**< Interrupt Mask Register, offset: 0x8 */
	__I  uint8_t RESERVED_1[4];
	ENET_RDAR_Type RDAR;                              /**< Receive Descriptor Active Register, offset: 0x10 */
	ENET_TDAR_Type TDAR;                              /**< Transmit Descriptor Active Register, offset: 0x14 */
	__I  uint8_t RESERVED_2[12];
	ENET_ECR_Type ECR;                               /**< Ethernet Control Register, offset: 0x24 */
	__I  uint8_t RESERVED_3[24];
	ENET_MMFR_Type MMFR;                              /**< MII Management Frame Register, offset: 0x40 */
	ENET_MSCR_Type MSCR;                              /**< MII Speed Control Register, offset: 0x44 */
	__I  uint8_t RESERVED_4[28];
	ENET_MIBC_Type MIBC;                              /**< MIB Control Register, offset: 0x64 */
	__I  uint8_t RESERVED_5[28];
	ENET_RCR_Type RCR;                               /**< Receive Control Register, offset: 0x84 */
	__I  uint8_t RESERVED_6[60];
	ENET_TCR_Type TCR;                               /**< Transmit Control Register, offset: 0xC4 */
	__I  uint8_t RESERVED_7[28];
	ENET_PALR_Type PALR;                              /**< Physical Address Lower Register, offset: 0xE4 */
	ENET_PAUR_Type PAUR;                              /**< Physical Address Upper Register, offset: 0xE8 */
	ENET_OPD_Type OPD;                               /**< Opcode/Pause Duration Register, offset: 0xEC */
	__I  uint8_t RESERVED_8[40];
	ENET_IAUR_Type IAUR;                              /**< Descriptor Individual Upper Address Register, offset: 0x118 */
	ENET_IALR_Type IALR;                              /**< Descriptor Individual Lower Address Register, offset: 0x11C */
	ENET_GAUR_Type GAUR;                              /**< Descriptor Group Upper Address Register, offset: 0x120 */
	ENET_GALR_Type GALR;                              /**< Descriptor Group Lower Address Register, offset: 0x124 */
	__I  uint8_t RESERVED_9[28];
	ENET_TFWR_Type TFWR;                              /**< Transmit FIFO Watermark Register, offset: 0x144 */
	__I  uint8_t RESERVED_10[56];
	ENET_RDSR_Type RDSR;                              /**< Receive Descriptor Ring Start Register, offset: 0x180 */
	ENET_TDSR_Type TDSR;                              /**< Transmit Buffer Descriptor Ring Start Register, offset: 0x184 */
	ENET_MRBR_Type MRBR;                              /**< Maximum Receive Buffer Size Register, offset: 0x188 */
	__I  uint8_t RESERVED_11[4];
	ENET_RSFL_Type RSFL;                              /**< Receive FIFO Section Full Threshold, offset: 0x190 */
	ENET_RSEM_Type RSEM;                              /**< Receive FIFO Section Empty Threshold, offset: 0x194 */
	ENET_RAEM_Type RAEM;                              /**< Receive FIFO Almost Empty Threshold, offset: 0x198 */
	ENET_RAFL_Type RAFL;                              /**< Receive FIFO Almost Full Threshold, offset: 0x19C */
	ENET_TSEM_Type TSEM;                              /**< Transmit FIFO Section Empty Threshold, offset: 0x1A0 */
	ENET_TAEM_Type TAEM;                              /**< Transmit FIFO Almost Empty Threshold, offset: 0x1A4 */
	ENET_TAFL_Type TAFL;                              /**< Transmit FIFO Almost Full Threshold, offset: 0x1A8 */
	ENET_TIPG_Type TIPG;                              /**< Transmit Inter-Packet Gap, offset: 0x1AC */
	ENET_FTRL_Type FTRL;                              /**< Frame Truncation Length, offset: 0x1B0 */
	__I  uint8_t RESERVED_12[12];
	ENET_TACC_Type TACC;                              /**< Transmit Accelerator Function Configuration, offset: 0x1C0 */
	ENET_RACC_Type RACC;                              /**< Receive Accelerator Function Configuration, offset: 0x1C4 */
	__I  uint8_t RESERVED_13[56];
	__I  uint32_t RMON_T_DROP;                       /**< Reserved Statistic Register, offset: 0x200 */
	ENET_RMON_T_PACKETS_Type RMON_T_PACKETS;                    /**< Tx Packet Count Statistic Register, offset: 0x204 */
	__I  uint32_t RMON_T_BC_PKT;                     /**< Tx Broadcast Packets Statistic Register, offset: 0x208 */
	__I  uint32_t RMON_T_MC_PKT;                     /**< Tx Multicast Packets Statistic Register, offset: 0x20C */
	__I  uint32_t RMON_T_CRC_ALIGN;                  /**< Tx Packets with CRC/Align Error Statistic Register, offset: 0x210 */
	__I  uint32_t RMON_T_UNDERSIZE;                  /**< Tx Packets Less Than Bytes and Good CRC Statistic Register, offset: 0x214 */
	__I  uint32_t RMON_T_OVERSIZE;                   /**< Tx Packets GT MAX_FL bytes and Good CRC Statistic Register, offset: 0x218 */
	__I  uint32_t RMON_T_FRAG;                       /**< Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register, offset: 0x21C */
	__I  uint32_t RMON_T_JAB;                        /**< Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register, offset: 0x220 */
	__I  uint32_t RMON_T_COL;                        /**< Tx Collision Count Statistic Register, offset: 0x224 */
	__I  uint32_t RMON_T_P64;                        /**< Tx 64-Byte Packets Statistic Register, offset: 0x228 */
	__I  uint32_t RMON_T_P65TO127;                   /**< Tx 65- to 127-byte Packets Statistic Register, offset: 0x22C */
	__I  uint32_t RMON_T_P128TO255;                  /**< Tx 128- to 255-byte Packets Statistic Register, offset: 0x230 */
	__I  uint32_t RMON_T_P256TO511;                  /**< Tx 256- to 511-byte Packets Statistic Register, offset: 0x234 */
	__I  uint32_t RMON_T_P512TO1023;                 /**< Tx 512- to 1023-byte Packets Statistic Register, offset: 0x238 */
	__I  uint32_t RMON_T_P1024TO2047;                /**< Tx 1024- to 2047-byte Packets Statistic Register, offset: 0x23C */
	__I  uint32_t RMON_T_P_GTE2048;                  /**< Tx Packets Greater Than 2048 Bytes Statistic Register, offset: 0x240 */
	__I  uint32_t RMON_T_OCTETS;                     /**< Tx Octets Statistic Register, offset: 0x244 */
	__I  uint32_t IEEE_T_DROP;                       /**< Reserved Statistic Register, offset: 0x248 */
	__I  uint32_t IEEE_T_FRAME_OK;                   /**< Frames Transmitted OK Statistic Register, offset: 0x24C */
	__I  uint32_t IEEE_T_1COL;                       /**< Frames Transmitted with Single Collision Statistic Register, offset: 0x250 */
	__I  uint32_t IEEE_T_MCOL;                       /**< Frames Transmitted with Multiple Collisions Statistic Register, offset: 0x254 */
	__I  uint32_t IEEE_T_DEF;                        /**< Frames Transmitted after Deferral Delay Statistic Register, offset: 0x258 */
	__I  uint32_t IEEE_T_LCOL;                       /**< Frames Transmitted with Late Collision Statistic Register, offset: 0x25C */
	__I  uint32_t IEEE_T_EXCOL;                      /**< Frames Transmitted with Excessive Collisions Statistic Register, offset: 0x260 */
	__I  uint32_t IEEE_T_MACERR;                     /**< Frames Transmitted with Tx FIFO Underrun Statistic Register, offset: 0x264 */
	__I  uint32_t IEEE_T_CSERR;                      /**< Frames Transmitted with Carrier Sense Error Statistic Register, offset: 0x268 */
	__I  uint32_t IEEE_T_SQE;                        /**< Reserved Statistic Register, offset: 0x26C */
	__I  uint32_t IEEE_T_FDXFC;                      /**< Flow Control Pause Frames Transmitted Statistic Register, offset: 0x270 */
	__I  uint32_t IEEE_T_OCTETS_OK;                  /**< Octet Count for Frames Transmitted w/o Error Statistic Register, offset: 0x274 */
	__I  uint8_t RESERVED_14[12];
	__I  uint32_t RMON_R_PACKETS;                    /**< Rx Packet Count Statistic Register, offset: 0x284 */
	__I  uint32_t RMON_R_BC_PKT;                     /**< Rx Broadcast Packets Statistic Register, offset: 0x288 */
	__I  uint32_t RMON_R_MC_PKT;                     /**< Rx Multicast Packets Statistic Register, offset: 0x28C */
	__I  uint32_t RMON_R_CRC_ALIGN;                  /**< Rx Packets with CRC/Align Error Statistic Register, offset: 0x290 */
	__I  uint32_t RMON_R_UNDERSIZE;                  /**< Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register, offset: 0x294 */
	__I  uint32_t RMON_R_OVERSIZE;                   /**< Rx Packets Greater Than MAX_FL and Good CRC Statistic Register, offset: 0x298 */
	__I  uint32_t RMON_R_FRAG;                       /**< Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register, offset: 0x29C */
	__I  uint32_t RMON_R_JAB;                        /**< Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register, offset: 0x2A0 */
	__I  uint32_t RMON_R_RESVD_0;                    /**< Reserved Statistic Register, offset: 0x2A4 */
	__I  uint32_t RMON_R_P64;                        /**< Rx 64-Byte Packets Statistic Register, offset: 0x2A8 */
	__I  uint32_t RMON_R_P65TO127;                   /**< Rx 65- to 127-Byte Packets Statistic Register, offset: 0x2AC */
	__I  uint32_t RMON_R_P128TO255;                  /**< Rx 128- to 255-Byte Packets Statistic Register, offset: 0x2B0 */
	__I  uint32_t RMON_R_P256TO511;                  /**< Rx 256- to 511-Byte Packets Statistic Register, offset: 0x2B4 */
	__I  uint32_t RMON_R_P512TO1023;                 /**< Rx 512- to 1023-Byte Packets Statistic Register, offset: 0x2B8 */
	__I  uint32_t RMON_R_P1024TO2047;                /**< Rx 1024- to 2047-Byte Packets Statistic Register, offset: 0x2BC */
	__I  uint32_t RMON_R_P_GTE2048;                  /**< Rx Packets Greater than 2048 Bytes Statistic Register, offset: 0x2C0 */
	__I  uint32_t RMON_R_OCTETS;                     /**< Rx Octets Statistic Register, offset: 0x2C4 */
	__I  uint32_t IEEE_R_DROP;                       /**< Frames not Counted Correctly Statistic Register, offset: 0x2C8 */
	__I  uint32_t IEEE_R_FRAME_OK;                   /**< Frames Received OK Statistic Register, offset: 0x2CC */
	__I  uint32_t IEEE_R_CRC;                        /**< Frames Received with CRC Error Statistic Register, offset: 0x2D0 */
	__I  uint32_t IEEE_R_ALIGN;                      /**< Frames Received with Alignment Error Statistic Register, offset: 0x2D4 */
	__I  uint32_t IEEE_R_MACERR;                     /**< Receive FIFO Overflow Count Statistic Register, offset: 0x2D8 */
	__I  uint32_t IEEE_R_FDXFC;                      /**< Flow Control Pause Frames Received Statistic Register, offset: 0x2DC */
	__I  uint32_t IEEE_R_OCTETS_OK;                  /**< Octet Count for Frames Received without Error Statistic Register, offset: 0x2E0 */
	__I  uint8_t RESERVED_15[284];
	ENET_ATCR_Type ATCR;                              /**< Adjustable Timer Control Register, offset: 0x400 */
	ENET_ATVR_Type ATVR;                              /**< Timer Value Register, offset: 0x404 */
	ENET_ATOFF_Type ATOFF;                             /**< Timer Offset Register, offset: 0x408 */
	ENET_ATPER_Type ATPER;                             /**< Timer Period Register, offset: 0x40C */
	ENET_ATCOR_Type ATCOR;                             /**< Timer Correction Register, offset: 0x410 */
	ENET_ATINC_Type ATINC;                             /**< Time-Stamping Clock Period Register, offset: 0x414 */
	ENET_ATSTMP_Type ATSTMP;                            /**< Timestamp of Last Transmitted Frame, offset: 0x418 */
	__I  uint8_t RESERVED_16[488];
	ENET_TGSR_Type TGSR;                              /**< Timer Global Status Register, offset: 0x604 */
	struct                                          /* offset: 0x608, array step: 0x8 */
	{
		ENET_TCSR_Type TCSR;                          /**< Timer Control Status Register, array offset: 0x608, array step: 0x8 */
		ENET_TCCR_Type TCCR;                          /**< Timer Compare Capture Register, array offset: 0x60C, array step: 0x8 */
	} CHANNEL[ENET_CHANNEL_COUNT];
}ENET_Type;
//-------------------------------------------------------------------------------------------------






/* ----------------------------------------------------------------------------
   -- ENET Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ENET_Peripheral_Access_Layer ENET Peripheral Access Layer
 * @{
 */




/** ENET - Register Layout Typedef */
//typedef struct {
//       uint8_t RESERVED_0[4];
//  __IO uint32_t EIR;                               /**< Interrupt Event Register, offset: 0x4 */
//  __IO uint32_t EIMR;                              /**< Interrupt Mask Register, offset: 0x8 */
//       uint8_t RESERVED_1[4];
//  __IO uint32_t RDAR;                              /**< Receive Descriptor Active Register, offset: 0x10 */
//  __IO uint32_t TDAR;                              /**< Transmit Descriptor Active Register, offset: 0x14 */
//       uint8_t RESERVED_2[12];
//  __IO uint32_t ECR;                               /**< Ethernet Control Register, offset: 0x24 */
//       uint8_t RESERVED_3[24];
//  __IO uint32_t MMFR;                              /**< MII Management Frame Register, offset: 0x40 */
//  __IO uint32_t MSCR;                              /**< MII Speed Control Register, offset: 0x44 */
//       uint8_t RESERVED_4[28];
//  __IO uint32_t MIBC;                              /**< MIB Control Register, offset: 0x64 */
//       uint8_t RESERVED_5[28];
//  __IO uint32_t RCR;                               /**< Receive Control Register, offset: 0x84 */
//       uint8_t RESERVED_6[60];
//  __IO uint32_t TCR;                               /**< Transmit Control Register, offset: 0xC4 */
//       uint8_t RESERVED_7[28];
//  __IO uint32_t PALR;                              /**< Physical Address Lower Register, offset: 0xE4 */
//  __IO uint32_t PAUR;                              /**< Physical Address Upper Register, offset: 0xE8 */
//  __IO uint32_t OPD;                               /**< Opcode/Pause Duration Register, offset: 0xEC */
//       uint8_t RESERVED_8[40];
//  __IO uint32_t IAUR;                              /**< Descriptor Individual Upper Address Register, offset: 0x118 */
//  __IO uint32_t IALR;                              /**< Descriptor Individual Lower Address Register, offset: 0x11C */
//  __IO uint32_t GAUR;                              /**< Descriptor Group Upper Address Register, offset: 0x120 */
//  __IO uint32_t GALR;                              /**< Descriptor Group Lower Address Register, offset: 0x124 */
//       uint8_t RESERVED_9[28];
//  __IO uint32_t TFWR;                              /**< Transmit FIFO Watermark Register, offset: 0x144 */
//       uint8_t RESERVED_10[56];
//  __IO uint32_t RDSR;                              /**< Receive Descriptor Ring Start Register, offset: 0x180 */
//  __IO uint32_t TDSR;                              /**< Transmit Buffer Descriptor Ring Start Register, offset: 0x184 */
//  __IO uint32_t MRBR;                              /**< Maximum Receive Buffer Size Register, offset: 0x188 */
//       uint8_t RESERVED_11[4];
//  __IO uint32_t RSFL;                              /**< Receive FIFO Section Full Threshold, offset: 0x190 */
//  __IO uint32_t RSEM;                              /**< Receive FIFO Section Empty Threshold, offset: 0x194 */
//  __IO uint32_t RAEM;                              /**< Receive FIFO Almost Empty Threshold, offset: 0x198 */
//  __IO uint32_t RAFL;                              /**< Receive FIFO Almost Full Threshold, offset: 0x19C */
//  __IO uint32_t TSEM;                              /**< Transmit FIFO Section Empty Threshold, offset: 0x1A0 */
//  __IO uint32_t TAEM;                              /**< Transmit FIFO Almost Empty Threshold, offset: 0x1A4 */
//  __IO uint32_t TAFL;                              /**< Transmit FIFO Almost Full Threshold, offset: 0x1A8 */
//  __IO uint32_t TIPG;                              /**< Transmit Inter-Packet Gap, offset: 0x1AC */
//  __IO uint32_t FTRL;                              /**< Frame Truncation Length, offset: 0x1B0 */
//       uint8_t RESERVED_12[12];
//  __IO uint32_t TACC;                              /**< Transmit Accelerator Function Configuration, offset: 0x1C0 */
//  __IO uint32_t RACC;                              /**< Receive Accelerator Function Configuration, offset: 0x1C4 */
//       uint8_t RESERVED_13[56];
//  __I  uint32_t RMON_T_DROP;                       /**< Reserved Statistic Register, offset: 0x200 */
//  __I  uint32_t RMON_T_PACKETS;                    /**< Tx Packet Count Statistic Register, offset: 0x204 */
//  __I  uint32_t RMON_T_BC_PKT;                     /**< Tx Broadcast Packets Statistic Register, offset: 0x208 */
//  __I  uint32_t RMON_T_MC_PKT;                     /**< Tx Multicast Packets Statistic Register, offset: 0x20C */
//  __I  uint32_t RMON_T_CRC_ALIGN;                  /**< Tx Packets with CRC/Align Error Statistic Register, offset: 0x210 */
//  __I  uint32_t RMON_T_UNDERSIZE;                  /**< Tx Packets Less Than Bytes and Good CRC Statistic Register, offset: 0x214 */
//  __I  uint32_t RMON_T_OVERSIZE;                   /**< Tx Packets GT MAX_FL bytes and Good CRC Statistic Register, offset: 0x218 */
//  __I  uint32_t RMON_T_FRAG;                       /**< Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register, offset: 0x21C */
//  __I  uint32_t RMON_T_JAB;                        /**< Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register, offset: 0x220 */
//  __I  uint32_t RMON_T_COL;                        /**< Tx Collision Count Statistic Register, offset: 0x224 */
//  __I  uint32_t RMON_T_P64;                        /**< Tx 64-Byte Packets Statistic Register, offset: 0x228 */
//  __I  uint32_t RMON_T_P65TO127;                   /**< Tx 65- to 127-byte Packets Statistic Register, offset: 0x22C */
//  __I  uint32_t RMON_T_P128TO255;                  /**< Tx 128- to 255-byte Packets Statistic Register, offset: 0x230 */
//  __I  uint32_t RMON_T_P256TO511;                  /**< Tx 256- to 511-byte Packets Statistic Register, offset: 0x234 */
//  __I  uint32_t RMON_T_P512TO1023;                 /**< Tx 512- to 1023-byte Packets Statistic Register, offset: 0x238 */
//  __I  uint32_t RMON_T_P1024TO2047;                /**< Tx 1024- to 2047-byte Packets Statistic Register, offset: 0x23C */
//  __I  uint32_t RMON_T_P_GTE2048;                  /**< Tx Packets Greater Than 2048 Bytes Statistic Register, offset: 0x240 */
//  __I  uint32_t RMON_T_OCTETS;                     /**< Tx Octets Statistic Register, offset: 0x244 */
//  __I  uint32_t IEEE_T_DROP;                       /**< Reserved Statistic Register, offset: 0x248 */
//  __I  uint32_t IEEE_T_FRAME_OK;                   /**< Frames Transmitted OK Statistic Register, offset: 0x24C */
//  __I  uint32_t IEEE_T_1COL;                       /**< Frames Transmitted with Single Collision Statistic Register, offset: 0x250 */
//  __I  uint32_t IEEE_T_MCOL;                       /**< Frames Transmitted with Multiple Collisions Statistic Register, offset: 0x254 */
//  __I  uint32_t IEEE_T_DEF;                        /**< Frames Transmitted after Deferral Delay Statistic Register, offset: 0x258 */
//  __I  uint32_t IEEE_T_LCOL;                       /**< Frames Transmitted with Late Collision Statistic Register, offset: 0x25C */
//  __I  uint32_t IEEE_T_EXCOL;                      /**< Frames Transmitted with Excessive Collisions Statistic Register, offset: 0x260 */
//  __I  uint32_t IEEE_T_MACERR;                     /**< Frames Transmitted with Tx FIFO Underrun Statistic Register, offset: 0x264 */
//  __I  uint32_t IEEE_T_CSERR;                      /**< Frames Transmitted with Carrier Sense Error Statistic Register, offset: 0x268 */
//  __I  uint32_t IEEE_T_SQE;                        /**< Reserved Statistic Register, offset: 0x26C */
//  __I  uint32_t IEEE_T_FDXFC;                      /**< Flow Control Pause Frames Transmitted Statistic Register, offset: 0x270 */
//  __I  uint32_t IEEE_T_OCTETS_OK;                  /**< Octet Count for Frames Transmitted w/o Error Statistic Register, offset: 0x274 */
//       uint8_t RESERVED_14[12];
//  __I  uint32_t RMON_R_PACKETS;                    /**< Rx Packet Count Statistic Register, offset: 0x284 */
//  __I  uint32_t RMON_R_BC_PKT;                     /**< Rx Broadcast Packets Statistic Register, offset: 0x288 */
//  __I  uint32_t RMON_R_MC_PKT;                     /**< Rx Multicast Packets Statistic Register, offset: 0x28C */
//  __I  uint32_t RMON_R_CRC_ALIGN;                  /**< Rx Packets with CRC/Align Error Statistic Register, offset: 0x290 */
//  __I  uint32_t RMON_R_UNDERSIZE;                  /**< Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register, offset: 0x294 */
//  __I  uint32_t RMON_R_OVERSIZE;                   /**< Rx Packets Greater Than MAX_FL and Good CRC Statistic Register, offset: 0x298 */
//  __I  uint32_t RMON_R_FRAG;                       /**< Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register, offset: 0x29C */
//  __I  uint32_t RMON_R_JAB;                        /**< Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register, offset: 0x2A0 */
//  __I  uint32_t RMON_R_RESVD_0;                    /**< Reserved Statistic Register, offset: 0x2A4 */
//  __I  uint32_t RMON_R_P64;                        /**< Rx 64-Byte Packets Statistic Register, offset: 0x2A8 */
//  __I  uint32_t RMON_R_P65TO127;                   /**< Rx 65- to 127-Byte Packets Statistic Register, offset: 0x2AC */
//  __I  uint32_t RMON_R_P128TO255;                  /**< Rx 128- to 255-Byte Packets Statistic Register, offset: 0x2B0 */
//  __I  uint32_t RMON_R_P256TO511;                  /**< Rx 256- to 511-Byte Packets Statistic Register, offset: 0x2B4 */
//  __I  uint32_t RMON_R_P512TO1023;                 /**< Rx 512- to 1023-Byte Packets Statistic Register, offset: 0x2B8 */
//  __I  uint32_t RMON_R_P1024TO2047;                /**< Rx 1024- to 2047-Byte Packets Statistic Register, offset: 0x2BC */
//  __I  uint32_t RMON_R_P_GTE2048;                  /**< Rx Packets Greater than 2048 Bytes Statistic Register, offset: 0x2C0 */
//  __I  uint32_t RMON_R_OCTETS;                     /**< Rx Octets Statistic Register, offset: 0x2C4 */
//  __I  uint32_t IEEE_R_DROP;                       /**< Frames not Counted Correctly Statistic Register, offset: 0x2C8 */
//  __I  uint32_t IEEE_R_FRAME_OK;                   /**< Frames Received OK Statistic Register, offset: 0x2CC */
//  __I  uint32_t IEEE_R_CRC;                        /**< Frames Received with CRC Error Statistic Register, offset: 0x2D0 */
//  __I  uint32_t IEEE_R_ALIGN;                      /**< Frames Received with Alignment Error Statistic Register, offset: 0x2D4 */
//  __I  uint32_t IEEE_R_MACERR;                     /**< Receive FIFO Overflow Count Statistic Register, offset: 0x2D8 */
//  __I  uint32_t IEEE_R_FDXFC;                      /**< Flow Control Pause Frames Received Statistic Register, offset: 0x2DC */
//  __I  uint32_t IEEE_R_OCTETS_OK;                  /**< Octet Count for Frames Received without Error Statistic Register, offset: 0x2E0 */
//       uint8_t RESERVED_15[284];
//  __IO uint32_t ATCR;                              /**< Adjustable Timer Control Register, offset: 0x400 */
//  __IO uint32_t ATVR;                              /**< Timer Value Register, offset: 0x404 */
//  __IO uint32_t ATOFF;                             /**< Timer Offset Register, offset: 0x408 */
//  __IO uint32_t ATPER;                             /**< Timer Period Register, offset: 0x40C */
//  __IO uint32_t ATCOR;                             /**< Timer Correction Register, offset: 0x410 */
//  __IO uint32_t ATINC;                             /**< Time-Stamping Clock Period Register, offset: 0x414 */
//  __I  uint32_t ATSTMP;                            /**< Timestamp of Last Transmitted Frame, offset: 0x418 */
//       uint8_t RESERVED_16[488];
//  __IO uint32_t TGSR;                              /**< Timer Global Status Register, offset: 0x604 */
//  struct {                                         /* offset: 0x608, array step: 0x8 */
//    __IO uint32_t TCSR;                              /**< Timer Control Status Register, array offset: 0x608, array step: 0x8 */
//    __IO uint32_t TCCR;                              /**< Timer Compare Capture Register, array offset: 0x60C, array step: 0x8 */
//  } CHANNEL[ENET_CHANNEL_COUNT];
//} ENET_Type, *ENET_MemMapPtr;

 /** Number of instances of the ENET module. */
#define ENET_INSTANCE_COUNT                      (1u)


/* ENET - Peripheral instance base addresses */
/** Peripheral ENET base address */
#define ENET_BASE                                (0x40079000u)
/** Peripheral ENET base pointer */
#define ENET                                     ((ENET_Type *)ENET_BASE)
/** Array initializer of ENET peripheral base addresses */
#define ENET_BASE_ADDRS                          { ENET_BASE }
/** Array initializer of ENET peripheral base pointers */
#define ENET_BASE_PTRS                           { ENET }
 /** Number of interrupt vector arrays for the ENET module. */
#define ENET_IRQS_ARR_COUNT                      (6u)
 /** Number of interrupt channels for the TIMER type of ENET module. */
#define ENET_TIMER_IRQS_CH_COUNT                 (1u)
 /** Number of interrupt channels for the TX type of ENET module. */
#define ENET_TX_IRQS_CH_COUNT                    (1u)
 /** Number of interrupt channels for the RX type of ENET module. */
#define ENET_RX_IRQS_CH_COUNT                    (1u)
 /** Number of interrupt channels for the ERR type of ENET module. */
#define ENET_ERR_IRQS_CH_COUNT                   (1u)
 /** Number of interrupt channels for the STOP type of ENET module. */
#define ENET_STOP_IRQS_CH_COUNT                  (1u)
 /** Number of interrupt channels for the WAKE type of ENET module. */
#define ENET_WAKE_IRQS_CH_COUNT                  (1u)
/** Interrupt vectors for the ENET peripheral type */
#define ENET_TIMER_IRQS                          { ENET_TIMER_IRQn }
#define ENET_TX_IRQS                             { ENET_TX_IRQn }
#define ENET_RX_IRQS                             { ENET_RX_IRQn }
#define ENET_ERR_IRQS                            { ENET_ERR_IRQn }
#define ENET_STOP_IRQS                           { ENET_STOP_IRQn }
#define ENET_WAKE_IRQS                           { ENET_WAKE_IRQn }

/* ----------------------------------------------------------------------------
   -- ENET Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ENET_Register_Masks ENET Register Masks
 * @{
 */

/* EIR Bit Fields */
#define ENET_EIR_TS_TIMER_MASK                   0x8000u
#define ENET_EIR_TS_TIMER_SHIFT                  15u
#define ENET_EIR_TS_TIMER_WIDTH                  1u
#define ENET_EIR_TS_TIMER(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_EIR_TS_TIMER_SHIFT))&ENET_EIR_TS_TIMER_MASK)
#define ENET_EIR_TS_AVAIL_MASK                   0x10000u
#define ENET_EIR_TS_AVAIL_SHIFT                  16u
#define ENET_EIR_TS_AVAIL_WIDTH                  1u
#define ENET_EIR_TS_AVAIL(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_EIR_TS_AVAIL_SHIFT))&ENET_EIR_TS_AVAIL_MASK)
#define ENET_EIR_WAKEUP_MASK                     0x20000u
#define ENET_EIR_WAKEUP_SHIFT                    17u
#define ENET_EIR_WAKEUP_WIDTH                    1u
#define ENET_EIR_WAKEUP(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_EIR_WAKEUP_SHIFT))&ENET_EIR_WAKEUP_MASK)
#define ENET_EIR_PLR_MASK                        0x40000u
#define ENET_EIR_PLR_SHIFT                       18u
#define ENET_EIR_PLR_WIDTH                       1u
#define ENET_EIR_PLR(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_PLR_SHIFT))&ENET_EIR_PLR_MASK)
#define ENET_EIR_UN_MASK                         0x80000u
#define ENET_EIR_UN_SHIFT                        19u
#define ENET_EIR_UN_WIDTH                        1u
#define ENET_EIR_UN(x)                           (((uint32_t)(((uint32_t)(x))<<ENET_EIR_UN_SHIFT))&ENET_EIR_UN_MASK)
#define ENET_EIR_RL_MASK                         0x100000u
#define ENET_EIR_RL_SHIFT                        20u
#define ENET_EIR_RL_WIDTH                        1u
#define ENET_EIR_RL(x)                           (((uint32_t)(((uint32_t)(x))<<ENET_EIR_RL_SHIFT))&ENET_EIR_RL_MASK)
#define ENET_EIR_LC_MASK                         0x200000u
#define ENET_EIR_LC_SHIFT                        21u
#define ENET_EIR_LC_WIDTH                        1u
#define ENET_EIR_LC(x)                           (((uint32_t)(((uint32_t)(x))<<ENET_EIR_LC_SHIFT))&ENET_EIR_LC_MASK)
#define ENET_EIR_EBERR_MASK                      0x400000u
#define ENET_EIR_EBERR_SHIFT                     22u
#define ENET_EIR_EBERR_WIDTH                     1u
#define ENET_EIR_EBERR(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_EIR_EBERR_SHIFT))&ENET_EIR_EBERR_MASK)
#define ENET_EIR_MII_MASK                        0x800000u
#define ENET_EIR_MII_SHIFT                       23u
#define ENET_EIR_MII_WIDTH                       1u
#define ENET_EIR_MII(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_MII_SHIFT))&ENET_EIR_MII_MASK)
#define ENET_EIR_RXB_MASK                        0x1000000u
#define ENET_EIR_RXB_SHIFT                       24u
#define ENET_EIR_RXB_WIDTH                       1u
#define ENET_EIR_RXB(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_RXB_SHIFT))&ENET_EIR_RXB_MASK)
#define ENET_EIR_RXF_MASK                        0x2000000u
#define ENET_EIR_RXF_SHIFT                       25u
#define ENET_EIR_RXF_WIDTH                       1u
#define ENET_EIR_RXF(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_RXF_SHIFT))&ENET_EIR_RXF_MASK)
#define ENET_EIR_TXB_MASK                        0x4000000u
#define ENET_EIR_TXB_SHIFT                       26u
#define ENET_EIR_TXB_WIDTH                       1u
#define ENET_EIR_TXB(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_TXB_SHIFT))&ENET_EIR_TXB_MASK)
#define ENET_EIR_TXF_MASK                        0x8000000u
#define ENET_EIR_TXF_SHIFT                       27u
#define ENET_EIR_TXF_WIDTH                       1u
#define ENET_EIR_TXF(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_TXF_SHIFT))&ENET_EIR_TXF_MASK)
#define ENET_EIR_GRA_MASK                        0x10000000u
#define ENET_EIR_GRA_SHIFT                       28u
#define ENET_EIR_GRA_WIDTH                       1u
#define ENET_EIR_GRA(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIR_GRA_SHIFT))&ENET_EIR_GRA_MASK)
#define ENET_EIR_BABT_MASK                       0x20000000u
#define ENET_EIR_BABT_SHIFT                      29u
#define ENET_EIR_BABT_WIDTH                      1u
#define ENET_EIR_BABT(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIR_BABT_SHIFT))&ENET_EIR_BABT_MASK)
#define ENET_EIR_BABR_MASK                       0x40000000u
#define ENET_EIR_BABR_SHIFT                      30u
#define ENET_EIR_BABR_WIDTH                      1u
#define ENET_EIR_BABR(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIR_BABR_SHIFT))&ENET_EIR_BABR_MASK)
/* EIMR Bit Fields */
#define ENET_EIMR_TS_TIMER_MASK                  0x8000u
#define ENET_EIMR_TS_TIMER_SHIFT                 15u
#define ENET_EIMR_TS_TIMER_WIDTH                 1u
#define ENET_EIMR_TS_TIMER(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_TS_TIMER_SHIFT))&ENET_EIMR_TS_TIMER_MASK)
#define ENET_EIMR_TS_AVAIL_MASK                  0x10000u
#define ENET_EIMR_TS_AVAIL_SHIFT                 16u
#define ENET_EIMR_TS_AVAIL_WIDTH                 1u
#define ENET_EIMR_TS_AVAIL(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_TS_AVAIL_SHIFT))&ENET_EIMR_TS_AVAIL_MASK)
#define ENET_EIMR_WAKEUP_MASK                    0x20000u
#define ENET_EIMR_WAKEUP_SHIFT                   17u
#define ENET_EIMR_WAKEUP_WIDTH                   1u
#define ENET_EIMR_WAKEUP(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_WAKEUP_SHIFT))&ENET_EIMR_WAKEUP_MASK)
#define ENET_EIMR_PLR_MASK                       0x40000u
#define ENET_EIMR_PLR_SHIFT                      18u
#define ENET_EIMR_PLR_WIDTH                      1u
#define ENET_EIMR_PLR(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_PLR_SHIFT))&ENET_EIMR_PLR_MASK)
#define ENET_EIMR_UN_MASK                        0x80000u
#define ENET_EIMR_UN_SHIFT                       19u
#define ENET_EIMR_UN_WIDTH                       1u
#define ENET_EIMR_UN(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_UN_SHIFT))&ENET_EIMR_UN_MASK)
#define ENET_EIMR_RL_MASK                        0x100000u
#define ENET_EIMR_RL_SHIFT                       20u
#define ENET_EIMR_RL_WIDTH                       1u
#define ENET_EIMR_RL(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_RL_SHIFT))&ENET_EIMR_RL_MASK)
#define ENET_EIMR_LC_MASK                        0x200000u
#define ENET_EIMR_LC_SHIFT                       21u
#define ENET_EIMR_LC_WIDTH                       1u
#define ENET_EIMR_LC(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_LC_SHIFT))&ENET_EIMR_LC_MASK)
#define ENET_EIMR_EBERR_MASK                     0x400000u
#define ENET_EIMR_EBERR_SHIFT                    22u
#define ENET_EIMR_EBERR_WIDTH                    1u
#define ENET_EIMR_EBERR(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_EBERR_SHIFT))&ENET_EIMR_EBERR_MASK)
#define ENET_EIMR_MII_MASK                       0x800000u
#define ENET_EIMR_MII_SHIFT                      23u
#define ENET_EIMR_MII_WIDTH                      1u
#define ENET_EIMR_MII(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_MII_SHIFT))&ENET_EIMR_MII_MASK)
#define ENET_EIMR_RXB_MASK                       0x1000000u
#define ENET_EIMR_RXB_SHIFT                      24u
#define ENET_EIMR_RXB_WIDTH                      1u
#define ENET_EIMR_RXB(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_RXB_SHIFT))&ENET_EIMR_RXB_MASK)
#define ENET_EIMR_RXF_MASK                       0x2000000u
#define ENET_EIMR_RXF_SHIFT                      25u
#define ENET_EIMR_RXF_WIDTH                      1u
#define ENET_EIMR_RXF(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_RXF_SHIFT))&ENET_EIMR_RXF_MASK)
#define ENET_EIMR_TXB_MASK                       0x4000000u
#define ENET_EIMR_TXB_SHIFT                      26u
#define ENET_EIMR_TXB_WIDTH                      1u
#define ENET_EIMR_TXB(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_TXB_SHIFT))&ENET_EIMR_TXB_MASK)
#define ENET_EIMR_TXF_MASK                       0x8000000u
#define ENET_EIMR_TXF_SHIFT                      27u
#define ENET_EIMR_TXF_WIDTH                      1u
#define ENET_EIMR_TXF(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_TXF_SHIFT))&ENET_EIMR_TXF_MASK)
#define ENET_EIMR_GRA_MASK                       0x10000000u
#define ENET_EIMR_GRA_SHIFT                      28u
#define ENET_EIMR_GRA_WIDTH                      1u
#define ENET_EIMR_GRA(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_GRA_SHIFT))&ENET_EIMR_GRA_MASK)
#define ENET_EIMR_BABT_MASK                      0x20000000u
#define ENET_EIMR_BABT_SHIFT                     29u
#define ENET_EIMR_BABT_WIDTH                     1u
#define ENET_EIMR_BABT(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_BABT_SHIFT))&ENET_EIMR_BABT_MASK)
#define ENET_EIMR_BABR_MASK                      0x40000000u
#define ENET_EIMR_BABR_SHIFT                     30u
#define ENET_EIMR_BABR_WIDTH                     1u
#define ENET_EIMR_BABR(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_EIMR_BABR_SHIFT))&ENET_EIMR_BABR_MASK)
/* RDAR Bit Fields */
#define ENET_RDAR_RDAR_MASK                      0x1000000u
#define ENET_RDAR_RDAR_SHIFT                     24u
#define ENET_RDAR_RDAR_WIDTH                     1u
#define ENET_RDAR_RDAR(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_RDAR_RDAR_SHIFT))&ENET_RDAR_RDAR_MASK)
/* TDAR Bit Fields */
#define ENET_TDAR_TDAR_MASK                      0x1000000u
#define ENET_TDAR_TDAR_SHIFT                     24u
#define ENET_TDAR_TDAR_WIDTH                     1u
#define ENET_TDAR_TDAR(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_TDAR_TDAR_SHIFT))&ENET_TDAR_TDAR_MASK)
/* ECR Bit Fields */
#define ENET_ECR_RESET_MASK                      0x1u
#define ENET_ECR_RESET_SHIFT                     0u
#define ENET_ECR_RESET_WIDTH                     1u
#define ENET_ECR_RESET(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_ECR_RESET_SHIFT))&ENET_ECR_RESET_MASK)
#define ENET_ECR_ETHEREN_MASK                    0x2u
#define ENET_ECR_ETHEREN_SHIFT                   1u
#define ENET_ECR_ETHEREN_WIDTH                   1u
#define ENET_ECR_ETHEREN(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_ECR_ETHEREN_SHIFT))&ENET_ECR_ETHEREN_MASK)
#define ENET_ECR_MAGICEN_MASK                    0x4u
#define ENET_ECR_MAGICEN_SHIFT                   2u
#define ENET_ECR_MAGICEN_WIDTH                   1u
#define ENET_ECR_MAGICEN(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_ECR_MAGICEN_SHIFT))&ENET_ECR_MAGICEN_MASK)
#define ENET_ECR_SLEEP_MASK                      0x8u
#define ENET_ECR_SLEEP_SHIFT                     3u
#define ENET_ECR_SLEEP_WIDTH                     1u
#define ENET_ECR_SLEEP(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_ECR_SLEEP_SHIFT))&ENET_ECR_SLEEP_MASK)
#define ENET_ECR_EN1588_MASK                     0x10u
#define ENET_ECR_EN1588_SHIFT                    4u
#define ENET_ECR_EN1588_WIDTH                    1u
#define ENET_ECR_EN1588(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_ECR_EN1588_SHIFT))&ENET_ECR_EN1588_MASK)
#define ENET_ECR_DBGEN_MASK                      0x40u
#define ENET_ECR_DBGEN_SHIFT                     6u
#define ENET_ECR_DBGEN_WIDTH                     1u
#define ENET_ECR_DBGEN(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_ECR_DBGEN_SHIFT))&ENET_ECR_DBGEN_MASK)
#define ENET_ECR_DBSWP_MASK                      0x100u
#define ENET_ECR_DBSWP_SHIFT                     8u
#define ENET_ECR_DBSWP_WIDTH                     1u
#define ENET_ECR_DBSWP(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_ECR_DBSWP_SHIFT))&ENET_ECR_DBSWP_MASK)
/* MMFR Bit Fields */
#define ENET_MMFR_DATA_MASK                      0xFFFFu
#define ENET_MMFR_DATA_SHIFT                     0u
#define ENET_MMFR_DATA_WIDTH                     16u
#define ENET_MMFR_DATA(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_MMFR_DATA_SHIFT))&ENET_MMFR_DATA_MASK)
#define ENET_MMFR_TA_MASK                        0x30000u
#define ENET_MMFR_TA_SHIFT                       16u
#define ENET_MMFR_TA_WIDTH                       2u
#define ENET_MMFR_TA(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_MMFR_TA_SHIFT))&ENET_MMFR_TA_MASK)
#define ENET_MMFR_RA_MASK                        0x7C0000u
#define ENET_MMFR_RA_SHIFT                       18u
#define ENET_MMFR_RA_WIDTH                       5u
#define ENET_MMFR_RA(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_MMFR_RA_SHIFT))&ENET_MMFR_RA_MASK)
#define ENET_MMFR_PA_MASK                        0xF800000u
#define ENET_MMFR_PA_SHIFT                       23u
#define ENET_MMFR_PA_WIDTH                       5u
#define ENET_MMFR_PA(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_MMFR_PA_SHIFT))&ENET_MMFR_PA_MASK)
#define ENET_MMFR_OP_MASK                        0x30000000u
#define ENET_MMFR_OP_SHIFT                       28u
#define ENET_MMFR_OP_WIDTH                       2u
#define ENET_MMFR_OP(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_MMFR_OP_SHIFT))&ENET_MMFR_OP_MASK)
#define ENET_MMFR_ST_MASK                        0xC0000000u
#define ENET_MMFR_ST_SHIFT                       30u
#define ENET_MMFR_ST_WIDTH                       2u
#define ENET_MMFR_ST(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_MMFR_ST_SHIFT))&ENET_MMFR_ST_MASK)
/* MSCR Bit Fields */
#define ENET_MSCR_MII_SPEED_MASK                 0x7Eu
#define ENET_MSCR_MII_SPEED_SHIFT                1u
#define ENET_MSCR_MII_SPEED_WIDTH                6u
#define ENET_MSCR_MII_SPEED(x)                   (((uint32_t)(((uint32_t)(x))<<ENET_MSCR_MII_SPEED_SHIFT))&ENET_MSCR_MII_SPEED_MASK)
#define ENET_MSCR_DIS_PRE_MASK                   0x80u
#define ENET_MSCR_DIS_PRE_SHIFT                  7u
#define ENET_MSCR_DIS_PRE_WIDTH                  1u
#define ENET_MSCR_DIS_PRE(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_MSCR_DIS_PRE_SHIFT))&ENET_MSCR_DIS_PRE_MASK)
#define ENET_MSCR_HOLDTIME_MASK                  0x700u
#define ENET_MSCR_HOLDTIME_SHIFT                 8u
#define ENET_MSCR_HOLDTIME_WIDTH                 3u
#define ENET_MSCR_HOLDTIME(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_MSCR_HOLDTIME_SHIFT))&ENET_MSCR_HOLDTIME_MASK)
/* MIBC Bit Fields */
#define ENET_MIBC_MIB_CLEAR_MASK                 0x20000000u
#define ENET_MIBC_MIB_CLEAR_SHIFT                29u
#define ENET_MIBC_MIB_CLEAR_WIDTH                1u
#define ENET_MIBC_MIB_CLEAR(x)                   (((uint32_t)(((uint32_t)(x))<<ENET_MIBC_MIB_CLEAR_SHIFT))&ENET_MIBC_MIB_CLEAR_MASK)
#define ENET_MIBC_MIB_IDLE_MASK                  0x40000000u
#define ENET_MIBC_MIB_IDLE_SHIFT                 30u
#define ENET_MIBC_MIB_IDLE_WIDTH                 1u
#define ENET_MIBC_MIB_IDLE(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_MIBC_MIB_IDLE_SHIFT))&ENET_MIBC_MIB_IDLE_MASK)
#define ENET_MIBC_MIB_DIS_MASK                   0x80000000u
#define ENET_MIBC_MIB_DIS_SHIFT                  31u
#define ENET_MIBC_MIB_DIS_WIDTH                  1u
#define ENET_MIBC_MIB_DIS(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_MIBC_MIB_DIS_SHIFT))&ENET_MIBC_MIB_DIS_MASK)
/* RCR Bit Fields */
#define ENET_RCR_LOOP_MASK                       0x1u
#define ENET_RCR_LOOP_SHIFT                      0u
#define ENET_RCR_LOOP_WIDTH                      1u
#define ENET_RCR_LOOP(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_RCR_LOOP_SHIFT))&ENET_RCR_LOOP_MASK)
#define ENET_RCR_DRT_MASK                        0x2u
#define ENET_RCR_DRT_SHIFT                       1u
#define ENET_RCR_DRT_WIDTH                       1u
#define ENET_RCR_DRT(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_RCR_DRT_SHIFT))&ENET_RCR_DRT_MASK)
#define ENET_RCR_MII_MODE_MASK                   0x4u
#define ENET_RCR_MII_MODE_SHIFT                  2u
#define ENET_RCR_MII_MODE_WIDTH                  1u
#define ENET_RCR_MII_MODE(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_RCR_MII_MODE_SHIFT))&ENET_RCR_MII_MODE_MASK)
#define ENET_RCR_PROM_MASK                       0x8u
#define ENET_RCR_PROM_SHIFT                      3u
#define ENET_RCR_PROM_WIDTH                      1u
#define ENET_RCR_PROM(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_RCR_PROM_SHIFT))&ENET_RCR_PROM_MASK)
#define ENET_RCR_BC_REJ_MASK                     0x10u
#define ENET_RCR_BC_REJ_SHIFT                    4u
#define ENET_RCR_BC_REJ_WIDTH                    1u
#define ENET_RCR_BC_REJ(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_RCR_BC_REJ_SHIFT))&ENET_RCR_BC_REJ_MASK)
#define ENET_RCR_FCE_MASK                        0x20u
#define ENET_RCR_FCE_SHIFT                       5u
#define ENET_RCR_FCE_WIDTH                       1u
#define ENET_RCR_FCE(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_RCR_FCE_SHIFT))&ENET_RCR_FCE_MASK)
#define ENET_RCR_RMII_MODE_MASK                  0x100u
#define ENET_RCR_RMII_MODE_SHIFT                 8u
#define ENET_RCR_RMII_MODE_WIDTH                 1u
#define ENET_RCR_RMII_MODE(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_RCR_RMII_MODE_SHIFT))&ENET_RCR_RMII_MODE_MASK)
#define ENET_RCR_RMII_10T_MASK                   0x200u
#define ENET_RCR_RMII_10T_SHIFT                  9u
#define ENET_RCR_RMII_10T_WIDTH                  1u
#define ENET_RCR_RMII_10T(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_RCR_RMII_10T_SHIFT))&ENET_RCR_RMII_10T_MASK)
#define ENET_RCR_PADEN_MASK                      0x1000u
#define ENET_RCR_PADEN_SHIFT                     12u
#define ENET_RCR_PADEN_WIDTH                     1u
#define ENET_RCR_PADEN(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_RCR_PADEN_SHIFT))&ENET_RCR_PADEN_MASK)
#define ENET_RCR_PAUFWD_MASK                     0x2000u
#define ENET_RCR_PAUFWD_SHIFT                    13u
#define ENET_RCR_PAUFWD_WIDTH                    1u
#define ENET_RCR_PAUFWD(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_RCR_PAUFWD_SHIFT))&ENET_RCR_PAUFWD_MASK)
#define ENET_RCR_CRCFWD_MASK                     0x4000u
#define ENET_RCR_CRCFWD_SHIFT                    14u
#define ENET_RCR_CRCFWD_WIDTH                    1u
#define ENET_RCR_CRCFWD(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_RCR_CRCFWD_SHIFT))&ENET_RCR_CRCFWD_MASK)
#define ENET_RCR_CFEN_MASK                       0x8000u
#define ENET_RCR_CFEN_SHIFT                      15u
#define ENET_RCR_CFEN_WIDTH                      1u
#define ENET_RCR_CFEN(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_RCR_CFEN_SHIFT))&ENET_RCR_CFEN_MASK)
#define ENET_RCR_MAX_FL_MASK                     0x3FFF0000u
#define ENET_RCR_MAX_FL_SHIFT                    16u
#define ENET_RCR_MAX_FL_WIDTH                    14u
#define ENET_RCR_MAX_FL(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_RCR_MAX_FL_SHIFT))&ENET_RCR_MAX_FL_MASK)
#define ENET_RCR_NLC_MASK                        0x40000000u
#define ENET_RCR_NLC_SHIFT                       30u
#define ENET_RCR_NLC_WIDTH                       1u
#define ENET_RCR_NLC(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_RCR_NLC_SHIFT))&ENET_RCR_NLC_MASK)
#define ENET_RCR_GRS_MASK                        0x80000000u
#define ENET_RCR_GRS_SHIFT                       31u
#define ENET_RCR_GRS_WIDTH                       1u
#define ENET_RCR_GRS(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_RCR_GRS_SHIFT))&ENET_RCR_GRS_MASK)
/* TCR Bit Fields */
#define ENET_TCR_GTS_MASK                        0x1u
#define ENET_TCR_GTS_SHIFT                       0u
#define ENET_TCR_GTS_WIDTH                       1u
#define ENET_TCR_GTS(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_TCR_GTS_SHIFT))&ENET_TCR_GTS_MASK)
#define ENET_TCR_FDEN_MASK                       0x4u
#define ENET_TCR_FDEN_SHIFT                      2u
#define ENET_TCR_FDEN_WIDTH                      1u
#define ENET_TCR_FDEN(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TCR_FDEN_SHIFT))&ENET_TCR_FDEN_MASK)
#define ENET_TCR_TFC_PAUSE_MASK                  0x8u
#define ENET_TCR_TFC_PAUSE_SHIFT                 3u
#define ENET_TCR_TFC_PAUSE_WIDTH                 1u
#define ENET_TCR_TFC_PAUSE(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_TCR_TFC_PAUSE_SHIFT))&ENET_TCR_TFC_PAUSE_MASK)
#define ENET_TCR_RFC_PAUSE_MASK                  0x10u
#define ENET_TCR_RFC_PAUSE_SHIFT                 4u
#define ENET_TCR_RFC_PAUSE_WIDTH                 1u
#define ENET_TCR_RFC_PAUSE(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_TCR_RFC_PAUSE_SHIFT))&ENET_TCR_RFC_PAUSE_MASK)
#define ENET_TCR_ADDSEL_MASK                     0xE0u
#define ENET_TCR_ADDSEL_SHIFT                    5u
#define ENET_TCR_ADDSEL_WIDTH                    3u
#define ENET_TCR_ADDSEL(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_TCR_ADDSEL_SHIFT))&ENET_TCR_ADDSEL_MASK)
#define ENET_TCR_ADDINS_MASK                     0x100u
#define ENET_TCR_ADDINS_SHIFT                    8u
#define ENET_TCR_ADDINS_WIDTH                    1u
#define ENET_TCR_ADDINS(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_TCR_ADDINS_SHIFT))&ENET_TCR_ADDINS_MASK)
#define ENET_TCR_CRCFWD_MASK                     0x200u
#define ENET_TCR_CRCFWD_SHIFT                    9u
#define ENET_TCR_CRCFWD_WIDTH                    1u
#define ENET_TCR_CRCFWD(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_TCR_CRCFWD_SHIFT))&ENET_TCR_CRCFWD_MASK)
/* PALR Bit Fields */
#define ENET_PALR_PADDR1_MASK                    0xFFFFFFFFu
#define ENET_PALR_PADDR1_SHIFT                   0u
#define ENET_PALR_PADDR1_WIDTH                   32u
#define ENET_PALR_PADDR1(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_PALR_PADDR1_SHIFT))&ENET_PALR_PADDR1_MASK)
/* PAUR Bit Fields */
#define ENET_PAUR_TYPE_MASK                      0xFFFFu
#define ENET_PAUR_TYPE_SHIFT                     0u
#define ENET_PAUR_TYPE_WIDTH                     16u
#define ENET_PAUR_TYPE(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_PAUR_TYPE_SHIFT))&ENET_PAUR_TYPE_MASK)
#define ENET_PAUR_PADDR2_MASK                    0xFFFF0000u
#define ENET_PAUR_PADDR2_SHIFT                   16u
#define ENET_PAUR_PADDR2_WIDTH                   16u
#define ENET_PAUR_PADDR2(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_PAUR_PADDR2_SHIFT))&ENET_PAUR_PADDR2_MASK)
/* OPD Bit Fields */
#define ENET_OPD_PAUSE_DUR_MASK                  0xFFFFu
#define ENET_OPD_PAUSE_DUR_SHIFT                 0u
#define ENET_OPD_PAUSE_DUR_WIDTH                 16u
#define ENET_OPD_PAUSE_DUR(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_OPD_PAUSE_DUR_SHIFT))&ENET_OPD_PAUSE_DUR_MASK)
#define ENET_OPD_OPCODE_MASK                     0xFFFF0000u
#define ENET_OPD_OPCODE_SHIFT                    16u
#define ENET_OPD_OPCODE_WIDTH                    16u
#define ENET_OPD_OPCODE(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_OPD_OPCODE_SHIFT))&ENET_OPD_OPCODE_MASK)
/* IAUR Bit Fields */
#define ENET_IAUR_IADDR1_MASK                    0xFFFFFFFFu
#define ENET_IAUR_IADDR1_SHIFT                   0u
#define ENET_IAUR_IADDR1_WIDTH                   32u
#define ENET_IAUR_IADDR1(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_IAUR_IADDR1_SHIFT))&ENET_IAUR_IADDR1_MASK)
/* IALR Bit Fields */
#define ENET_IALR_IADDR2_MASK                    0xFFFFFFFFu
#define ENET_IALR_IADDR2_SHIFT                   0u
#define ENET_IALR_IADDR2_WIDTH                   32u
#define ENET_IALR_IADDR2(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_IALR_IADDR2_SHIFT))&ENET_IALR_IADDR2_MASK)
/* GAUR Bit Fields */
#define ENET_GAUR_GADDR1_MASK                    0xFFFFFFFFu
#define ENET_GAUR_GADDR1_SHIFT                   0u
#define ENET_GAUR_GADDR1_WIDTH                   32u
#define ENET_GAUR_GADDR1(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_GAUR_GADDR1_SHIFT))&ENET_GAUR_GADDR1_MASK)
/* GALR Bit Fields */
#define ENET_GALR_GADDR2_MASK                    0xFFFFFFFFu
#define ENET_GALR_GADDR2_SHIFT                   0u
#define ENET_GALR_GADDR2_WIDTH                   32u
#define ENET_GALR_GADDR2(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_GALR_GADDR2_SHIFT))&ENET_GALR_GADDR2_MASK)
/* TFWR Bit Fields */
#define ENET_TFWR_TFWR_MASK                      0x3Fu
#define ENET_TFWR_TFWR_SHIFT                     0u
#define ENET_TFWR_TFWR_WIDTH                     6u
#define ENET_TFWR_TFWR(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_TFWR_TFWR_SHIFT))&ENET_TFWR_TFWR_MASK)
#define ENET_TFWR_STRFWD_MASK                    0x100u
#define ENET_TFWR_STRFWD_SHIFT                   8u
#define ENET_TFWR_STRFWD_WIDTH                   1u
#define ENET_TFWR_STRFWD(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_TFWR_STRFWD_SHIFT))&ENET_TFWR_STRFWD_MASK)
/* RDSR Bit Fields */
#define ENET_RDSR_R_DES_START_MASK               0xFFFFFFF8u
#define ENET_RDSR_R_DES_START_SHIFT              3u
#define ENET_RDSR_R_DES_START_WIDTH              29u
#define ENET_RDSR_R_DES_START(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_RDSR_R_DES_START_SHIFT))&ENET_RDSR_R_DES_START_MASK)
/* TDSR Bit Fields */
#define ENET_TDSR_X_DES_START_MASK               0xFFFFFFF8u
#define ENET_TDSR_X_DES_START_SHIFT              3u
#define ENET_TDSR_X_DES_START_WIDTH              29u
#define ENET_TDSR_X_DES_START(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_TDSR_X_DES_START_SHIFT))&ENET_TDSR_X_DES_START_MASK)
/* MRBR Bit Fields */
#define ENET_MRBR_R_BUF_SIZE_MASK                0x3FF0u
#define ENET_MRBR_R_BUF_SIZE_SHIFT               4u
#define ENET_MRBR_R_BUF_SIZE_WIDTH               10u
#define ENET_MRBR_R_BUF_SIZE(x)                  (((uint32_t)(((uint32_t)(x))<<ENET_MRBR_R_BUF_SIZE_SHIFT))&ENET_MRBR_R_BUF_SIZE_MASK)
/* RSFL Bit Fields */
#define ENET_RSFL_RX_SECTION_FULL_MASK           0xFFu
#define ENET_RSFL_RX_SECTION_FULL_SHIFT          0u
#define ENET_RSFL_RX_SECTION_FULL_WIDTH          8u
#define ENET_RSFL_RX_SECTION_FULL(x)             (((uint32_t)(((uint32_t)(x))<<ENET_RSFL_RX_SECTION_FULL_SHIFT))&ENET_RSFL_RX_SECTION_FULL_MASK)
/* RSEM Bit Fields */
#define ENET_RSEM_RX_SECTION_EMPTY_MASK          0xFFu
#define ENET_RSEM_RX_SECTION_EMPTY_SHIFT         0u
#define ENET_RSEM_RX_SECTION_EMPTY_WIDTH         8u
#define ENET_RSEM_RX_SECTION_EMPTY(x)            (((uint32_t)(((uint32_t)(x))<<ENET_RSEM_RX_SECTION_EMPTY_SHIFT))&ENET_RSEM_RX_SECTION_EMPTY_MASK)
#define ENET_RSEM_STAT_SECTION_EMPTY_MASK        0x1F0000u
#define ENET_RSEM_STAT_SECTION_EMPTY_SHIFT       16u
#define ENET_RSEM_STAT_SECTION_EMPTY_WIDTH       5u
#define ENET_RSEM_STAT_SECTION_EMPTY(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RSEM_STAT_SECTION_EMPTY_SHIFT))&ENET_RSEM_STAT_SECTION_EMPTY_MASK)
/* RAEM Bit Fields */
#define ENET_RAEM_RX_ALMOST_EMPTY_MASK           0xFFu
#define ENET_RAEM_RX_ALMOST_EMPTY_SHIFT          0u
#define ENET_RAEM_RX_ALMOST_EMPTY_WIDTH          8u
#define ENET_RAEM_RX_ALMOST_EMPTY(x)             (((uint32_t)(((uint32_t)(x))<<ENET_RAEM_RX_ALMOST_EMPTY_SHIFT))&ENET_RAEM_RX_ALMOST_EMPTY_MASK)
/* RAFL Bit Fields */
#define ENET_RAFL_RX_ALMOST_FULL_MASK            0xFFu
#define ENET_RAFL_RX_ALMOST_FULL_SHIFT           0u
#define ENET_RAFL_RX_ALMOST_FULL_WIDTH           8u
#define ENET_RAFL_RX_ALMOST_FULL(x)              (((uint32_t)(((uint32_t)(x))<<ENET_RAFL_RX_ALMOST_FULL_SHIFT))&ENET_RAFL_RX_ALMOST_FULL_MASK)
/* TSEM Bit Fields */
#define ENET_TSEM_TX_SECTION_EMPTY_MASK          0xFFu
#define ENET_TSEM_TX_SECTION_EMPTY_SHIFT         0u
#define ENET_TSEM_TX_SECTION_EMPTY_WIDTH         8u
#define ENET_TSEM_TX_SECTION_EMPTY(x)            (((uint32_t)(((uint32_t)(x))<<ENET_TSEM_TX_SECTION_EMPTY_SHIFT))&ENET_TSEM_TX_SECTION_EMPTY_MASK)
/* TAEM Bit Fields */
#define ENET_TAEM_TX_ALMOST_EMPTY_MASK           0xFFu
#define ENET_TAEM_TX_ALMOST_EMPTY_SHIFT          0u
#define ENET_TAEM_TX_ALMOST_EMPTY_WIDTH          8u
#define ENET_TAEM_TX_ALMOST_EMPTY(x)             (((uint32_t)(((uint32_t)(x))<<ENET_TAEM_TX_ALMOST_EMPTY_SHIFT))&ENET_TAEM_TX_ALMOST_EMPTY_MASK)
/* TAFL Bit Fields */
#define ENET_TAFL_TX_ALMOST_FULL_MASK            0xFFu
#define ENET_TAFL_TX_ALMOST_FULL_SHIFT           0u
#define ENET_TAFL_TX_ALMOST_FULL_WIDTH           8u
#define ENET_TAFL_TX_ALMOST_FULL(x)              (((uint32_t)(((uint32_t)(x))<<ENET_TAFL_TX_ALMOST_FULL_SHIFT))&ENET_TAFL_TX_ALMOST_FULL_MASK)
/* TIPG Bit Fields */
#define ENET_TIPG_IPG_MASK                       0x1Fu
#define ENET_TIPG_IPG_SHIFT                      0u
#define ENET_TIPG_IPG_WIDTH                      5u
#define ENET_TIPG_IPG(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TIPG_IPG_SHIFT))&ENET_TIPG_IPG_MASK)
/* FTRL Bit Fields */
#define ENET_FTRL_TRUNC_FL_MASK                  0x3FFFu
#define ENET_FTRL_TRUNC_FL_SHIFT                 0u
#define ENET_FTRL_TRUNC_FL_WIDTH                 14u
#define ENET_FTRL_TRUNC_FL(x)                    (((uint32_t)(((uint32_t)(x))<<ENET_FTRL_TRUNC_FL_SHIFT))&ENET_FTRL_TRUNC_FL_MASK)
/* TACC Bit Fields */
#define ENET_TACC_SHIFT16_MASK                   0x1u
#define ENET_TACC_SHIFT16_SHIFT                  0u
#define ENET_TACC_SHIFT16_WIDTH                  1u
#define ENET_TACC_SHIFT16(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_TACC_SHIFT16_SHIFT))&ENET_TACC_SHIFT16_MASK)
#define ENET_TACC_IPCHK_MASK                     0x8u
#define ENET_TACC_IPCHK_SHIFT                    3u
#define ENET_TACC_IPCHK_WIDTH                    1u
#define ENET_TACC_IPCHK(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_TACC_IPCHK_SHIFT))&ENET_TACC_IPCHK_MASK)
#define ENET_TACC_PROCHK_MASK                    0x10u
#define ENET_TACC_PROCHK_SHIFT                   4u
#define ENET_TACC_PROCHK_WIDTH                   1u
#define ENET_TACC_PROCHK(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_TACC_PROCHK_SHIFT))&ENET_TACC_PROCHK_MASK)
/* RACC Bit Fields */
#define ENET_RACC_PADREM_MASK                    0x1u
#define ENET_RACC_PADREM_SHIFT                   0u
#define ENET_RACC_PADREM_WIDTH                   1u
#define ENET_RACC_PADREM(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_RACC_PADREM_SHIFT))&ENET_RACC_PADREM_MASK)
#define ENET_RACC_IPDIS_MASK                     0x2u
#define ENET_RACC_IPDIS_SHIFT                    1u
#define ENET_RACC_IPDIS_WIDTH                    1u
#define ENET_RACC_IPDIS(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_RACC_IPDIS_SHIFT))&ENET_RACC_IPDIS_MASK)
#define ENET_RACC_PRODIS_MASK                    0x4u
#define ENET_RACC_PRODIS_SHIFT                   2u
#define ENET_RACC_PRODIS_WIDTH                   1u
#define ENET_RACC_PRODIS(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_RACC_PRODIS_SHIFT))&ENET_RACC_PRODIS_MASK)
#define ENET_RACC_LINEDIS_MASK                   0x40u
#define ENET_RACC_LINEDIS_SHIFT                  6u
#define ENET_RACC_LINEDIS_WIDTH                  1u
#define ENET_RACC_LINEDIS(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_RACC_LINEDIS_SHIFT))&ENET_RACC_LINEDIS_MASK)
#define ENET_RACC_SHIFT16_MASK                   0x80u
#define ENET_RACC_SHIFT16_SHIFT                  7u
#define ENET_RACC_SHIFT16_WIDTH                  1u
#define ENET_RACC_SHIFT16(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_RACC_SHIFT16_SHIFT))&ENET_RACC_SHIFT16_MASK)
/* RMON_T_PACKETS Bit Fields */
#define ENET_RMON_T_PACKETS_TXPKTS_MASK          0xFFFFu
#define ENET_RMON_T_PACKETS_TXPKTS_SHIFT         0u
#define ENET_RMON_T_PACKETS_TXPKTS_WIDTH         16u
#define ENET_RMON_T_PACKETS_TXPKTS(x)            (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_PACKETS_TXPKTS_SHIFT))&ENET_RMON_T_PACKETS_TXPKTS_MASK)
/* RMON_T_BC_PKT Bit Fields */
#define ENET_RMON_T_BC_PKT_TXPKTS_MASK           0xFFFFu
#define ENET_RMON_T_BC_PKT_TXPKTS_SHIFT          0u
#define ENET_RMON_T_BC_PKT_TXPKTS_WIDTH          16u
#define ENET_RMON_T_BC_PKT_TXPKTS(x)             (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_BC_PKT_TXPKTS_SHIFT))&ENET_RMON_T_BC_PKT_TXPKTS_MASK)
/* RMON_T_MC_PKT Bit Fields */
#define ENET_RMON_T_MC_PKT_TXPKTS_MASK           0xFFFFu
#define ENET_RMON_T_MC_PKT_TXPKTS_SHIFT          0u
#define ENET_RMON_T_MC_PKT_TXPKTS_WIDTH          16u
#define ENET_RMON_T_MC_PKT_TXPKTS(x)             (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_MC_PKT_TXPKTS_SHIFT))&ENET_RMON_T_MC_PKT_TXPKTS_MASK)
/* RMON_T_CRC_ALIGN Bit Fields */
#define ENET_RMON_T_CRC_ALIGN_TXPKTS_MASK        0xFFFFu
#define ENET_RMON_T_CRC_ALIGN_TXPKTS_SHIFT       0u
#define ENET_RMON_T_CRC_ALIGN_TXPKTS_WIDTH       16u
#define ENET_RMON_T_CRC_ALIGN_TXPKTS(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_CRC_ALIGN_TXPKTS_SHIFT))&ENET_RMON_T_CRC_ALIGN_TXPKTS_MASK)
/* RMON_T_UNDERSIZE Bit Fields */
#define ENET_RMON_T_UNDERSIZE_TXPKTS_MASK        0xFFFFu
#define ENET_RMON_T_UNDERSIZE_TXPKTS_SHIFT       0u
#define ENET_RMON_T_UNDERSIZE_TXPKTS_WIDTH       16u
#define ENET_RMON_T_UNDERSIZE_TXPKTS(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_UNDERSIZE_TXPKTS_SHIFT))&ENET_RMON_T_UNDERSIZE_TXPKTS_MASK)
/* RMON_T_OVERSIZE Bit Fields */
#define ENET_RMON_T_OVERSIZE_TXPKTS_MASK         0xFFFFu
#define ENET_RMON_T_OVERSIZE_TXPKTS_SHIFT        0u
#define ENET_RMON_T_OVERSIZE_TXPKTS_WIDTH        16u
#define ENET_RMON_T_OVERSIZE_TXPKTS(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_OVERSIZE_TXPKTS_SHIFT))&ENET_RMON_T_OVERSIZE_TXPKTS_MASK)
/* RMON_T_FRAG Bit Fields */
#define ENET_RMON_T_FRAG_TXPKTS_MASK             0xFFFFu
#define ENET_RMON_T_FRAG_TXPKTS_SHIFT            0u
#define ENET_RMON_T_FRAG_TXPKTS_WIDTH            16u
#define ENET_RMON_T_FRAG_TXPKTS(x)               (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_FRAG_TXPKTS_SHIFT))&ENET_RMON_T_FRAG_TXPKTS_MASK)
/* RMON_T_JAB Bit Fields */
#define ENET_RMON_T_JAB_TXPKTS_MASK              0xFFFFu
#define ENET_RMON_T_JAB_TXPKTS_SHIFT             0u
#define ENET_RMON_T_JAB_TXPKTS_WIDTH             16u
#define ENET_RMON_T_JAB_TXPKTS(x)                (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_JAB_TXPKTS_SHIFT))&ENET_RMON_T_JAB_TXPKTS_MASK)
/* RMON_T_COL Bit Fields */
#define ENET_RMON_T_COL_TXPKTS_MASK              0xFFFFu
#define ENET_RMON_T_COL_TXPKTS_SHIFT             0u
#define ENET_RMON_T_COL_TXPKTS_WIDTH             16u
#define ENET_RMON_T_COL_TXPKTS(x)                (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_COL_TXPKTS_SHIFT))&ENET_RMON_T_COL_TXPKTS_MASK)
/* RMON_T_P64 Bit Fields */
#define ENET_RMON_T_P64_TXPKTS_MASK              0xFFFFu
#define ENET_RMON_T_P64_TXPKTS_SHIFT             0u
#define ENET_RMON_T_P64_TXPKTS_WIDTH             16u
#define ENET_RMON_T_P64_TXPKTS(x)                (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P64_TXPKTS_SHIFT))&ENET_RMON_T_P64_TXPKTS_MASK)
/* RMON_T_P65TO127 Bit Fields */
#define ENET_RMON_T_P65TO127_TXPKTS_MASK         0xFFFFu
#define ENET_RMON_T_P65TO127_TXPKTS_SHIFT        0u
#define ENET_RMON_T_P65TO127_TXPKTS_WIDTH        16u
#define ENET_RMON_T_P65TO127_TXPKTS(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P65TO127_TXPKTS_SHIFT))&ENET_RMON_T_P65TO127_TXPKTS_MASK)
/* RMON_T_P128TO255 Bit Fields */
#define ENET_RMON_T_P128TO255_TXPKTS_MASK        0xFFFFu
#define ENET_RMON_T_P128TO255_TXPKTS_SHIFT       0u
#define ENET_RMON_T_P128TO255_TXPKTS_WIDTH       16u
#define ENET_RMON_T_P128TO255_TXPKTS(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P128TO255_TXPKTS_SHIFT))&ENET_RMON_T_P128TO255_TXPKTS_MASK)
/* RMON_T_P256TO511 Bit Fields */
#define ENET_RMON_T_P256TO511_TXPKTS_MASK        0xFFFFu
#define ENET_RMON_T_P256TO511_TXPKTS_SHIFT       0u
#define ENET_RMON_T_P256TO511_TXPKTS_WIDTH       16u
#define ENET_RMON_T_P256TO511_TXPKTS(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P256TO511_TXPKTS_SHIFT))&ENET_RMON_T_P256TO511_TXPKTS_MASK)
/* RMON_T_P512TO1023 Bit Fields */
#define ENET_RMON_T_P512TO1023_TXPKTS_MASK       0xFFFFu
#define ENET_RMON_T_P512TO1023_TXPKTS_SHIFT      0u
#define ENET_RMON_T_P512TO1023_TXPKTS_WIDTH      16u
#define ENET_RMON_T_P512TO1023_TXPKTS(x)         (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P512TO1023_TXPKTS_SHIFT))&ENET_RMON_T_P512TO1023_TXPKTS_MASK)
/* RMON_T_P1024TO2047 Bit Fields */
#define ENET_RMON_T_P1024TO2047_TXPKTS_MASK      0xFFFFu
#define ENET_RMON_T_P1024TO2047_TXPKTS_SHIFT     0u
#define ENET_RMON_T_P1024TO2047_TXPKTS_WIDTH     16u
#define ENET_RMON_T_P1024TO2047_TXPKTS(x)        (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P1024TO2047_TXPKTS_SHIFT))&ENET_RMON_T_P1024TO2047_TXPKTS_MASK)
/* RMON_T_P_GTE2048 Bit Fields */
#define ENET_RMON_T_P_GTE2048_TXPKTS_MASK        0xFFFFu
#define ENET_RMON_T_P_GTE2048_TXPKTS_SHIFT       0u
#define ENET_RMON_T_P_GTE2048_TXPKTS_WIDTH       16u
#define ENET_RMON_T_P_GTE2048_TXPKTS(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_P_GTE2048_TXPKTS_SHIFT))&ENET_RMON_T_P_GTE2048_TXPKTS_MASK)
/* RMON_T_OCTETS Bit Fields */
#define ENET_RMON_T_OCTETS_TXOCTS_MASK           0xFFFFFFFFu
#define ENET_RMON_T_OCTETS_TXOCTS_SHIFT          0u
#define ENET_RMON_T_OCTETS_TXOCTS_WIDTH          32u
#define ENET_RMON_T_OCTETS_TXOCTS(x)             (((uint32_t)(((uint32_t)(x))<<ENET_RMON_T_OCTETS_TXOCTS_SHIFT))&ENET_RMON_T_OCTETS_TXOCTS_MASK)
/* IEEE_T_FRAME_OK Bit Fields */
#define ENET_IEEE_T_FRAME_OK_COUNT_MASK          0xFFFFu
#define ENET_IEEE_T_FRAME_OK_COUNT_SHIFT         0u
#define ENET_IEEE_T_FRAME_OK_COUNT_WIDTH         16u
#define ENET_IEEE_T_FRAME_OK_COUNT(x)            (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_FRAME_OK_COUNT_SHIFT))&ENET_IEEE_T_FRAME_OK_COUNT_MASK)
/* IEEE_T_1COL Bit Fields */
#define ENET_IEEE_T_1COL_COUNT_MASK              0xFFFFu
#define ENET_IEEE_T_1COL_COUNT_SHIFT             0u
#define ENET_IEEE_T_1COL_COUNT_WIDTH             16u
#define ENET_IEEE_T_1COL_COUNT(x)                (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_1COL_COUNT_SHIFT))&ENET_IEEE_T_1COL_COUNT_MASK)
/* IEEE_T_MCOL Bit Fields */
#define ENET_IEEE_T_MCOL_COUNT_MASK              0xFFFFu
#define ENET_IEEE_T_MCOL_COUNT_SHIFT             0u
#define ENET_IEEE_T_MCOL_COUNT_WIDTH             16u
#define ENET_IEEE_T_MCOL_COUNT(x)                (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_MCOL_COUNT_SHIFT))&ENET_IEEE_T_MCOL_COUNT_MASK)
/* IEEE_T_DEF Bit Fields */
#define ENET_IEEE_T_DEF_COUNT_MASK               0xFFFFu
#define ENET_IEEE_T_DEF_COUNT_SHIFT              0u
#define ENET_IEEE_T_DEF_COUNT_WIDTH              16u
#define ENET_IEEE_T_DEF_COUNT(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_DEF_COUNT_SHIFT))&ENET_IEEE_T_DEF_COUNT_MASK)
/* IEEE_T_LCOL Bit Fields */
#define ENET_IEEE_T_LCOL_COUNT_MASK              0xFFFFu
#define ENET_IEEE_T_LCOL_COUNT_SHIFT             0u
#define ENET_IEEE_T_LCOL_COUNT_WIDTH             16u
#define ENET_IEEE_T_LCOL_COUNT(x)                (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_LCOL_COUNT_SHIFT))&ENET_IEEE_T_LCOL_COUNT_MASK)
/* IEEE_T_EXCOL Bit Fields */
#define ENET_IEEE_T_EXCOL_COUNT_MASK             0xFFFFu
#define ENET_IEEE_T_EXCOL_COUNT_SHIFT            0u
#define ENET_IEEE_T_EXCOL_COUNT_WIDTH            16u
#define ENET_IEEE_T_EXCOL_COUNT(x)               (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_EXCOL_COUNT_SHIFT))&ENET_IEEE_T_EXCOL_COUNT_MASK)
/* IEEE_T_MACERR Bit Fields */
#define ENET_IEEE_T_MACERR_COUNT_MASK            0xFFFFu
#define ENET_IEEE_T_MACERR_COUNT_SHIFT           0u
#define ENET_IEEE_T_MACERR_COUNT_WIDTH           16u
#define ENET_IEEE_T_MACERR_COUNT(x)              (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_MACERR_COUNT_SHIFT))&ENET_IEEE_T_MACERR_COUNT_MASK)
/* IEEE_T_CSERR Bit Fields */
#define ENET_IEEE_T_CSERR_COUNT_MASK             0xFFFFu
#define ENET_IEEE_T_CSERR_COUNT_SHIFT            0u
#define ENET_IEEE_T_CSERR_COUNT_WIDTH            16u
#define ENET_IEEE_T_CSERR_COUNT(x)               (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_CSERR_COUNT_SHIFT))&ENET_IEEE_T_CSERR_COUNT_MASK)
/* IEEE_T_SQE Bit Fields */
#define ENET_IEEE_T_SQE_COUNT_MASK               0xFFFFu
#define ENET_IEEE_T_SQE_COUNT_SHIFT              0u
#define ENET_IEEE_T_SQE_COUNT_WIDTH              16u
#define ENET_IEEE_T_SQE_COUNT(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_SQE_COUNT_SHIFT))&ENET_IEEE_T_SQE_COUNT_MASK)
/* IEEE_T_FDXFC Bit Fields */
#define ENET_IEEE_T_FDXFC_COUNT_MASK             0xFFFFu
#define ENET_IEEE_T_FDXFC_COUNT_SHIFT            0u
#define ENET_IEEE_T_FDXFC_COUNT_WIDTH            16u
#define ENET_IEEE_T_FDXFC_COUNT(x)               (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_FDXFC_COUNT_SHIFT))&ENET_IEEE_T_FDXFC_COUNT_MASK)
/* IEEE_T_OCTETS_OK Bit Fields */
#define ENET_IEEE_T_OCTETS_OK_COUNT_MASK         0xFFFFFFFFu
#define ENET_IEEE_T_OCTETS_OK_COUNT_SHIFT        0u
#define ENET_IEEE_T_OCTETS_OK_COUNT_WIDTH        32u
#define ENET_IEEE_T_OCTETS_OK_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_T_OCTETS_OK_COUNT_SHIFT))&ENET_IEEE_T_OCTETS_OK_COUNT_MASK)
/* RMON_R_PACKETS Bit Fields */
#define ENET_RMON_R_PACKETS_COUNT_MASK           0xFFFFu
#define ENET_RMON_R_PACKETS_COUNT_SHIFT          0u
#define ENET_RMON_R_PACKETS_COUNT_WIDTH          16u
#define ENET_RMON_R_PACKETS_COUNT(x)             (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_PACKETS_COUNT_SHIFT))&ENET_RMON_R_PACKETS_COUNT_MASK)
/* RMON_R_BC_PKT Bit Fields */
#define ENET_RMON_R_BC_PKT_COUNT_MASK            0xFFFFu
#define ENET_RMON_R_BC_PKT_COUNT_SHIFT           0u
#define ENET_RMON_R_BC_PKT_COUNT_WIDTH           16u
#define ENET_RMON_R_BC_PKT_COUNT(x)              (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_BC_PKT_COUNT_SHIFT))&ENET_RMON_R_BC_PKT_COUNT_MASK)
/* RMON_R_MC_PKT Bit Fields */
#define ENET_RMON_R_MC_PKT_COUNT_MASK            0xFFFFu
#define ENET_RMON_R_MC_PKT_COUNT_SHIFT           0u
#define ENET_RMON_R_MC_PKT_COUNT_WIDTH           16u
#define ENET_RMON_R_MC_PKT_COUNT(x)              (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_MC_PKT_COUNT_SHIFT))&ENET_RMON_R_MC_PKT_COUNT_MASK)
/* RMON_R_CRC_ALIGN Bit Fields */
#define ENET_RMON_R_CRC_ALIGN_COUNT_MASK         0xFFFFu
#define ENET_RMON_R_CRC_ALIGN_COUNT_SHIFT        0u
#define ENET_RMON_R_CRC_ALIGN_COUNT_WIDTH        16u
#define ENET_RMON_R_CRC_ALIGN_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_CRC_ALIGN_COUNT_SHIFT))&ENET_RMON_R_CRC_ALIGN_COUNT_MASK)
/* RMON_R_UNDERSIZE Bit Fields */
#define ENET_RMON_R_UNDERSIZE_COUNT_MASK         0xFFFFu
#define ENET_RMON_R_UNDERSIZE_COUNT_SHIFT        0u
#define ENET_RMON_R_UNDERSIZE_COUNT_WIDTH        16u
#define ENET_RMON_R_UNDERSIZE_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_UNDERSIZE_COUNT_SHIFT))&ENET_RMON_R_UNDERSIZE_COUNT_MASK)
/* RMON_R_OVERSIZE Bit Fields */
#define ENET_RMON_R_OVERSIZE_COUNT_MASK          0xFFFFu
#define ENET_RMON_R_OVERSIZE_COUNT_SHIFT         0u
#define ENET_RMON_R_OVERSIZE_COUNT_WIDTH         16u
#define ENET_RMON_R_OVERSIZE_COUNT(x)            (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_OVERSIZE_COUNT_SHIFT))&ENET_RMON_R_OVERSIZE_COUNT_MASK)
/* RMON_R_FRAG Bit Fields */
#define ENET_RMON_R_FRAG_COUNT_MASK              0xFFFFu
#define ENET_RMON_R_FRAG_COUNT_SHIFT             0u
#define ENET_RMON_R_FRAG_COUNT_WIDTH             16u
#define ENET_RMON_R_FRAG_COUNT(x)                (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_FRAG_COUNT_SHIFT))&ENET_RMON_R_FRAG_COUNT_MASK)
/* RMON_R_JAB Bit Fields */
#define ENET_RMON_R_JAB_COUNT_MASK               0xFFFFu
#define ENET_RMON_R_JAB_COUNT_SHIFT              0u
#define ENET_RMON_R_JAB_COUNT_WIDTH              16u
#define ENET_RMON_R_JAB_COUNT(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_JAB_COUNT_SHIFT))&ENET_RMON_R_JAB_COUNT_MASK)
/* RMON_R_P64 Bit Fields */
#define ENET_RMON_R_P64_COUNT_MASK               0xFFFFu
#define ENET_RMON_R_P64_COUNT_SHIFT              0u
#define ENET_RMON_R_P64_COUNT_WIDTH              16u
#define ENET_RMON_R_P64_COUNT(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P64_COUNT_SHIFT))&ENET_RMON_R_P64_COUNT_MASK)
/* RMON_R_P65TO127 Bit Fields */
#define ENET_RMON_R_P65TO127_COUNT_MASK          0xFFFFu
#define ENET_RMON_R_P65TO127_COUNT_SHIFT         0u
#define ENET_RMON_R_P65TO127_COUNT_WIDTH         16u
#define ENET_RMON_R_P65TO127_COUNT(x)            (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P65TO127_COUNT_SHIFT))&ENET_RMON_R_P65TO127_COUNT_MASK)
/* RMON_R_P128TO255 Bit Fields */
#define ENET_RMON_R_P128TO255_COUNT_MASK         0xFFFFu
#define ENET_RMON_R_P128TO255_COUNT_SHIFT        0u
#define ENET_RMON_R_P128TO255_COUNT_WIDTH        16u
#define ENET_RMON_R_P128TO255_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P128TO255_COUNT_SHIFT))&ENET_RMON_R_P128TO255_COUNT_MASK)
/* RMON_R_P256TO511 Bit Fields */
#define ENET_RMON_R_P256TO511_COUNT_MASK         0xFFFFu
#define ENET_RMON_R_P256TO511_COUNT_SHIFT        0u
#define ENET_RMON_R_P256TO511_COUNT_WIDTH        16u
#define ENET_RMON_R_P256TO511_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P256TO511_COUNT_SHIFT))&ENET_RMON_R_P256TO511_COUNT_MASK)
/* RMON_R_P512TO1023 Bit Fields */
#define ENET_RMON_R_P512TO1023_COUNT_MASK        0xFFFFu
#define ENET_RMON_R_P512TO1023_COUNT_SHIFT       0u
#define ENET_RMON_R_P512TO1023_COUNT_WIDTH       16u
#define ENET_RMON_R_P512TO1023_COUNT(x)          (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P512TO1023_COUNT_SHIFT))&ENET_RMON_R_P512TO1023_COUNT_MASK)
/* RMON_R_P1024TO2047 Bit Fields */
#define ENET_RMON_R_P1024TO2047_COUNT_MASK       0xFFFFu
#define ENET_RMON_R_P1024TO2047_COUNT_SHIFT      0u
#define ENET_RMON_R_P1024TO2047_COUNT_WIDTH      16u
#define ENET_RMON_R_P1024TO2047_COUNT(x)         (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P1024TO2047_COUNT_SHIFT))&ENET_RMON_R_P1024TO2047_COUNT_MASK)
/* RMON_R_P_GTE2048 Bit Fields */
#define ENET_RMON_R_P_GTE2048_COUNT_MASK         0xFFFFu
#define ENET_RMON_R_P_GTE2048_COUNT_SHIFT        0u
#define ENET_RMON_R_P_GTE2048_COUNT_WIDTH        16u
#define ENET_RMON_R_P_GTE2048_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_P_GTE2048_COUNT_SHIFT))&ENET_RMON_R_P_GTE2048_COUNT_MASK)
/* RMON_R_OCTETS Bit Fields */
#define ENET_RMON_R_OCTETS_COUNT_MASK            0xFFFFFFFFu
#define ENET_RMON_R_OCTETS_COUNT_SHIFT           0u
#define ENET_RMON_R_OCTETS_COUNT_WIDTH           32u
#define ENET_RMON_R_OCTETS_COUNT(x)              (((uint32_t)(((uint32_t)(x))<<ENET_RMON_R_OCTETS_COUNT_SHIFT))&ENET_RMON_R_OCTETS_COUNT_MASK)
/* IEEE_R_DROP Bit Fields */
#define ENET_IEEE_R_DROP_COUNT_MASK              0xFFFFu
#define ENET_IEEE_R_DROP_COUNT_SHIFT             0u
#define ENET_IEEE_R_DROP_COUNT_WIDTH             16u
#define ENET_IEEE_R_DROP_COUNT(x)                (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_DROP_COUNT_SHIFT))&ENET_IEEE_R_DROP_COUNT_MASK)
/* IEEE_R_FRAME_OK Bit Fields */
#define ENET_IEEE_R_FRAME_OK_COUNT_MASK          0xFFFFu
#define ENET_IEEE_R_FRAME_OK_COUNT_SHIFT         0u
#define ENET_IEEE_R_FRAME_OK_COUNT_WIDTH         16u
#define ENET_IEEE_R_FRAME_OK_COUNT(x)            (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_FRAME_OK_COUNT_SHIFT))&ENET_IEEE_R_FRAME_OK_COUNT_MASK)
/* IEEE_R_CRC Bit Fields */
#define ENET_IEEE_R_CRC_COUNT_MASK               0xFFFFu
#define ENET_IEEE_R_CRC_COUNT_SHIFT              0u
#define ENET_IEEE_R_CRC_COUNT_WIDTH              16u
#define ENET_IEEE_R_CRC_COUNT(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_CRC_COUNT_SHIFT))&ENET_IEEE_R_CRC_COUNT_MASK)
/* IEEE_R_ALIGN Bit Fields */
#define ENET_IEEE_R_ALIGN_COUNT_MASK             0xFFFFu
#define ENET_IEEE_R_ALIGN_COUNT_SHIFT            0u
#define ENET_IEEE_R_ALIGN_COUNT_WIDTH            16u
#define ENET_IEEE_R_ALIGN_COUNT(x)               (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_ALIGN_COUNT_SHIFT))&ENET_IEEE_R_ALIGN_COUNT_MASK)
/* IEEE_R_MACERR Bit Fields */
#define ENET_IEEE_R_MACERR_COUNT_MASK            0xFFFFu
#define ENET_IEEE_R_MACERR_COUNT_SHIFT           0u
#define ENET_IEEE_R_MACERR_COUNT_WIDTH           16u
#define ENET_IEEE_R_MACERR_COUNT(x)              (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_MACERR_COUNT_SHIFT))&ENET_IEEE_R_MACERR_COUNT_MASK)
/* IEEE_R_FDXFC Bit Fields */
#define ENET_IEEE_R_FDXFC_COUNT_MASK             0xFFFFu
#define ENET_IEEE_R_FDXFC_COUNT_SHIFT            0u
#define ENET_IEEE_R_FDXFC_COUNT_WIDTH            16u
#define ENET_IEEE_R_FDXFC_COUNT(x)               (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_FDXFC_COUNT_SHIFT))&ENET_IEEE_R_FDXFC_COUNT_MASK)
/* IEEE_R_OCTETS_OK Bit Fields */
#define ENET_IEEE_R_OCTETS_OK_COUNT_MASK         0xFFFFFFFFu
#define ENET_IEEE_R_OCTETS_OK_COUNT_SHIFT        0u
#define ENET_IEEE_R_OCTETS_OK_COUNT_WIDTH        32u
#define ENET_IEEE_R_OCTETS_OK_COUNT(x)           (((uint32_t)(((uint32_t)(x))<<ENET_IEEE_R_OCTETS_OK_COUNT_SHIFT))&ENET_IEEE_R_OCTETS_OK_COUNT_MASK)
/* ATCR Bit Fields */
#define ENET_ATCR_EN_MASK                        0x1u
#define ENET_ATCR_EN_SHIFT                       0u
#define ENET_ATCR_EN_WIDTH                       1u
#define ENET_ATCR_EN(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_EN_SHIFT))&ENET_ATCR_EN_MASK)
#define ENET_ATCR_OFFEN_MASK                     0x4u
#define ENET_ATCR_OFFEN_SHIFT                    2u
#define ENET_ATCR_OFFEN_WIDTH                    1u
#define ENET_ATCR_OFFEN(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_OFFEN_SHIFT))&ENET_ATCR_OFFEN_MASK)
#define ENET_ATCR_OFFRST_MASK                    0x8u
#define ENET_ATCR_OFFRST_SHIFT                   3u
#define ENET_ATCR_OFFRST_WIDTH                   1u
#define ENET_ATCR_OFFRST(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_OFFRST_SHIFT))&ENET_ATCR_OFFRST_MASK)
#define ENET_ATCR_PEREN_MASK                     0x10u
#define ENET_ATCR_PEREN_SHIFT                    4u
#define ENET_ATCR_PEREN_WIDTH                    1u
#define ENET_ATCR_PEREN(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_PEREN_SHIFT))&ENET_ATCR_PEREN_MASK)
#define ENET_ATCR_PINPER_MASK                    0x80u
#define ENET_ATCR_PINPER_SHIFT                   7u
#define ENET_ATCR_PINPER_WIDTH                   1u
#define ENET_ATCR_PINPER(x)                      (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_PINPER_SHIFT))&ENET_ATCR_PINPER_MASK)
#define ENET_ATCR_RESTART_MASK                   0x200u
#define ENET_ATCR_RESTART_SHIFT                  9u
#define ENET_ATCR_RESTART_WIDTH                  1u
#define ENET_ATCR_RESTART(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_RESTART_SHIFT))&ENET_ATCR_RESTART_MASK)
#define ENET_ATCR_CAPTURE_MASK                   0x800u
#define ENET_ATCR_CAPTURE_SHIFT                  11u
#define ENET_ATCR_CAPTURE_WIDTH                  1u
#define ENET_ATCR_CAPTURE(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_CAPTURE_SHIFT))&ENET_ATCR_CAPTURE_MASK)
#define ENET_ATCR_SLAVE_MASK                     0x2000u
#define ENET_ATCR_SLAVE_SHIFT                    13u
#define ENET_ATCR_SLAVE_WIDTH                    1u
#define ENET_ATCR_SLAVE(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_ATCR_SLAVE_SHIFT))&ENET_ATCR_SLAVE_MASK)
/* ATVR Bit Fields */
#define ENET_ATVR_ATIME_MASK                     0xFFFFFFFFu
#define ENET_ATVR_ATIME_SHIFT                    0u
#define ENET_ATVR_ATIME_WIDTH                    32u
#define ENET_ATVR_ATIME(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_ATVR_ATIME_SHIFT))&ENET_ATVR_ATIME_MASK)
/* ATOFF Bit Fields */
#define ENET_ATOFF_OFFSET_MASK                   0xFFFFFFFFu
#define ENET_ATOFF_OFFSET_SHIFT                  0u
#define ENET_ATOFF_OFFSET_WIDTH                  32u
#define ENET_ATOFF_OFFSET(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_ATOFF_OFFSET_SHIFT))&ENET_ATOFF_OFFSET_MASK)
/* ATPER Bit Fields */
#define ENET_ATPER_PERIOD_MASK                   0xFFFFFFFFu
#define ENET_ATPER_PERIOD_SHIFT                  0u
#define ENET_ATPER_PERIOD_WIDTH                  32u
#define ENET_ATPER_PERIOD(x)                     (((uint32_t)(((uint32_t)(x))<<ENET_ATPER_PERIOD_SHIFT))&ENET_ATPER_PERIOD_MASK)
/* ATCOR Bit Fields */
#define ENET_ATCOR_COR_MASK                      0x7FFFFFFFu
#define ENET_ATCOR_COR_SHIFT                     0u
#define ENET_ATCOR_COR_WIDTH                     31u
#define ENET_ATCOR_COR(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_ATCOR_COR_SHIFT))&ENET_ATCOR_COR_MASK)
/* ATINC Bit Fields */
#define ENET_ATINC_INC_MASK                      0x7Fu
#define ENET_ATINC_INC_SHIFT                     0u
#define ENET_ATINC_INC_WIDTH                     7u
#define ENET_ATINC_INC(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_ATINC_INC_SHIFT))&ENET_ATINC_INC_MASK)
#define ENET_ATINC_INC_CORR_MASK                 0x7F00u
#define ENET_ATINC_INC_CORR_SHIFT                8u
#define ENET_ATINC_INC_CORR_WIDTH                7u
#define ENET_ATINC_INC_CORR(x)                   (((uint32_t)(((uint32_t)(x))<<ENET_ATINC_INC_CORR_SHIFT))&ENET_ATINC_INC_CORR_MASK)
/* ATSTMP Bit Fields */
#define ENET_ATSTMP_TIMESTAMP_MASK               0xFFFFFFFFu
#define ENET_ATSTMP_TIMESTAMP_SHIFT              0u
#define ENET_ATSTMP_TIMESTAMP_WIDTH              32u
#define ENET_ATSTMP_TIMESTAMP(x)                 (((uint32_t)(((uint32_t)(x))<<ENET_ATSTMP_TIMESTAMP_SHIFT))&ENET_ATSTMP_TIMESTAMP_MASK)
/* TGSR Bit Fields */
#define ENET_TGSR_TF0_MASK                       0x1u
#define ENET_TGSR_TF0_SHIFT                      0u
#define ENET_TGSR_TF0_WIDTH                      1u
#define ENET_TGSR_TF0(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TGSR_TF0_SHIFT))&ENET_TGSR_TF0_MASK)
#define ENET_TGSR_TF1_MASK                       0x2u
#define ENET_TGSR_TF1_SHIFT                      1u
#define ENET_TGSR_TF1_WIDTH                      1u
#define ENET_TGSR_TF1(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TGSR_TF1_SHIFT))&ENET_TGSR_TF1_MASK)
#define ENET_TGSR_TF2_MASK                       0x4u
#define ENET_TGSR_TF2_SHIFT                      2u
#define ENET_TGSR_TF2_WIDTH                      1u
#define ENET_TGSR_TF2(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TGSR_TF2_SHIFT))&ENET_TGSR_TF2_MASK)
#define ENET_TGSR_TF3_MASK                       0x8u
#define ENET_TGSR_TF3_SHIFT                      3u
#define ENET_TGSR_TF3_WIDTH                      1u
#define ENET_TGSR_TF3(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TGSR_TF3_SHIFT))&ENET_TGSR_TF3_MASK)
/* TCSR Bit Fields */
#define ENET_TCSR_TDRE_MASK                      0x1u
#define ENET_TCSR_TDRE_SHIFT                     0u
#define ENET_TCSR_TDRE_WIDTH                     1u
#define ENET_TCSR_TDRE(x)                        (((uint32_t)(((uint32_t)(x))<<ENET_TCSR_TDRE_SHIFT))&ENET_TCSR_TDRE_MASK)
#define ENET_TCSR_TMODE_MASK                     0x3Cu
#define ENET_TCSR_TMODE_SHIFT                    2u
#define ENET_TCSR_TMODE_WIDTH                    4u
#define ENET_TCSR_TMODE(x)                       (((uint32_t)(((uint32_t)(x))<<ENET_TCSR_TMODE_SHIFT))&ENET_TCSR_TMODE_MASK)
#define ENET_TCSR_TIE_MASK                       0x40u
#define ENET_TCSR_TIE_SHIFT                      6u
#define ENET_TCSR_TIE_WIDTH                      1u
#define ENET_TCSR_TIE(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TCSR_TIE_SHIFT))&ENET_TCSR_TIE_MASK)
#define ENET_TCSR_TF_MASK                        0x80u
#define ENET_TCSR_TF_SHIFT                       7u
#define ENET_TCSR_TF_WIDTH                       1u
#define ENET_TCSR_TF(x)                          (((uint32_t)(((uint32_t)(x))<<ENET_TCSR_TF_SHIFT))&ENET_TCSR_TF_MASK)
/* TCCR Bit Fields */
#define ENET_TCCR_TCC_MASK                       0xFFFFFFFFu
#define ENET_TCCR_TCC_SHIFT                      0u
#define ENET_TCCR_TCC_WIDTH                      32u
#define ENET_TCCR_TCC(x)                         (((uint32_t)(((uint32_t)(x))<<ENET_TCCR_TCC_SHIFT))&ENET_TCCR_TCC_MASK)

/*!
 * @}
 */ /* end of group ENET_Register_Masks */


/*!
 * @}
 */ /* end of group ENET_Peripheral_Access_Layer */
#endif

#endif /* S32K1XX_ENET_H_ */
