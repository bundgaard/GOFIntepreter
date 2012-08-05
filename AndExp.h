#pragma once
class BooleanExp;
class Context;

class AndExp :
	public BooleanExp
{
public:
	AndExp(BooleanExp*, BooleanExp*);
	virtual ~AndExp(void);

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char *,BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	BooleanExp* _operand1;
	BooleanExp* _operand2;

};

