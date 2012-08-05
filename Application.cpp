
#pragma hdrstop
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "BooleanExp.h"
#include "Context.h"
#include "VariableExp.h"
#include "OrExp.h"
#include "AndExp.h"
#include "Constant.h"
#include "NotExp.h"
#ifdef _WIN32
#pragma warning(disable: 4996)
#endif
int main(int argc, char ** argv)
{
	BooleanExp *expression;
	Context context;
	VariableExp* x = new VariableExp("X");
	VariableExp* y = new VariableExp("Y");

	expression = new OrExp(
		new AndExp(new Constant(true),x),
		new AndExp(y,new NotExp(x)));

	context.Assign(x,false);
	context.Assign(y,true);
	bool result = expression->Evaluate(context);
	char *str;
	if(result == true)
		str = "true";
	else
		str = "false";
	printf("result is %s\n",str);
	system("pause");
	return 0;
}




