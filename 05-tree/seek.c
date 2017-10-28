#include "def_lr_w.h"
#define NUL ((void*)0)

P seek(char l, P n)
{
	P a=n->l;
	while(a!=NUL)
		if (a->c=l)
			break;
		else
			a=a->r;
	return a;
}

