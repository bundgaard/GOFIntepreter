#pragma once
#include "BooleanExp.h"
class BooleanExp;
class Context;
class VariableExp : public BooleanExp
{

public:
	VariableExp(const char*);
	virtual ~VariableExp();

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	char* _name;
};