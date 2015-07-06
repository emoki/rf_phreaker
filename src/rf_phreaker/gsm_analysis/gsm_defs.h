#ifndef _GSM_DEFS_H
#define _GSM_DEFS_H

#define GSM_BITS_PER_SYMBOL				1
#define GSM_BITS_PER_BURST				148
#define GSM_BURST_LEN_BITS				156.25
#define GSM_BIT_RATE					(812500/3)
#define GSM_FCCH_FREQ_OFFSET_HZ			(GSM_BIT_RATE/4)
#define GSM_NUM_FCCH_BITS				148
#define GSM_NUM_SYNCTS_BITS				64
#define GSM_NUM_TAIL_BITS				3
#define GSM_NUM_TS						8
#define GSM_NUM_NORMTS_BITS				26
#define GSM_NUM_DUMMY_BITS				148
#define GSM_BITS_PER_FRAME				1250
#define GSM_FRAME_RATE					(5200.0/24.0)
#define GSM_FRAMES_PER_MINUTE			13000
#define GSM_SYNCTS_OFFSET				42
#define GSM_SYNC_CGI_FRAMES_OFFSET		4

#define RF_PHREAKER_MAX_DOPPLER				300
#define RF_PHREAKER_MAX_FREQ_DRIFT				1000
#define RF_PHREAKER_MAX_FREQ_OFFSET			(RF_PHREAKER_MAX_DOPPLER + RF_PHREAKER_MAX_FREQ_DRIFT)
#define RF_PHREAKER_SAMPLING_RATE_HZ			9750000
#define RF_PHREAKER_MIN_SW_DEC_FAC				9
#define RF_PHREAKER_MIN_HW_DEC_FAC				1

#define RF_PHREAKER_LOWEST_IF					-1800000
#define RF_PHREAKER_SAMPLES_PER_GSM_BIT		(RF_PHREAKER_SAMPLING_RATE_HZ / GSM_BIT_RATE)
#define RF_PHREAKER_SNAPSHOT_MAX_NUM_GSM_BITS	(13*GSM_BITS_PER_FRAME)
#define RF_PHREAKER_SNAPSHOT_MAX_NUM_SAMPLES	(RF_PHREAKER_SNAPSHOT_MAX_NUM_GSM_BITS * RF_PHREAKER_SAMPLES_PER_GSM_BIT)

#endif
