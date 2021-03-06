/**********************************************************************************
**********************************************************************************
*                                                                                *
*  Revision      :  $Id: srds_api_uc_common_public.h 1272 2015-11-24 17:00:22Z jgaither $  *
*                                                                                *
*  Description   :  Defines and Enumerations required by Serdes ucode            *
*                                                                                *
* Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
* Broadcom Limited and/or its subsidiaries.
* 
* Broadcom Switch Software License
* 
* This license governs the use of the accompanying Broadcom software. Your 
* use of the software indicates your acceptance of the terms and conditions 
* of this license. If you do not agree to the terms and conditions of this 
* license, do not use the software.
* 1. Definitions
*    "Licensor" means any person or entity that distributes its Work.
*    "Software" means the original work of authorship made available under 
*    this license.
*    "Work" means the Software and any additions to or derivative works of 
*    the Software that are made available under this license.
*    The terms "reproduce," "reproduction," "derivative works," and 
*    "distribution" have the meaning as provided under U.S. copyright law.
*    Works, including the Software, are "made available" under this license 
*    by including in or with the Work either (a) a copyright notice 
*    referencing the applicability of this license to the Work, or (b) a copy 
*    of this license.
* 2. Grant of Copyright License
*    Subject to the terms and conditions of this license, each Licensor 
*    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
*    copyright license to reproduce, prepare derivative works of, publicly 
*    display, publicly perform, sublicense and distribute its Work and any 
*    resulting derivative works in any form.
* 3. Grant of Patent License
*    Subject to the terms and conditions of this license, each Licensor 
*    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
*    patent license to make, have made, use, offer to sell, sell, import, and 
*    otherwise transfer its Work, in whole or in part. This patent license 
*    applies only to the patent claims licensable by Licensor that would be 
*    infringed by Licensor's Work (or portion thereof) individually and 
*    excluding any combinations with any other materials or technology.
*    If you institute patent litigation against any Licensor (including a 
*    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
*    you allege are infringed by any Work, then your patent license from such 
*    Licensor to the Work shall terminate as of the date such litigation is 
*    filed.
* 4. Redistribution
*    You may reproduce or distribute the Work only if (a) you do so under 
*    this License, (b) you include a complete copy of this License with your 
*    distribution, and (c) you retain without modification any copyright, 
*    patent, trademark, or attribution notices that are present in the Work.
* 5. Derivative Works
*    You may specify that additional or different terms apply to the use, 
*    reproduction, and distribution of your derivative works of the Work 
*    ("Your Terms") only if (a) Your Terms provide that the limitations of 
*    Section 7 apply to your derivative works, and (b) you identify the 
*    specific derivative works that are subject to Your Terms. 
*    Notwithstanding Your Terms, this license (including the redistribution 
*    requirements in Section 4) will continue to apply to the Work itself.
* 6. Trademarks
*    This license does not grant any rights to use any Licensor's or its 
*    affiliates' names, logos, or trademarks, except as necessary to 
*    reproduce the notices described in this license.
* 7. Limitations
*    Platform. The Work and any derivative works thereof may only be used, or 
*    intended for use, with a Broadcom switch integrated circuit.
*    No Reverse Engineering. You will not use the Work to disassemble, 
*    reverse engineer, decompile, or attempt to ascertain the underlying 
*    technology of a Broadcom switch integrated circuit.
* 8. Termination
*    If you violate any term of this license, then your rights under this 
*    license (including the license grants of Sections 2 and 3) will 
*    terminate immediately.
* 9. Disclaimer of Warranty
*    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
*    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
*    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
*    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
*    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
* 10. Limitation of Liability
*    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
*    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
*    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
*    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
*    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
*    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
*    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
*    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
*    THE POSSIBILITY OF SUCH DAMAGES.
* 
*                                                           *
*  No portions of this material may be reproduced in any form without            *
*  the written permission of:                                                    *
*      Broadcom Corporation                                                      *
*      5300 California Avenue                                                    *
*      Irvine, CA  92617                                                         *
*                                                                                *
*  All information contained in this document is Broadcom Corporation            *
*  company private proprietary, and trade secret.                                *
 */

