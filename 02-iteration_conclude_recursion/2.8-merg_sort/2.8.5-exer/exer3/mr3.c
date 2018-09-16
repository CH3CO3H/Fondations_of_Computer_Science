#include "def.h"

#define NUL ((void*)0)

extern L mrg(L, L);

L mr3(L l1, L l2, L l3)
{
	if (l2==NUL && l3==NUL)
		return l1;
	if (l1==NUL && l3==NUL)
		return l2;
	if (l2==NUL && l1==NUL)
		return l3;
	if (l1==NUL)
		return mrg(l2, l3);
	if (l2==NUL)
		return mrg(l1, l3);
	if (l3==NUL)
		return mrg(l2, l1);
	if (l1->e<=l2->e && l1->e<=l3->e) {
		l1->n=mr3(l1->n, l2, l3);
		return l1;
	}
	if (l2->e<=l1->e && l2->e<=l3->e) {
		l2->n=mr3(l1, l2->n, l3);
		return l2;
	}
	l3->n=mr3(l1, l2, l3->n);
	return l3;
}

