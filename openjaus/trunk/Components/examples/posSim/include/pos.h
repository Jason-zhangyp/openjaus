/*****************************************************************************
 *  Copyright (c) 2006, University of Florida.
 *  All rights reserved.
 *  
 *  This file is part of OpenJAUS.  OpenJAUS is distributed under the BSD 
 *  license.  See the LICENSE file for details.
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of the University of Florida nor the names of its 
 *       contributors may be used to endorse or promote products derived from 
 *       this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ****************************************************************************/
 // File:		node.h
// Version:		0.2
// Written by:	Tom Galluzzo (galluzzt@ufl.edu)
// Date:		08/01/2004
// Description:	This file contains the header file code for the node level abstraction

#ifndef POS_H
#define POS_H

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifndef RDDF_MODE
#define RDDF_MODE 1
#endif

#ifndef DEFAULT_MODE
#define DEFAULT_MODE 2
#endif

#define POS_NAME_STRING			"GPOS and VSS Simulator" 

#define POS_GPOS_STARTUP_FAILED				-1
#define POS_VSS_STARTUP_FAILED				-2
#define POS_CONFIG_FILE_ERROR				-3
#define POS_CONFIG_FILE_OPEN_ERROR			-4
#define POS_CONFIG_FILE_UNKNOWN_ERROR		-5
#define POS_CONFIG_FILE_DATA_ERROR			-6
#define POS_CONFIG_FILE_MODE_ERROR			-7
#define POS_RDDF_FILE_ERROR					-8

int posStartup(void);
int posShutdown(void);
const char *posGetName(void);

#endif // POS_H
