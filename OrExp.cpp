#include "OrExp.h"


OrExp::OrExp(BooleanExp* op1,BooleanExp* op2)
{
	_operand1 = op1;
	_operand2 = op2;
}


OrExp::~OrExp(void)
{

}

bool OrExp::Evaluate(Context& aContext)
{

	return _operand1->Evaluate(aContext) || _operand2->Evaluate(aContext);
}

BooleanExp* OrExp::Copy() const{
	return new OrExp(_operand1->Copy(),_operand2->Copy());
}

BooleanExp* OrExp::Replace(const char* name, BooleanExp& exp)
{

	return new OrExp(_operand1->Replace(name,exp),_operand2->Replace(name,exp));
}