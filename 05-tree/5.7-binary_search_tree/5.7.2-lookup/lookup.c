#include "bst.h"
#define NUL ((void*)0)

int lkp(int x, T t)
{
		if (t==NUL)
				return 0;
		if (x==t->e)
				return 1;
		if (x<t->e)
				return lkp(x, t->l);
		return lkp(x, t->r);
}

