#include "VariableExp.h"
#include "Constant.h"
#include "BooleanExp.h"
#include "Context.h"
#include <cstdio>
#include <cstdlib>

#include <cstring>


VariableExp::VariableExp(const char* name)
{
	_name = strdup(name);
}

bool VariableExp::Evaluate(Context& aContext){
	return aContext.Lookup(_name);
}

BooleanExp* VariableExp::Copy() const{
	return new VariableExp(_name);
}
BooleanExp* VariableExp::Replace(const char* name, BooleanExp& exp)
{

	if(strcmp(name, _name) == 0){
		return exp.Copy();
	}else{
		return new VariableExp(_name);
	}
}

VariableExp::~VariableExp()
{


}