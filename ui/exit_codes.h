/** @file
 *
 * Definition of exit codes for programs.
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef __EXIT_CODES_H__
#define __EXIT_CODES_H__

/* Exit codes */
#define INVALID_OPTION               1
#define INVALID_INTERFACE            2
#define INVALID_FILE                 3
#define INVALID_FILTER               4
#define INVALID_CAPABILITY           5
#define IFACE_HAS_NO_LINK_TYPES      6
#define IFACE_HAS_NO_TIMESTAMP_TYPES 7
#define INIT_FAILED                  8
#define OPEN_ERROR                   9

#endif /* __EXIT_CODES_H__ */
