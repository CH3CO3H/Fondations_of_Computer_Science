#include "def.h"

#define NUL ((void*)0)
L mrg(L l1, L l2)
{
	if (l1==NUL)
		return l2;
	if (l2==NUL)
		return l1;
	if (l1->e<=l2->e) {
		l1->n=mrg(l1->n, l2);
		return l1;
	}
	l2->n=mrg(l1, l2->n);
	return l2;
}

