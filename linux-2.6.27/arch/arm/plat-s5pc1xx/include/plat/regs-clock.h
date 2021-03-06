/* arch/arm/plat-s5pc1xx/include/plat/regs-clock.h
 *
 * Copyright 2008 Samsung Electronics
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * S5PC1XX clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __PLAT_REGS_CLOCK_H
#define __PLAT_REGS_CLOCK_H __FILE__

#define S5P_CLKREG(x)		(S3C_VA_SYS + (x))

#define S5P_APLL_LOCK		S5P_CLKREG(0x00)
#define S5P_MPLL_LOCK		S5P_CLKREG(0x04)
#define S5P_EPLL_LOCK		S5P_CLKREG(0x08)
#define S5P_HPLL_LOCK		S5P_CLKREG(0x0C)

#define S5P_APLL_CON		S5P_CLKREG(0x100)
#define S5P_MPLL_CON		S5P_CLKREG(0x104)
#define S5P_EPLL_CON		S5P_CLKREG(0x108)
#define S5P_HPLL_CON		S5P_CLKREG(0x10C)

#define S5P_CLK_SRC0		S5P_CLKREG(0x200)
#define S5P_CLK_SRC1		S5P_CLKREG(0x204)
#define S5P_CLK_SRC2		S5P_CLKREG(0x208)
#define S5P_CLK_SRC3		S5P_CLKREG(0x20C)

#define S5P_CLK_DIV0		S5P_CLKREG(0x300)
#define S5P_CLK_DIV1		S5P_CLKREG(0x304)
#define S5P_CLK_DIV2		S5P_CLKREG(0x308)
#define S5P_CLK_DIV3		S5P_CLKREG(0x30C)
#define S5P_CLK_DIV4		S5P_CLKREG(0x310)

#define S5P_CLK_OUT		S5P_CLKREG(0x400)

#define S5P_CLKGATE_D00		S5P_CLKREG(0x500)
#define S5P_CLKGATE_D01		S5P_CLKREG(0x504)
#define S5P_CLKGATE_D02		S5P_CLKREG(0x508)

#define S5P_CLKGATE_D10		S5P_CLKREG(0x520)
#define S5P_CLKGATE_D11		S5P_CLKREG(0x524)
#define S5P_CLKGATE_D12		S5P_CLKREG(0x528)
#define S5P_CLKGATE_D13		S5P_CLKREG(0x52C)
#define S5P_CLKGATE_D14		S5P_CLKREG(0x530)
#define S5P_CLKGATE_D15		S5P_CLKREG(0x534)

#define S5P_CLKGATE_D20		S5P_CLKREG(0x540)

#define S5P_SCLKGATE0		S5P_CLKREG(0x560)
#define S5P_SCLKGATE1		S5P_CLKREG(0x564)


/* CLKSRC0 */
#define S5P_CLKSRC0_APLL_MASK	(0x1<<0)
#define S5P_CLKSRC0_APLL_SHIFT	(0)
#define S5P_CLKSRC0_MPLL_MASK	(0x1<<4)
#define S5P_CLKSRC0_MPLL_SHIFT	(4)
#define S5P_CLKSRC0_EPLL_MASK	(0x1<<8)
#define S5P_CLKSRC0_EPLL_SHIFT	(8)
#define S5P_CLKSRC0_HPLL_MASK	(0x1<<12)
#define S5P_CLKSRC0_HPLL_SHIFT	(12)
#define S5P_CLKSRC0_AMMUX_MASK	(0x1<<16)
#define S5P_CLKSRC0_AMMUX_SHIFT	(16)
#define S5P_CLKSRC0_HREF_MASK	(0x1<<20)
#define S5P_CLKSRC0_HREF_SHIFT	(20)
#define S5P_CLKSRC0_ONENAND_MASK	(0x1<<24)
#define S5P_CLKSRC0_ONENAND_SHIFT	(24)

/* CLKSRC1 */
#define S5P_CLKSRC1_UART_MASK	(0x1<<0)
#define S5P_CLKSRC1_UART_SHIFT	(0)
#define S5P_CLKSRC1_SPI0_MASK	(0x3<<4)
#define S5P_CLKSRC1_SPI0_SHIFT	(4)
#define S5P_CLKSRC1_SPI1_MASK	(0x3<<8)
#define S5P_CLKSRC1_SPI1_SHIFT	(8)
#define S5P_CLKSRC1_SPI2_MASK	(0x3<<12)
#define S5P_CLKSRC1_SPI2_SHIFT	(12)
#define S5P_CLKSRC1_IRDA_MASK	(0x3<<16)
#define S5P_CLKSRC1_IRDA_SHIFT	(16)
#define S5P_CLKSRC1_UHOST_MASK	(0x3<<20)
#define S5P_CLKSRC1_UHOST_SHIFT	(20)
#define S5P_CLKSRC1_CLK48M_MASK	(0x1<<24)
#define S5P_CLKSRC1_CLK48M_SHIFT	(24)

