#pragma once 

#ifndef HANDLERS_H
#define HANDLERS_H

#include <string>

namespace SCL
{
struct ParameterInstance;
}

inline int Handler3(const SCL::ParameterInstance&, const std::string&) { return 0; }
inline int Handler4(const SCL::ParameterInstance&, const std::string&) { return 0; }

#endif
