#include "NotExp.h"


NotExp::NotExp(BooleanExp* op1)
{
	_operand1 = op1;
}


NotExp::~NotExp(void)
{
}

bool NotExp::Evaluate(Context& aContext)
{

	return !_operand1->Evaluate(aContext);
}

BooleanExp* NotExp::Copy() const{
	return new NotExp(_operand1->Copy());
}

BooleanExp* NotExp::Replace(const char* name, BooleanExp& exp)
{

	return new NotExp(_operand1->Replace(name,exp));
}