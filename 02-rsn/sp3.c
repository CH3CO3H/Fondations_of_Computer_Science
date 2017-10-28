#include "def.h"

#define NUL ((void*)0)

L sp3(L l)
{
	if (l==NUL || l->n==NUL || l->n->n==NUL)
		return NUL;
	L l3=l->n->n;
	l->n->n=l3->n;
	l3->n=sp3(l3->n);
	return l3;
}
