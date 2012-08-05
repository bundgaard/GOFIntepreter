#pragma once
#include "booleanexp.h"
class Context;
class VariableExp;
class OrExp :
	public BooleanExp
{
public:
	OrExp(BooleanExp*, BooleanExp*);
	virtual ~OrExp(void);

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	BooleanExp* _operand1;
	BooleanExp* _operand2;

};

