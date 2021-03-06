/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_TIMERCALLBACK_H
#define ANH_ZONESERVER_TIMERCALLBACK_H

#include "typedefs.h"


//======================================================================================================================

class TimerCallback
{
	public:
		virtual void	handleTimer(uint32 timerId, void* container) {};
};

#endif 

