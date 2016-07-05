/*-
 * Copyright (c) 2009 Sylvestre Gallon.  All rights reserved.
 * Copyright (c) 2010 Greg Ansley.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/* $FreeBSD$ */

#ifndef AT91SAM9G20REG_H_
#define AT91SAM9G20REG_H_

/* Chip Specific limits */
#define SAM9G20_PLL_A_MIN_IN_FREQ	  2000000 /*   2 Mhz */
#define SAM9G20_PLL_A_MAX_IN_FREQ	 32000000 /*  32 Mhz */
#define SAM9G20_PLL_A_MIN_OUT_FREQ	400000000 /* 400 Mhz */
#define SAM9G20_PLL_A_MAX_OUT_FREQ	800000000 /* 800 Mhz */
#define SAM9G20_PLL_A_MUL_SHIFT 16
#define SAM9G20_PLL_A_MUL_MASK 0xFF
#define SAM9G20_PLL_A_DIV_SHIFT 0
#define SAM9G20_PLL_A_DIV_MASK 0xFF

#define SAM9G20_PLL_B_MIN_IN_FREQ	  2000000 /*   2 Mhz */
#define SAM9G20_PLL_B_MAX_IN_FREQ	 32000000 /*  32 Mhz */
#define SAM9G20_PLL_B_MIN_OUT_FREQ	 30000000 /*  30 Mhz */
#define SAM9G20_PLL_B_MAX_OUT_FREQ	100000000 /* 100 Mhz */
#define SAM9G20_PLL_B_MUL_SHIFT 16
#define SAM9G20_PLL_B_MUL_MASK 0x3F
#define SAM9G20_PLL_B_DIV_SHIFT 0
#define SAM9G20_PLL_B_DIV_MASK 0xFF

/*
 * Memory map, from datasheet :
 * 0x00000000 - 0x0ffffffff : Internal Memories
 * 0x10000000 - 0x1ffffffff : Chip Select 0
 * 0x20000000 - 0x2ffffffff : Chip Select 1
 * 0x30000000 - 0x3ffffffff : Chip Select 2
 * 0x40000000 - 0x4ffffffff : Chip Select 3
 * 0x50000000 - 0x5ffffffff : Chip Select 4
 * 0x60000000 - 0x6ffffffff : Chip Select 5
 * 0x70000000 - 0x7ffffffff : Chip Select 6
 * 0x80000000 - 0x8ffffffff : Chip Select 7
 * 0x90000000 - 0xeffffffff : Undefined (Abort)
 * 0xf0000000 - 0xfffffffff : Peripherals
 */

#define AT91_CHIPSELECT_0 0x10000000
#define AT91_CHIPSELECT_1 0x20000000
#define AT91_CHIPSELECT_2 0x30000000
#define AT91_CHIPSELECT_3 0x40000000
#define AT91_CHIPSELECT_4 0x50000000
#define AT91_CHIPSELECT_5 0x60000000
#define AT91_CHIPSELECT_6 0x70000000
#define AT91_CHIPSELECT_7 0x80000000


#define AT91SAM9G20_EMAC_BASE 0xffc4000
#define AT91SAM9G20_EMAC_SIZE 0x4000

#define AT91SAM9G20_RSTC_BASE	0xffffd00
#define AT91SAM9G20_RSTC_SIZE	0x10

#define RSTC_CR			0
#define RSTC_PROCRST		(1 << 0)
#define RSTC_PERRST		(1 << 2)
#define RSTC_KEY		(0xa5 << 24)

/* USART*/

#define AT91SAM9G20_USART_SIZE	0x4000
#define AT91SAM9G20_USART0_BASE	0xffb0000
#define AT91SAM9G20_USART0_PDC	0xffb0100
#define AT91SAM9G20_USART0_SIZE	AT91SAM9G20_USART_SIZE
#define AT91SAM9G20_USART1_BASE	0xffb4000
#define AT91SAM9G20_USART1_PDC	0xffb4100
#define AT91SAM9G20_USART1_SIZE	AT91SAM9G20_USART_SIZE
#define AT91SAM9G20_USART2_BASE	0xffb8000
#define AT91SAM9G20_USART2_PDC	0xffb8100
#define AT91SAM9G20_USART2_SIZE	AT91SAM9G20_USART_SIZE
#define AT91SAM9G20_USART3_BASE	0xffd0000
#define AT91SAM9G20_USART3_PDC	0xffd0100
#define AT91SAM9G20_USART3_SIZE	AT91SAM9G20_USART_SIZE
#define AT91SAM9G20_USART4_BASE	0xffd4000
#define AT91SAM9G20_USART4_PDC	0xffd4100
#define AT91SAM9G20_USART4_SIZE	AT91SAM9G20_USART_SIZE
#define AT91SAM9G20_USART5_BASE	0xffd8000
#define AT91SAM9G20_USART5_PDC	0xffd8100
#define AT91SAM9G20_USART5_SIZE	AT91SAM9G20_USART_SIZE