/* CLKSRC2 */
#define S5P_CLKSRC2_MMC0_MASK	(0x3<<0)
#define S5P_CLKSRC2_MMC0_SHIFT	(0)
#define S5P_CLKSRC2_MMC1_MASK	(0x3<<4)
#define S5P_CLKSRC2_MMC1_SHIFT	(4)
#define S5P_CLKSRC2_MMC2_MASK	(0x3<<8)
#define S5P_CLKSRC2_MMC2_SHIFT	(8)
#define S5P_CLKSRC2_LCD_MASK	(0x3<<12)
#define S5P_CLKSRC2_LCD_SHIFT	(12)
#define S5P_CLKSRC2_FIMC0_MASK	(0x3<<16)
#define S5P_CLKSRC2_FIMC0_SHIFT	(16)
#define S5P_CLKSRC2_FIMC1_MASK	(0x3<<20)
#define S5P_CLKSRC2_FIMC1_SHIFT	(20)
#define S5P_CLKSRC2_FIMC2_MASK	(0x3<<24)
#define S5P_CLKSRC2_FIMC2_SHIFT	(24)
#define S5P_CLKSRC2_MIXER_MASK	(0x3<<28)
#define S5P_CLKSRC2_MIXER_SHIFT	(28)

/* CLKSRC3 */
#define S5P_CLKSRC3_PWI_MASK	(0x3<<0)
#define S5P_CLKSRC3_PWI_SHIFT	(0)
#define S5P_CLKSRC3_HCLKD2_MASK	(0x1<<4)
#define S5P_CLKSRC3_HCLKD2_SHIFT	(4)
#define S5P_CLKSRC3_I2SD2_MASK	(0x3<<8)
#define S5P_CLKSRC3_I2SD2_SHIFT	(8)
#define S5P_CLKSRC3_AUDIO0_MASK	(0x7<<12)
#define S5P_CLKSRC3_AUDIO0_SHIFT	(12)
#define S5P_CLKSRC3_AUDIO1_MASK	(0x7<<16)
#define S5P_CLKSRC3_AUDIO1_SHIFT	(16)
#define S5P_CLKSRC3_AUDIO2_MASK	(0x7<<20)
#define S5P_CLKSRC3_AUDIO2_SHIFT	(20)
#define S5P_CLKSRC3_SPDIF_MASK	(0x3<<24)
#define S5P_CLKSRC3_SPDIF_SHIFT	(24)


/* CLKDIV0 */
#define S5P_CLKDIV0_APLL_MASK	(0x1<<0)
#define S5P_CLKDIV0_APLL_SHIFT	(0)
#define S5P_CLKDIV0_ARM_MASK	(0x7<<4)
#define S5P_CLKDIV0_ARM_SHIFT	(4)
#define S5P_CLKDIV0_D0_MASK	(0x7<<8)
#define S5P_CLKDIV0_D0_SHIFT	(8)
#define S5P_CLKDIV0_PCLKD0_MASK	(0x7<<12)
#define S5P_CLKDIV0_PCLKD0_SHIFT	(12)
#define S5P_CLKDIV0_SECSS_MASK	(0x7<<16)
#define S5P_CLKDIV0_SECSS_SHIFT	(16)

/* CLKDIV1 */
#define S5P_CLKDIV1_AM_MASK	(0x7<<0)
#define S5P_CLKDIV1_AM_SHIFT	(0)
#define S5P_CLKDIV1_MPLL_MASK	(0x3<<4)
#define S5P_CLKDIV1_MPLL_SHIFT	(4)
#define S5P_CLKDIV1_MPLL2_MASK	(0x1<<8)
#define S5P_CLKDIV1_MPLL2_SHIFT	(8)
#define S5P_CLKDIV1_D1_MASK	(0x7<<12)
#define S5P_CLKDIV1_D1_SHIFT	(12)
#define S5P_CLKDIV1_PCLKD1_MASK	(0x7<<16)
#define S5P_CLKDIV1_PCLKD1_SHIFT	(16)
#define S5P_CLKDIV1_ONENAND_MASK	(0x3<<20)
#define S5P_CLKDIV1_ONENAND_SHIFT	(20)
#define S5P_CLKDIV1_CAM_MASK	(0x1F<<24)
#define S5P_CLKDIV1_CAM_SHIFT	(24)

