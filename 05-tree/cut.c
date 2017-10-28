#include "def_lr_exp.h"
#define NUL ((void*)0)

int cut(P n)
{
		if (n==NUL)
				return 0;
		return cut(n->r)+cut(n->l)+1;
}

