// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// DESCRIPTION:
//  Nil.
//
//-----------------------------------------------------------------------------


#ifndef __M_ARGV__
#define __M_ARGV__

//
// MISC
//
#define MAXARGVS 100

extern  unsigned int myargc;
extern  char*	myargv [MAXARGVS];

void M_CopyArgs (int argc, char ** argv);

// Returns the position of the given parameter
// in the arg list (0 if not found).
unsigned int M_CheckParm_N (const char* check, unsigned int start_pos);

//unsigned int M_CheckParm (const char* check);
#define M_CheckParm(a)	M_CheckParm_N(a,1)

#endif
//-----------------------------------------------------------------------------
//
// $Log:$
//
//-----------------------------------------------------------------------------
