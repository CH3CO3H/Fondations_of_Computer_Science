#include "def.h"
#define NUL ((void*)0)

extern L mr3(L, L, L);
extern L sp3(L);
extern L slt(L);

L mgs(L l)
{
	L l2, l3;
	if (l==NUL)
		return NUL;
	if (l->n==NUL)
		return l;
	l3=sp3(l);
	l2=slt(l);
	return mr3(mgs(l), mgs(l2), mgs(l3));
}

