#pragma once 

#ifndef PROJECT_CONFIG_H
#define PROJECT_CONFIG_H

#include "Handlers.h"
#include "Core/Parameter.h"

static const SCL::Parameter kSCLParameters[] =
{
	{ "test1" },
	{ "test2", true },
	{ "test3", false, Handler3 },
	{ "test3", false, Handler4 }
};

#endif