/*TC*/
#define AT91SAM9G20_TC0_BASE	0xffa0000
#define AT91SAM9G20_TC0_SIZE	0x4000
#define AT91SAM9G20_TC0C0_BASE	0xffa0000
#define AT91SAM9G20_TC0C1_BASE	0xffa0040
#define AT91SAM9G20_TC0C2_BASE	0xffa0080

#define AT91SAM9G20_TC1_BASE	0xffdc000
#define AT91SAM9G20_TC1_SIZE	0x4000

/*SPI*/

#define AT91SAM9G20_SPI0_BASE	0xffc8000

#define AT91SAM9G20_SPI0_SIZE	0x4000
#define AT91SAM9G20_IRQ_SPI0	12

#define AT91SAM9G20_SPI1_BASE	0xffcc000
#define AT91SAM9G20_SPI1_SIZE	0x4000
#define AT91SAM9G20_IRQ_SPI1	13

/* System Registers */
#define AT91SAM9G20_SYS_BASE	0xffff000
#define AT91SAM9G20_SYS_SIZE	0x1000

#define AT91SAM9G20_MATRIX_BASE	0xfffee00
#define AT91SAM9G20_MATRIX_SIZE	0x1000
#define AT91SAM9G20_EBICSA	0x011C

#define AT91_MATRIX_EBI_CS3A_SMC_SMARTMEDIA	(1 << 3)

#define AT91SAM9G20_DBGU_BASE	0xffff200
#define AT91SAM9G20_DBGU_SIZE	0x200

/*
 * PIO
 */
#define AT91SAM9G20_PIOA_BASE	0xffff400
#define AT91SAM9G20_PIOA_SIZE	0x200
#define AT91SAM9G20_PIOB_BASE	0xffff600
#define AT91SAM9G20_PIOB_SIZE	0x200
#define AT91SAM9G20_PIOC_BASE	0xffff800
#define AT91SAM9G20_PIOC_SIZE	0x200

#define AT91RM92_PMC_BASE	0xffffc00
#define AT91RM92_PMC_SIZE	0x100
/* IRQs : */
/*
 * 0: AIC
 * 1: System peripheral (System timer, RTC, DBGU)
 * 2: PIO Controller A
 * 3: PIO Controller B
 * 4: PIO Controller C
 * 5: ADC
 * 6: USART 0
 * 7: USART 1
 * 8: USART 2
 * 9: MMC Interface
 * 10: USB device port
 * 11: Two-wire interface
 * 12: SPI 0
 * 13: SPI 1
 * 14: SSC
 * 15: - (reserved)
 * 16: - (reserved)
 * 17: Timer Counter 0
 * 18: Timer Counter 1
 * 19: Timer Counter 2
 * 20: USB Host port
 * 21: EMAC
 * 22: ISI
 * 23: USART 3
 * 24: USART 4
 * 25: USART 2
 * 26: Timer Counter 3
 * 27: Timer Counter 4
 * 28: Timer Counter 5
 * 29: AIC IRQ0
 * 30: AIC IRQ1
 * 31: AIC IRQ2
 */

#define AT91SAM9G20_IRQ_SYSTEM	1
#define AT91SAM9G20_IRQ_PIOA	2
#define AT91SAM9G20_IRQ_PIOB	3
#define AT91SAM9G20_IRQ_PIOC	4
#define AT91SAM9G20_IRQ_USART0	6
#define AT91SAM9G20_IRQ_USART1	7
#define AT91SAM9G20_IRQ_USART2	8
#define AT91SAM9G20_IRQ_MCI	9
#define AT91SAM9G20_IRQ_UDP	10
#define AT91SAM9G20_IRQ_TWI	11
#define AT91SAM9G20_IRQ_SPI0	12
#define AT91SAM9G20_IRQ_SPI1	13
#define AT91SAM9G20_IRQ_SSC0	14
#define AT91SAM9G20_IRQ_SSC1	15
#define AT91SAM9G20_IRQ_SSC2	16
#define AT91SAM9G20_IRQ_TC0	17
#define AT91SAM9G20_IRQ_TC1	18
#define AT91SAM9G20_IRQ_TC2	19
#define AT91SAM9G20_IRQ_UHP	20
#define AT91SAM9G20_IRQ_EMAC	21
#define AT91SAM9G20_IRQ_USART3	23
#define AT91SAM9G20_IRQ_USART4	24
#define AT91SAM9G20_IRQ_USART5	25
#define AT91SAM9G20_IRQ_AICBASE	29

/* Alias */
#define AT91SAM9G20_IRQ_DBGU 	AT91SAM9G20_IRQ_SYSTEM
#define AT91SAM9G20_IRQ_PMC 	AT91SAM9G20_IRQ_SYSTEM
#define AT91SAM9G20_IRQ_WDT 	AT91SAM9G20_IRQ_SYSTEM
#define AT91SAM9G20_IRQ_PIT 	AT91SAM9G20_IRQ_SYSTEM
#define AT91SAM9G20_IRQ_RSTC 	AT91SAM9G20_IRQ_SYSTEM
#define AT91SAM9G20_IRQ_OHCI 	AT91SAM9G20_IRQ_UHP
#define AT91SAM9G20_IRQ_NAND 	(-1)
#define AT91SAM9G20_IRQ_AIC	(-1)

