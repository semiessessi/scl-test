#pragma once 

#ifndef PROJECT_CONFIG_H
#define PROJECT_CONFIG_H

#include "Handlers.h"
#include "Core/Parameter.h"

static const SCL::Parameter kSCLParameters[] =
{
	{ "test" },
	{ "testis", true },
	{ "testes", true, Handler3 },
	{ "teste", false, Handler4 }
};

#endif
