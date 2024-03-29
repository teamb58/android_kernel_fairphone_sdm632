/*
Copyright (c) 2017, The Linux Foundation. All rights reserved.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License version 2 and
only version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*
*/

#include <linux/kernel.h>
#include <linux/module.h>
#include "audio_utils.h"

static int __init audio_native_init(void)
{
	aac_in_init();
	amrnb_in_init();
	amrwb_in_init();
	audio_aac_init();
#ifdef ALAC_SUPPORTED
	audio_alac_init();
#endif
	audio_amrnb_init();
	audio_amrwb_init();
	audio_amrwbplus_init();
	audio_ape_init();
	audio_evrc_init();
	audio_g711alaw_init();
	audio_g711mlaw_init();
	audio_effects_init();
	audio_mp3_init();
	audio_multiaac_init();
	audio_qcelp_init();
	audio_wma_init();
	audio_wmapro_init();
	evrc_in_init();
	g711alaw_in_init();
	g711mlaw_in_init();
	qcelp_in_init();
	return 0;
}

static void __exit audio_native_exit(void)
{
	aac_in_exit();
	amrnb_in_exit();
	amrwb_in_exit();
	audio_aac_exit();
#ifdef ALAC_SUPPORTED
	audio_alac_exit();
#endif
	audio_amrnb_exit();
	audio_amrwb_exit();
	audio_amrwbplus_exit();
	audio_ape_exit();
	audio_evrc_exit();
	audio_g711alaw_exit();
	audio_g711mlaw_exit();
	audio_effects_exit();
	audio_mp3_exit();
	audio_multiaac_exit();
	audio_qcelp_exit();
	audio_wma_exit();
	audio_wmapro_exit();
	evrc_in_exit();
	g711alaw_in_exit();
	g711mlaw_in_exit();
	qcelp_in_exit();
}

module_init(audio_native_init);
module_exit(audio_native_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Native Encoder/Decoder module");
