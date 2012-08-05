#pragma once
#include "booleanexp.h"
class Context;
class VariableExp;

class NotExp :
	public BooleanExp
{
public:
	NotExp(BooleanExp*);
	virtual ~NotExp(void);

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	BooleanExp* _operand1;
};

