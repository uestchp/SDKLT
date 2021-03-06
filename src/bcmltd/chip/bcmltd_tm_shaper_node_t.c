/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/tm/TM_SHAPER_NODE.tbl.ltl
 * Edits to this file will be lost when it is regenerated.
 *
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
 */
#include <bcmltd/bcmltd_internal.h>
#include <bcmltd/chip/bcmltd_common_enumpool.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_tm_shaper_node_t_fields[] = {
    {
        .name  = bcmltd_strpool_port_id,  /* PORT_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Logical port ID.",
    },
    {
        .name  = bcmltd_strpool_sched_node,  /* SCHED_NODE */
        .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .num_sym = 2,
        .sym = bcmltd_common_tm_sched_node_t_enum,
        .desc = "Scheduler node type in the hierarchy.",
    },
    {
        .name  = bcmltd_strpool_tm_scheduler_node_id,  /* TM_SCHEDULER_NODE_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "TM_SCHEDULER_NODE logical table index.",
    },
    {
        .name  = bcmltd_strpool_shaping_mode,  /* SHAPING_MODE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .num_sym = 2,
        .sym = bcmltd_common_tm_shaping_mode_t_enum,
        .desc = "Traffic shaping mode.",
    },
    {
        .name  = bcmltd_strpool_burst_size_auto,  /* BURST_SIZE_AUTO */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enables automatic calculation of burst size. When this field is enabled\n the minimum and maximum burst sizes are calculated internally and\n are reflected in the MAX_BURST_SIZE_KBITS_OPER and\n MIN_BURST_SIZE_KBITS_OPER fields.\n",
    },
    {
        .name  = bcmltd_strpool_max_bandwidth_kbps,  /* MAX_BANDWIDTH_KBPS */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Maximum bandwidth in kilobits per second.",
    },
    {
        .name  = bcmltd_strpool_max_bandwidth_kbps_oper,  /* MAX_BANDWIDTH_KBPS_OPER */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Operational maximum bandwidth. This is a read-only field which\n reflects the actual configured MAX_BANDWIDTH_KBPS value as function\n of REFRESH_RATE and GRANULARITY.\n",
    },
    {
        .name  = bcmltd_strpool_min_bandwidth_kbps,  /* MIN_BANDWIDTH_KBPS */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Minimum bandwidth in kilobits per second.",
    },
    {
        .name  = bcmltd_strpool_min_bandwidth_kbps_oper,  /* MIN_BANDWIDTH_KBPS_OPER */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "Operational minimum bandwidth. This is a read-only field which\n reflects the actual configured MIN_BANDWIDTH_KBPS value as a\n function of REFRESH_RATE and GRANULARITY.\n",
    },
    {
        .name  = bcmltd_strpool_max_burst_size_kbits,  /* MAX_BURST_SIZE_KBITS */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Maximum burst size in kilobits. Valid only if BURST_SIZE_AUTO\n is disabled.\n",
    },
    {
        .name  = bcmltd_strpool_max_burst_size_kbits_oper,  /* MAX_BURST_SIZE_KBITS_OPER */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Operational maximum burst size. This is a read-only field which\n reflects the actual configured MAX_BURST_SIZE value as a function\n of the MAX_BANDWIDTH_KBPS and SHAPING_MODE fields.\n Valid only if BURST_SIZE_AUTO is enabled.\n",
    },
    {
        .name  = bcmltd_strpool_min_burst_size_kbits,  /* MIN_BURST_SIZE_KBITS */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Minimum burst size in kilobits. Valid only if BURST_SIZE_AUTO\n is disabled.\n",
    },
    {
        .name  = bcmltd_strpool_min_burst_size_kbits_oper,  /* MIN_BURST_SIZE_KBITS_OPER */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Operational minimum burst size. This is a read-only field which\n reflects the actual configured MIN_BURST_SIZE value as a function\n of the MIN_BANDWIDTH_KBPS and SHAPING_MODE fields.\n Valid only if BURST_SIZE_AUTO is enabled.\n",
    },
    {
        .name  = bcmltd_strpool_operational_state,  /* OPERATIONAL_STATE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .num_sym = 7,
        .sym = bcmltd_common_tm_entry_state_t_enum,
        .desc = "Read-only field which reflects the operational state of\n the entry. The OPERATIONAL_STATE of the entry becomes invalid if the mapping\n between PORT_ID to physical port is missing.\n",
    },
};
const bcmltd_table_rep_t bcmltd_tm_shaper_node_t = {
    .name = bcmltd_strpool_tm_shaper_node, /* TM_SHAPER_NODE */
    .flags = 0,
    .fields = 14,
    .field = bcmltd_tm_shaper_node_t_fields,
    .desc = "The TM_SHAPER_NODE table specifies shaper values for scheduling nodes\n associated with non-CPU ports.\n",
};
