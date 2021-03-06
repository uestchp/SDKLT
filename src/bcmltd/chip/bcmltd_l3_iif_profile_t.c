/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/l3/L3_IIF_PROFILE.tbl.ltl
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
static const bcmltd_field_rep_t bcmltd_l3_iif_profile_t_fields[] = {
    {
        .name  = bcmltd_strpool_l3_iif_profile_id,  /* L3_IIF_PROFILE_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Index into L3 Ingress Interface Profile Table.",
    },
    {
        .name  = bcmltd_strpool_allow_global_route,  /* ALLOW_GLOBAL_ROUTE */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable using global routes if no VRF-specific route is found.",
    },
    {
        .name  = bcmltd_strpool_phb_ing_ip_dscp_to_int_pri_remap_id,  /* PHB_ING_IP_DSCP_TO_INT_PRI_REMAP_ID */
        .flags = 0,
        .width = 8,
        .depth = 0,
        .desc = "PHB_ING_IP_DSCP_TO_INT_PRI_REMAP logical table index. Used to map packet DSCP\n to internal PRI and CNG. When value is 127, do not trust DSCP field.\n",
    },
    {
        .name  = bcmltd_strpool_urpf_default_route_check,  /* URPF_DEFAULT_ROUTE_CHECK */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable unicast RPF check for default routes.",
    },
    {
        .name  = bcmltd_strpool_icmp_redirect_pkt_to_cpu,  /* ICMP_REDIRECT_PKT_TO_CPU */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable to perform ICMP redirect checks. If enabled, L3 routed\n packets are copied to the CPU if the route necessitates an\n ICMP redirect.\n",
    },
    {
        .name  = bcmltd_strpool_ipv6_mc,  /* IPV6_MC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L3 forwarding for IPv6 multicast packets.",
    },
    {
        .name  = bcmltd_strpool_ipv4_mc,  /* IPV4_MC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L3 forwarding for IPv4 multicast packets.",
    },
    {
        .name  = bcmltd_strpool_ipv6_uc,  /* IPV6_UC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L3 forwarding for IPv6 unicast packets.",
    },
    {
        .name  = bcmltd_strpool_ipv4_uc,  /* IPV4_UC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L3 forwarding for IPv4 unicast packets.",
    },
    {
        .name  = bcmltd_strpool_ipv4_unknown_mc_to_cpu,  /* IPV4_UNKNOWN_MC_TO_CPU */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable sending of unknown IPv4 multicast packets to CPU.",
    },
    {
        .name  = bcmltd_strpool_ipv6_unknown_mc_to_cpu,  /* IPV6_UNKNOWN_MC_TO_CPU */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable sending of unknown IPv6 multicast packets to CPU.",
    },
    {
        .name  = bcmltd_strpool_unresolved_sip_to_cpu,  /* UNRESOLVED_SIP_TO_CPU */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable sending of IP packets with unresolved\n L3 source address to CPU.\n",
    },
    {
        .name  = bcmltd_strpool_ipv6_routing_hdr_type_0_drop,  /* IPV6_ROUTING_HDR_TYPE_0_DROP */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable drop of IPv6 packets with type 0 routing header.",
    },
    {
        .name  = bcmltd_strpool_l3_override_ip_mc_do_vlan,  /* L3_OVERRIDE_IP_MC_DO_VLAN */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable override of the IPMC_USE_L3_IIF field in the\n PORT logical table in the IP multicast lookup key.\n If set, the L3_IIF will not be part of the lookup key.\n",
    },
    {
        .name  = bcmltd_strpool_ip_unknown_mc_as_l2_mc,  /* IP_UNKNOWN_MC_AS_L2_MC */
        .flags = 0,
        .width = 1,
        .depth = 0,
        .desc = "Enable L2 multicast of unknown IP multicast packets.",
    },
};
const bcmltd_table_rep_t bcmltd_l3_iif_profile_t = {
    .name = bcmltd_strpool_l3_iif_profile, /* L3_IIF_PROFILE */
    .flags = 0,
    .fields = 15,
    .field = bcmltd_l3_iif_profile_t_fields,
    .desc = "",
};