/** @file srds_api_uc_common.h
 * Defines and Enumerations shared by Serdes API and Microcode
 */

#ifndef SRDS_API_UC_COMMON_PUBLIC_H
#define SRDS_API_UC_COMMON_PUBLIC_H

/*-----------------------------*/
/*  Generic Serdes items first */
/*-----------------------------*/


/** DSC_STATES Enum */
enum srds_dsc_state_enum {
	SRDS_DSC_STATE_UNKNOWN      = 255,
	SRDS_DSC_STATE_RESET        = 0,
	SRDS_DSC_STATE_RESTART      = 1,
	SRDS_DSC_STATE_CONFIG       = 2,
	SRDS_DSC_STATE_WAIT_FOR_SIG = 3,
	SRDS_DSC_STATE_ACQ_CDR      = 4,
	SRDS_DSC_STATE_CDR_SETTLE   = 5,
	SRDS_DSC_STATE_HW_TUNE      = 6,
	SRDS_DSC_STATE_UC_TUNE      = 7,
	SRDS_DSC_STATE_MEASURE      = 8,
	SRDS_DSC_STATE_DONE         = 9
};

/** SERDES_PMD_UC_COMMANDS Enum */
enum srds_pmd_uc_cmd_enum {
	SRDS_CMD_NULL                =  0,
	SRDS_CMD_UC_CTRL             =  1,
	SRDS_CMD_HEYE_OFFSET         =  2,
	SRDS_CMD_VEYE_OFFSET         =  3,
	SRDS_CMD_UC_DBG              =  4,
	SRDS_CMD_DIAG_EN             =  5,
	SRDS_CMD_READ_UC_LANE_BYTE   =  6,
	SRDS_CMD_WRITE_UC_LANE_BYTE  =  7,
	SRDS_CMD_READ_UC_CORE_BYTE   =  8,
	SRDS_CMD_WRITE_UC_CORE_BYTE  =  9,
	SRDS_CMD_READ_UC_LANE_WORD   = 10,
	SRDS_CMD_WRITE_UC_LANE_WORD  = 11,
	SRDS_CMD_READ_UC_CORE_WORD   = 12,
	SRDS_CMD_WRITE_UC_CORE_WORD  = 13,
	SRDS_CMD_EVENT_LOG_CTRL      = 14,
	SRDS_CMD_EVENT_LOG_READ      = 15,
	SRDS_CMD_CAPTURE_BER_START   = 16,
	SRDS_CMD_READ_DIAG_DATA_BYTE = 17,
	SRDS_CMD_READ_DIAG_DATA_WORD = 18,
	SRDS_CMD_CAPTURE_BER_END     = 19,
	SRDS_CMD_CALC_CRC            = 20,
	SRDS_CMD_FREEZE_STEADY_STATE = 21,
	SRDS_CMD_TDT_EN              = 22
};
/** SERDES_UC_CTRL_COMMANDS Enum */
enum srds_pmd_uc_ctrl_cmd_enum {
	SRDS_CMD_UC_CTRL_STOP_GRACEFULLY   = 0,
	SRDS_CMD_UC_CTRL_STOP_IMMEDIATE    = 1,
	SRDS_CMD_UC_CTRL_RESUME            = 2
};

/** SERDES_UC_DIAG_COMMANDS Enum */
enum srds_pmd_uc_diag_cmd_enum {
	SRDS_CMD_UC_DIAG_DISABLE         = 3,
	SRDS_CMD_UC_DIAG_PASSIVE         = 1,
	SRDS_CMD_UC_DIAG_DENSITY         = 2,
	SRDS_CMD_UC_DIAG_START_VSCAN_EYE = 4,
	SRDS_CMD_UC_DIAG_START_HSCAN_EYE = 5,
	SRDS_CMD_UC_DIAG_GET_EYE_SAMPLE  = 6
};

