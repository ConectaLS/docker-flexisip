/* This -*- C -*- file is part of the Sofia-SIP package
 *
 * Copyright (C) 2005 Nokia Corporation.
 *
 * Contact: Pekka Pessi <pekka.pessi@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

/* libsofia-sip-ua/features/sofia-sip/sofia_features.h.  Generated from sofia_features.h.in by configure. */

/**@file sofia-sip/sofia_features.h
 * @brief Sofia-SIP Library Features
 *
 * Macros and string constants listing features supported or not supported
 * by sofia-sip-ua library.
 *
 * @author Pekka Pessi <Pekka.Pessi@nokia.com>
 *
 * @date Created: Wed Feb 14 17:09:44 2001 ppessi
 */

#ifndef SOFIA_SIP_FEATURES_H
/** Defined when <sofia-sip/sofia_features.h> has been included. */
#define SOFIA_SIP_FEATURES_H

/** Current Sofia version. @showinitializer */
#define SOFIA_SIP_VERSION  "1.13.40bc"
/** Current Sofia package name and version. @showinitializer */
#define SOFIA_SIP_NAME_VERSION   "sofia-sip-1.13.40bc"

#ifdef __cplusplus
extern "C" {
#endif

SOFIAPUBVAR char const * const sofia_sip_name_version;
SOFIAPUBVAR char const * sofia_sip_has_smime;
SOFIAPUBVAR char const * sofia_sip_has_tls;
SOFIAPUBVAR char const * sofia_sip_has_dtls;
SOFIAPUBVAR char const * sofia_sip_has_tls_sctp;
SOFIAPUBVAR char const * sofia_sip_has_sigcomp;
SOFIAPUBVAR char const * sofia_sip_has_stun;
SOFIAPUBVAR char const * sofia_sip_has_turn;
SOFIAPUBVAR char const * sofia_sip_has_upnp;

SOFIAPUBVAR char const * sofia_sip_has_sctp;
SOFIAPUBVAR char const * sofia_sip_has_ipv6;

#ifdef __cplusplus
}
#endif

#endif
