#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "Context.h"
#include "VariableExp.h"
// class Context

bool Context::Lookup(const char* name) const
{
	if(strcmp(name,"true") == 0)
		return true;
	else return false;
}

void Context::Assign(VariableExp* varExp, bool stmt)
{
	if(stmt == true)
	{
		varExp = new VariableExp("true");
	}
	else if(stmt == false)
	{
		varExp = new VariableExp("false");
	}
}