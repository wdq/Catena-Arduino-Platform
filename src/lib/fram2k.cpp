/* fram2k.cpp	Fri Mar 17 2017 19:32:14 tmm */

/*

Module:  fram2k.cpp

Function:
	The persistent-storage provider for the Fram on Catena

Version:
	V0.5.0	Fri Mar 17 2017 19:32:14 tmm	Edit level 1

Copyright notice:
	This file copyright (C) 2017 by

		MCCI Corporation
		3520 Krums Corners Road
		Ithaca, NY  14850

	An unpublished work.  All rights reserved.
	
	This file is proprietary information, and may not be disclosed or
	copied without the prior permission of MCCI Corporation.
 
Author:
	Terry Moore, MCCI Corporation	March 2017

Revision history:
   0.5.0  Fri Mar 17 2017 19:32:14  tmm
	Module created.

*/

#include "Catena_Fram2k.h"

using namespace McciCatena;

/*

Name:	McciCatena::Fram2K::begin()

Function:
	xxx

Definition:
	xxx

Description:
	xxx

Returns:
	xxx

*/

bool 
McciCatena::Fram2k::begin()
	{
	if (! this->m_hw.begin(0, &Wire))
		return false;

	return true;
	}

bool 
McciCatena::Fram2k::isValid()
	{
	return false;
	}

bool
McciCatena::Fram2k::reset()
	{
	return false;
	}