/** SERDES_EVENT_LOG_READ Enum */
enum srds_pmd_event_rd_cmd_enum {
	SRDS_CMD_EVENT_LOG_READ_START      = 0,
	SRDS_CMD_EVENT_LOG_READ_NEXT       = 1,
	SRDS_CMD_EVENT_LOG_READ_DONE       = 2
};

/** SERDES_UC_DBG_COMMANDS Enum */
enum srds_pmd_uc_dbg_cmd_enum {
	SRDS_CMD_UC_DBG_DIE_TEMP        = 0,
	SRDS_CMD_UC_DBG_TIMESTAMP       = 1,
	SRDS_CMD_UC_DBG_LANE_IDX        = 2,
	SRDS_CMD_UC_DBG_LANE_TIMER      = 3
};

/** Media type Enum */
enum srds_media_type_enum {
	SRDS_MEDIA_TYPE_PCB_TRACE_BACKPLANE = 0,
	SRDS_MEDIA_TYPE_COPPER_CABLE        = 1,
	SRDS_MEDIA_TYPE_OPTICS              = 2,
	SRDS_MEDIA_TYPE_OPTICS_ZR           = 3
};

/** DIAG_BER mode settings **/
enum srds_diag_ber_mode_enum {
	SRDS_DIAG_BER_POS  = 0,
	SRDS_DIAG_BER_NEG  = 1,
	SRDS_DIAG_BER_VERT = 0,
	SRDS_DIAG_BER_HORZ = 1 << 1,
	SRDS_DIAG_BER_PASS = 0,
	SRDS_DIAG_BER_INTR = 1 << 2,
	SRDS_DIAG_BER_P1_NARROW = 1 << 3,
	SRDS_DIAG_BER_P1_WIDE = 0,
	SRDS_DIAG_BER_FAST = 1 << 6

};

/** TDT pattern Enum */
enum srds_tdt_pattern_enum {
	SRDS_TDT_PAT_40    = 0,
	SRDS_TDT_PAT_80    = 1,
	SRDS_TDT_PAT_120   = 2,
	SRDS_TDT_PAT_160   = 3,
	SRDS_TDT_PAT_200   = 4,
	SRDS_TDT_PAT_240   = 5,
	SRDS_TDT_PAT_PRBS7 = 6,
	SRDS_TDT_PAT_PRBS9 = 7
};

/** SERDES_TDT_REQUEST Enum */
enum srds_pmd_tdt_req_enum {
	SRDS_TDT_NULL           = 0,
	SRDS_TDT_START          = 1,
	SRDS_TDT_START_INTERNAL = 2,
	SRDS_TDT_STEP           = 3,
	SRDS_TDT_READ           = 4,
	SRDS_TDT_DISABLE        = 5
};

typedef uint8_t float8_t;

/*------------------------------*/
/** Serdes Event Code Structure */
/*------------------------------*/

/** Core User Control Event Log Level **/
#define USR_CTRL_CORE_EVENT_LOG_UPTO_FULL (0xFF)

#define event_code_t uint8_t
#define log_level_t  uint8_t

