#include "ltr.h"
#include <stdio.h>

p sek(char l, p n)
{
	p a=n->l;
	while(a!=NULL)
		if (a->c=l)
			break;
		else
			a=a->r;
	return a;
}