#define AT91SAM9G20_AIC_BASE	0xffff000
#define AT91SAM9G20_AIC_SIZE	0x200

/* Timer */

#define AT91SAM9G20_WDT_BASE	0xffffd40
#define AT91SAM9G20_WDT_SIZE	0x10

#define AT91SAM9G20_PIT_BASE	0xffffd30
#define AT91SAM9G20_PIT_SIZE	0x10

#define AT91SAM9G20_SMC_BASE	0xfffec00
#define AT91SAM9G20_SMC_SIZE	0x200

#define AT91SAM9G20_PMC_BASE	0xffffc00
#define AT91SAM9G20_PMC_SIZE	0x100

#define AT91SAM9G20_UDP_BASE	0xffa4000
#define AT91SAM9G20_UDP_SIZE	0x4000

#define AT91SAM9G20_MCI_BASE	0xffa8000
#define AT91SAM9G20_MCI_SIZE	0x4000

#define AT91SAM9G20_TWI_BASE	0xffaC000
#define AT91SAM9G20_TWI_SIZE	0x4000

/* XXX Needs to be carfully coordinated with
 * other * soc's so phyical and vm address
 * mapping are unique. XXX
 */
#define AT91SAM9G20_OHCI_VA_BASE  0xdfc00000
#define AT91SAM9G20_OHCI_BASE	0x00500000
#define AT91SAM9G20_OHCI_SIZE	0x00100000

#define AT91SAM9G20_NAND_VA_BASE 0xe0000000
#define AT91SAM9G20_NAND_BASE	0x40000000
#define AT91SAM9G20_NAND_SIZE	0x10000000

/* SDRAMC */
#define AT91SAM9G20_SDRAMC_BASE	0xfffea00
#define AT91SAM9G20_SDRAMC_MR	0x00
#define AT91SAM9G20_SDRAMC_MR_MODE_NORMAL	0
#define AT91SAM9G20_SDRAMC_MR_MODE_NOP	1
#define AT91SAM9G20_SDRAMC_MR_MODE_PRECHARGE 2
#define AT91SAM9G20_SDRAMC_MR_MODE_LOAD_MODE_REGISTER 3
#define AT91SAM9G20_SDRAMC_MR_MODE_REFRESH	4
#define AT91SAM9G20_SDRAMC_TR	0x04
#define AT91SAM9G20_SDRAMC_CR	0x08
#define AT91SAM9G20_SDRAMC_CR_NC_8		0x0
#define AT91SAM9G20_SDRAMC_CR_NC_9		0x1
#define AT91SAM9G20_SDRAMC_CR_NC_10	0x2
#define AT91SAM9G20_SDRAMC_CR_NC_11	0x3
#define AT91SAM9G20_SDRAMC_CR_NC_MASK	0x00000003
#define AT91SAM9G20_SDRAMC_CR_NR_11	0x0
#define AT91SAM9G20_SDRAMC_CR_NR_12	0x4
#define AT91SAM9G20_SDRAMC_CR_NR_13	0x8
#define AT91SAM9G20_SDRAMC_CR_NR_RES	0xc
#define AT91SAM9G20_SDRAMC_CR_NR_MASK	0x0000000c
#define AT91SAM9G20_SDRAMC_CR_NB_2		0x00
#define AT91SAM9G20_SDRAMC_CR_NB_4		0x10
#define AT91SAM9G20_SDRAMC_CR_DBW_16		0x80
#define AT91SAM9G20_SDRAMC_CR_NB_MASK	0x00000010
#define AT91SAM9G20_SDRAMC_CR_NCAS_MASK	0x00000060
#define AT91SAM9G20_SDRAMC_CR_TWR_MASK	0x00000780
#define AT91SAM9G20_SDRAMC_CR_TRC_MASK	0x00007800
#define AT91SAM9G20_SDRAMC_CR_TRP_MASK	0x00078000
#define AT91SAM9G20_SDRAMC_CR_TRCD_MASK	0x00780000
#define AT91SAM9G20_SDRAMC_CR_TRAS_MASK	0x07800000
#define AT91SAM9G20_SDRAMC_CR_TXSR_MASK	0x78000000
#define AT91SAM9G20_SDRAMC_HSR	0x0c
#define AT91SAM9G20_SDRAMC_LPR	0x10
#define AT91SAM9G20_SDRAMC_IER	0x14
#define AT91SAM9G20_SDRAMC_IDR	0x18
#define AT91SAM9G20_SDRAMC_IMR	0x1c
#define AT91SAM9G20_SDRAMC_ISR	0x20
#define AT91SAM9G20_SDRAMC_MDR	0x24

#endif /* AT91SAM9G20REG_H_*/