/* CLKDIV2 */
#define S5P_CLKDIV2_UART_MASK	(0x7<<0)
#define S5P_CLKDIV2_UART_SHIFT	(0)
#define S5P_CLKDIV2_SPI0_MASK	(0xf<<4)
#define S5P_CLKDIV2_SPI0_SHIFT	(4)
#define S5P_CLKDIV2_SPI1_MASK	(0xf<<8)
#define S5P_CLKDIV2_SPI1_SHIFT	(8)
#define S5P_CLKDIV2_SPI2_MASK	(0xf<<12)
#define S5P_CLKDIV2_SPI2_SHIFT	(12)
#define S5P_CLKDIV2_IRDA_MASK	(0xf<<16)
#define S5P_CLKDIV2_IRDA_SHIFT	(16)
#define S5P_CLKDIV2_UHOST_MASK	(0xf<<20)
#define S5P_CLKDIV2_UHOST_SHIFT	(20)

/* CLKDIV3 */
#define S5P_CLKDIV3_MMC0_MASK	(0xf<<0)
#define S5P_CLKDIV3_MMC0_SHIFT	(0)
#define S5P_CLKDIV3_MMC1_MASK	(0xf<<4)
#define S5P_CLKDIV3_MMC1_SHIFT	(4)
#define S5P_CLKDIV3_MMC2_MASK	(0xf<<8)
#define S5P_CLKDIV3_MMC2_SHIFT	(8)
#define S5P_CLKDIV3_LCD_MASK	(0xf<<12)
#define S5P_CLKDIV3_LCD_SHIFT	(12)
#define S5P_CLKDIV3_FIMC0_MASK	(0xf<<16)
#define S5P_CLKDIV3_FIMC0_SHIFT	(16)
#define S5P_CLKDIV3_FIMC1_MASK	(0xf<<20)
#define S5P_CLKDIV3_FIMC1_SHIFT	(20)
#define S5P_CLKDIV3_FIMC2_MASK	(0xf<<24)
#define S5P_CLKDIV3_FIMC2_SHIFT	(24)
#define S5P_CLKDIV3_HDMI_MASK	(0xf<<28)
#define S5P_CLKDIV3_HDMI_SHIFT	(28)

/* CLKDIV4 */
#define S5P_CLKDIV4_PWI_MASK	(0x7<<0)
#define S5P_CLKDIV4_PWI_SHIFT	(0)
#define S5P_CLKDIV4_HCLKD2_MASK	(0x7<<4)
#define S5P_CLKDIV4_HCLKD2_SHIFT	(4)
#define S5P_CLKDIV4_I2SD2_MASK	(0xf<<8)
#define S5P_CLKDIV4_I2SD2_SHIFT	(8)
#define S5P_CLKDIV4_AUDIO0_MASK	(0xf<<12)
#define S5P_CLKDIV4_AUDIO0_SHIFT	(12)
#define S5P_CLKDIV4_AUDIO1_MASK	(0xf<<16)
#define S5P_CLKDIV4_AUDIO1_SHIFT	(16)
#define S5P_CLKDIV4_AUDIO2_MASK	(0xf<<20)
#define S5P_CLKDIV4_AUDIO2_SHIFT	(20)


/* HCLKD0/PCLKD0 Clock Gate 0 Registers */
#define S5P_CLKGATE_D00_INTC	(1<<0)
#define S5P_CLKGATE_D00_TZIC	(1<<1)
#define S5P_CLKGATE_D00_CFCON	(1<<2)
#define S5P_CLKGATE_D00_MDMA	(1<<3)
#define S5P_CLKGATE_D00_G2D	(1<<4)
#define S5P_CLKGATE_D00_SECSS	(1<<5)
#define S5P_CLKGATE_D00_CSSYS	(1<<6)

/* HCLKD0/PCLKD0 Clock Gate 1 Registers */
#define S5P_CLKGATE_D01_DMC	(1<<0)
#define S5P_CLKGATE_D01_SROMC	(1<<1)
#define S5P_CLKGATE_D01_ONENAND	(1<<2)
#define S5P_CLKGATE_D01_NFCON	(1<<3)
#define S5P_CLKGATE_D01_INTMEM	(1<<4)
#define S5P_CLKGATE_D01_EBI	(1<<5)

/* PCLKD0 Clock Gate 2 Registers */
#define S5P_CLKGATE_D02_SECKEY	(1<<1)
#define S5P_CLKGATE_D02_SDM	(1<<2)

