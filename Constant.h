#pragma once
#include "booleanexp.h"
class Context;
class BooleanExp;

class Constant :
	public BooleanExp
{
public:
	Constant(bool op1);
	virtual ~Constant(void);

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char *, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	bool _operand1;


};

