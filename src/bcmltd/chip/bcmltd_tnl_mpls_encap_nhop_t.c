/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/tnl/TNL_MPLS_ENCAP_NHOP.tbl.ltl
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
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_tnl_mpls_encap_nhop_t_fields[] = {
    {
        .name  = bcmltd_strpool_nhop_id,  /* NHOP_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 16,
        .depth = 0,
        .desc = "Index into the TNL_MPLS_ENCAP_NHOP table.",
    },
    {
        .name  = bcmltd_strpool_modid,  /* MODID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Destination module ID to reach the next hop.",
    },
    {
        .name  = bcmltd_strpool_modport,  /* MODPORT */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Destination logical port to reach the next hop.",
    },
    {
        .name  = bcmltd_strpool_is_trunk,  /* IS_TRUNK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to indicate that the next hop is a trunk (LAG) port.",
    },
    {
        .name  = bcmltd_strpool_trunk_id,  /* TRUNK_ID */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Trunk group identifier. Applicable only if IS_TRUNK is enabled.",
    },
    {
        .name  = bcmltd_strpool_drop,  /* DROP */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to drop the packet.",
    },
    {
        .name  = bcmltd_strpool_copy_to_cpu,  /* COPY_TO_CPU */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to copy packet to CPU.",
    },
    {
        .name  = bcmltd_strpool_l3_eif_id,  /* L3_EIF_ID */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "L3_EIF logical table index.",
    },
    {
        .name  = bcmltd_strpool_tnl_mpls_dst_mac_id,  /* TNL_MPLS_DST_MAC_ID */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Index into the TNL_MPLS_DST_MAC table to get the MAC address to be\n used for destination MAC address replacement.\n",
    },
    {
        .name  = bcmltd_strpool_tnl_mpls_vpn_encap_id,  /* TNL_MPLS_VPN_ENCAP_ID */
        .flags = 0,
        .width = 16,
        .depth = 0,
        .desc = "Index into the TNL_MPLS_VPN_ENCAP logical table.",
    },
    {
        .name  = bcmltd_strpool_flex_ctr_grp_id,  /* FLEX_CTR_GRP_ID */
        .flags = 0,
        .width = 32,
        .depth = 0,
        .desc = "FLEX_CTR_GRP logical table index.",
    },
    {
        .name  = bcmltd_strpool_class_id,  /* CLASS_ID */
        .flags = 0,
        .width = 12,
        .depth = 0,
        .desc = "Class ID for egress FP.",
    },
    {
        .name  = bcmltd_strpool_vpn_label,  /* VPN_LABEL */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to add MPLS VPN label.",
    },
    {
        .name  = bcmltd_strpool_label,  /* LABEL */
        .flags = 0,
        .width = 20,
        .depth = 0,
        .desc = "VPN label in the outgoing MPLS label stack.",
    },
    {
        .name  = bcmltd_strpool_label_ttl,  /* LABEL_TTL */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "VPN label TTL value.",
    },
    {
        .name  = bcmltd_strpool_exp_mode,  /* EXP_MODE */
        .flags = BCMLTD_FIELD_F_ENUM,
        .width = 32,
        .depth = 0,
        .desc = "Specifies how EXP value of the MPLS label stack will be determined.",
    },
    {
        .name  = bcmltd_strpool_label_exp,  /* LABEL_EXP */
        .flags = 0,
        .width = 3,
        .depth = 0,
        .desc = "EXP values to be set in the MPLS label stack.\n Applicable only if EXP_MODE == FIXED.\n",
    },
    {
        .name  = bcmltd_strpool_phb_egr_mpls_id,  /* PHB_EGR_MPLS_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "If EXP_MODE == MAP:\n EXP value for this label is derived from the\n PHB_EGR_MPLS_INT_PRI_TO_VPN_EXP  logical table index\n specified by PHB_EGR_MPLS_ID.\n If this is the outermost label, the 802.1p priority and CFI\n values for the outer VLAN tag are derived from the\n PHB_EGR_MPLS_INT_PRI_TO_L2_OTAG logical table index\n specified by PHB_EGR_MPLS_ID.\n\n If EXP_MODE == USE_INNER_LABEL:\n EXP value for this label is derived from the inner MPLS label.\n If there is no inner MPLS label, the LABEL_EXP value specified\n in this logical table is used as the EXP value.\n If this is the outermost label, the 802.1p priority and CFI\n values for the outer VLAN tag are derived from the\n PHB_EGR_MPLS_EXP_TO_L2_OTAG logical table index\n specified by PHB_EGR_MPLS_ID.\n\n If EXP_MODE == USE_SWAP_LABEL:\n EXP value for this label is derived from the last decapped or\n swapped MPLS label.  If this is the outermost label, the 802.1p\n priority and CFI values for the outer VLAN tag are derived from\n the PHB_EGR_MPLS_EXP_TO_L2_OTAG logical table index\n specified by PHB_EGR_MPLS_ID.\n",
    },
    {
        .name  = bcmltd_strpool_pri,  /* PRI */
        .flags = 0,
        .width = 3,
        .depth = 0,
        .desc = "DOT1P value for the outer L2 header.",
    },
    {
        .name  = bcmltd_strpool_cfi,  /* CFI */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "CFI value for the outer L2 header.",
    },
    {
        .name  = bcmltd_strpool_ecn_cng_to_mpls_exp_id,  /* ECN_CNG_TO_MPLS_EXP_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "ECN_CNG_TO_MPLS_EXP logical table index.",
    },
    {
        .name  = bcmltd_strpool_ecn_cng_to_mpls_exp_priority,  /* ECN_CNG_TO_MPLS_EXP_PRIORITY */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Specifies priority for ECN_CNG_TO_MPLS_EXP_ID from this table.\n Priority relative to PORT_SYSTEM.ECN_CNG_TO_MPLS_EXP_PRIORITY.\n",
    },
    {
        .name  = bcmltd_strpool_ecn_ip_to_mpls_exp_id,  /* ECN_IP_TO_MPLS_EXP_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "ECN_IP_TO_MPLS_EXP_NON_RESPONSIVE logical table index for\n non-responsive protocols or ECN_IP_TO_MPLS_EXP_RESPONSIVE\n logical table index for responsive protocols.\n",
    },
    {
        .name  = bcmltd_strpool_ecn_ip_to_mpls_exp_priority,  /* ECN_IP_TO_MPLS_EXP_PRIORITY */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "Specifies priority for ECN_IP_TO_MPLS_EXP_ID from this table.\n Priority relative to PORT_SYSTEM.ECN_IP_TO_MPLS_EXP_PRIORITY.\n",
    },
};
const bcmltd_table_rep_t bcmltd_tnl_mpls_encap_nhop_t = {
    .name = bcmltd_strpool_tnl_mpls_encap_nhop, /* TNL_MPLS_ENCAP_NHOP */
    .flags = BCMLTD_TABLE_F_TYPE_INDEX_ALLOC,
    .fields = 24,
    .field = bcmltd_tnl_mpls_encap_nhop_t_fields,
    .desc = "The TNL_MPLS_ENCAP_NHOP table is used to specify MPLS tunnel next-hop\n parameters for packets entering into the MPLS tunnel.\n",
};
