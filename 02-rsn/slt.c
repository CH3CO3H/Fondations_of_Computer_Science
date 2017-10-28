#include "def.h"

#define NUL ((void*)0)

L slt(L l1)
{
	if (l1==NUL || l1->n==NUL)
		return NUL;
	L l2=l1->n;
	l1->n=l2->n;
	l2->n=slt(l2->n);
	return l2;
}

