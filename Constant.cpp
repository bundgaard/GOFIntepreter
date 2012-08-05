#include "Constant.h"
#include "Context.h"
#include "BooleanExp.h"


Constant::Constant(bool op1)
{
	_operand1 = op1;
}


Constant::~Constant(void)
{
}

bool Constant::Evaluate(Context& aContext)
{
	return aContext.Lookup("true") ? true:false;

}

BooleanExp* Constant::Copy() const{
	return new Constant(_operand1);
}

BooleanExp* Constant::Replace(const char *name , BooleanExp& exp)
{

	return exp.Copy();
}