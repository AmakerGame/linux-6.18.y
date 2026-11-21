/* SPDX-License-Identifier: (GPL-2.0-only OR MIT) */
/*
 * Power domain IDs of the Amlogic SC2 (S905X4) secure power controller.
 * The ID is also the index passed to the secure monitor.
 */

#ifndef _DT_BINDINGS_POWER_AMLOGIC_SC2_PWRC_H
#define _DT_BINDINGS_POWER_AMLOGIC_SC2_PWRC_H

#define PWRC_SC2_DSP_ID		0
#define PWRC_SC2_DOS_HCODEC_ID	1
#define PWRC_SC2_DOS_HEVC_ID	2
#define PWRC_SC2_DOS_VDEC_ID	3
#define PWRC_SC2_DOS_WAVE_ID	4
#define PWRC_SC2_VPU_HDMI_ID	5
#define PWRC_SC2_USB_COMB_ID	6
#define PWRC_SC2_PCIE_ID	7
#define PWRC_SC2_GE2D_ID	8
#define PWRC_SC2_ETH_ID		9
#define PWRC_SC2_AUDIO_ID	10

#endif
