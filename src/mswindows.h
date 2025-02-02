/* Declarations for windows
   Copyright (C) 1996-2011, 2015, 2018-2023 Free Software Foundation,
   Inc.

This file is part of GNU Wget.

GNU Wget is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

GNU Wget is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Wget.  If not, see <http://www.gnu.org/licenses/>.

Additional permission under GNU GPL version 3 section 7

If you modify this program, or any covered work, by linking or
combining it with the OpenSSL project's OpenSSL library (or a
modified version of that library), containing parts covered by the
terms of the OpenSSL or SSLeay licenses, the Free Software Foundation
grants you additional permission to convey the resulting work.
Corresponding Source for a non-source form of such a combination
shall include the source code for the parts of OpenSSL used as well
as that of the covered work.  */

#ifndef MSWINDOWS_H
#define MSWINDOWS_H

#ifndef WGET_H
# error This file should not be included directly.
#endif

/* Prevent inclusion of <winsock*.h> in <windows.h>.  */
#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>

#include <winsock2.h>
#include <ws2tcpip.h>

#ifndef EAI_SYSTEM
# define EAI_SYSTEM -1   /* value doesn't matter */
#endif

/* Declares file access functions, such as open, create, access, and
   chmod.  Unix declares these in unistd.h and fcntl.h.  */
#include <io.h>

/* Declares getpid(). */
#include <process.h>

#include <stdio.h>

#define PATH_SEPARATOR '\\'

/* ioctl needed by set_windows_fd_as_blocking_socket() */
#include <sys/ioctl.h>

/* Public functions.  */

void ws_startup (void);
void ws_cleanup (void);
void ws_changetitle (const char *);
void ws_percenttitle (double);
char *ws_mypath (void);
void windows_main (char **);
void set_windows_fd_as_blocking_socket (int);

#endif /* MSWINDOWS_H */