/** Event Log Code Enum */
enum srds_event_code_enum {
	SRDS_EVENT_CODE_UNKNOWN = 0,
	SRDS_EVENT_CODE_ENTRY_TO_DSC_RESET,
	SRDS_EVENT_CODE_RELEASE_USER_RESET,
	SRDS_EVENT_CODE_EXIT_FROM_DSC_RESET,
	SRDS_EVENT_CODE_ENTRY_TO_CORE_RESET,
	SRDS_EVENT_CODE_RELEASE_USER_CORE_RESET,
	SRDS_EVENT_CODE_ACTIVE_RESTART_CONDITION,
	SRDS_EVENT_CODE_EXIT_FROM_RESTART,
	SRDS_EVENT_CODE_WRITE_TR_COARSE_LOCK,
	SRDS_EVENT_CODE_CL72_READY_FOR_COMMAND,
	SRDS_EVENT_CODE_EACH_WRITE_TO_CL72_TX_CHANGE_REQUEST,
	SRDS_EVENT_CODE_FRAME_LOCK,
	SRDS_EVENT_CODE_LOCAL_RX_TRAINED,
	SRDS_EVENT_CODE_DSC_LOCK,
	SRDS_EVENT_CODE_FIRST_RX_PMD_LOCK,
	SRDS_EVENT_CODE_PMD_RESTART_FROM_CL72_CMD_INTF_TIMEOUT,
	SRDS_EVENT_CODE_LP_RX_READY,
	SRDS_EVENT_CODE_STOP_EVENT_LOG,
	SRDS_EVENT_CODE_GENERAL_EVENT_0,
	SRDS_EVENT_CODE_GENERAL_EVENT_1,
	SRDS_EVENT_CODE_GENERAL_EVENT_2,
	SRDS_EVENT_CODE_ERROR_EVENT,
	SRDS_EVENT_CODE_NUM_TIMESTAMP_WRAPAROUND_MAXOUT,
	SRDS_EVENT_CODE_RESTART_PMD_ON_CDR_LOCK_LOST,
	SRDS_EVENT_CODE_SM_STATUS_RESTART,
	SRDS_EVENT_CODE_CORE_PROGRAMMING,
	SRDS_EVENT_CODE_LANE_PROGRAMMING,
	SRDS_EVENT_CODE_RESTART_PMD_ON_CLOSE_EYE,
	SRDS_EVENT_CODE_RESTART_PMD_ON_DFE_TAP_CONFIG,
	SRDS_EVENT_CODE_CL72_AUTO_POLARITY_CHANGE,
	SRDS_EVENT_CODE_RESTART_FROM_CL72_MAX_TIMEOUT,
	SRDS_EVENT_CODE_CL72_LOCAL_TX_CHANGED,
	SRDS_EVENT_CODE_FIRST_WRITE_TO_CL72_TX_CHANGE_REQUEST,
	SRDS_EVENT_CODE_FRAME_UNLOCK,
	SRDS_EVENT_CODE_ENTRY_TO_CORE_PLL1_RESET,
	SRDS_EVENT_CODE_RELEASE_USER_CORE_PLL1_RESET,
	SRDS_EVENT_CODE_ACTIVE_WAIT_FOR_SIG,
	SRDS_EVENT_CODE_EXIT_FROM_WAIT_FOR_SIG,
	SRDS_EVENT_CODE_START_VGA_TUNING,
	SRDS_EVENT_CODE_START_FX_DFE_TUNING,
	SRDS_EVENT_CODE_START_PF_TUNING,
	SRDS_EVENT_CODE_START_EYE_MEAS_TUNING,
	SRDS_EVENT_CODE_START_MAIN_TAP_TUNING,
	SRDS_EVENT_CODE_START_FL_TAP_TUNING,
	SRDS_EVENT_CODE_EXIT_FROM_DSC_INIT,
	SRDS_EVENT_CODE_ENTRY_TO_DSC_INIT,
	SRDS_EVENT_CODE_DSC_PAUSE,
	SRDS_EVENT_CODE_DSC_UC_TUNE,
	SRDS_EVENT_CODE_DSC_DONE,
	SRDS_EVENT_CODE_RESTART_PMD_ON_SHORT_CHANNEL_DETECTED,

	/* !!! add new event code above this line !!! */
	SRDS_EVENT_CODE_MAX,
	SRDS_EVENT_CODE_TIMESTAMP_WRAP_AROUND = 255
};

/** uC Event Error Enum */
enum srds_event_err_code_enum {
	SRDS_GENERIC_UC_ERROR = 0,
	SRDS_INVALID_REENTRY_ID,
	SRDS_DSC_CONFIG_INVALID_REENTRY_ID,
	SRDS_INVALID_OTP_CONFIG,
	SRDS_INVALID_CORE_TEMP_IDX
};


#endif
