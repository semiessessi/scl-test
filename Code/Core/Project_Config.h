#pragma once 

#ifndef PROJECT_CONFIG_H
#define PROJECT_CONFIG_H

#include "Handlers.h"
#include "Core/Parameter.h"

static const char* const kSCLTitle = "SCL Test";
// note, this doesnt have to be const if you want handlers to modify it
static const bool kbSCLDisplayTitle = true;

static const SCL::Parameter kSCLParameters[] =
{
	{ "test" },
	{ "testis", true },
	{ "testes", true, Handler3 },
	{ "teste", false, Handler4 }
};

#endif