/* HCLKD1/PCLKD1 Clock Gate 0 Registers */
#define S5P_CLKGATE_D10_PDMA0	(1<<0)
#define S5P_CLKGATE_D10_PDMA1	(1<<1)
#define S5P_CLKGATE_D10_UHOST	(1<<2)
#define S5P_CLKGATE_D10_UOTG	(1<<3)
#define S5P_CLKGATE_D10_MIF	(1<<4)
#define S5P_CLKGATE_D10_HSMMC0	(1<<5)
#define S5P_CLKGATE_D10_HSMMC1	(1<<6)
#define S5P_CLKGATE_D10_HSMMC2	(1<<7)

/* HCLKD1/PCLKD1 Clock Gate 1 Registers */
#define S5P_CLKGATE_D11_LCD	(1<<0)
#define S5P_CLKGATE_D11_ROTAT	(1<<1)
#define S5P_CLKGATE_D11_FIMC0	(1<<2)
#define S5P_CLKGATE_D11_FIMC1	(1<<3)
#define S5P_CLKGATE_D11_FIMC2	(1<<4)
#define S5P_CLKGATE_D11_JPEG	(1<<5)
#define S5P_CLKGATE_D11_DSI	(1<<6)
#define S5P_CLKGATE_D11_CSI	(1<<7)
#define S5P_CLKGATE_D11_G3D	(1<<8)

/* HCLKD1/PCLKD1 Clock Gate 2 Registers */
#define S5P_CLKGATE_D12_TV	(1<<0)
#define S5P_CLKGATE_D12_VP	(1<<1)
#define S5P_CLKGATE_D12_MIXER	(1<<2)
#define S5P_CLKGATE_D12_HDMI	(1<<3)
#define S5P_CLKGATE_D12_MFC	(1<<4)

/* HCLKD1/PCLKD1 Clock Gate 3 Registers */
#define S5P_CLKGATE_D13_CHIPID	(1<<0)
#define S5P_CLKGATE_D13_GPIO	(1<<1)
#define S5P_CLKGATE_D13_APC	(1<<2)
#define S5P_CLKGATE_D13_IEC	(1<<3)
#define S5P_CLKGATE_D13_PWM	(1<<6)
#define S5P_CLKGATE_D13_SYSTIME	(1<<7)
#define S5P_CLKGATE_D13_WDT	(1<<8)
#define S5P_CLKGATE_D13_RTC	(1<<9)

/* HCLKD1/PCLKD1 Clock Gate 4 Registers */
#define S5P_CLKGATE_D14_UART0	(1<<0)
#define S5P_CLKGATE_D14_UART1	(1<<1)
#define S5P_CLKGATE_D14_UART2	(1<<2)
#define S5P_CLKGATE_D14_UART3	(1<<3)
#define S5P_CLKGATE_D14_IIC	(1<<4)
#define S5P_CLKGATE_D14_HDMI	(1<<5)
#define S5P_CLKGATE_D14_SPI0	(1<<6)
#define S5P_CLKGATE_D14_SPI1	(1<<7)
#define S5P_CLKGATE_D14_SPI2	(1<<8)
#define S5P_CLKGATE_D14_IRDA	(1<<9)
#define S5P_CLKGATE_D14_CCAN0	(1<<10)
#define S5P_CLKGATE_D14_CCAN1	(1<<11)
#define S5P_CLKGATE_D14_HSITX	(1<<12)
#define S5P_CLKGATE_D14_HSIRX	(1<<13)

/* HCLKD1/PCLKD1 Clock Gate 5 Registers */
#define S5P_CLKGATE_D15_IIS0	(1<<0)
#define S5P_CLKGATE_D15_IIS1	(1<<1)
#define S5P_CLKGATE_D15_IIS2	(1<<2)
#define S5P_CLKGATE_D15_AC97	(1<<3)
#define S5P_CLKGATE_D15_PCM0	(1<<4)
#define S5P_CLKGATE_D15_PCM1	(1<<5)
#define S5P_CLKGATE_D15_SPDIF	(1<<6)
#define S5P_CLKGATE_D15_TSADC	(1<<7)
#define S5P_CLKGATE_D15_KEYIF	(1<<8)
#define S5P_CLKGATE_D15_CG	(1<<9)

/* HCLKD2 Clock Gate 0 Registers */
#define S5P_CLKGATE_D20_HCLKD2	(1<<0)
#define S5P_CLKGATE_D20_I2SD2	(1<<1)

#endif /* _PLAT_REGS_CLOCK_H */
