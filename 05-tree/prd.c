#include <stdio.h>
#include "def_lr_exp.h"

void prd(P n)
{
		P c;
		printf("%c\n", n->c);
		c=n->l;
		while (c!=NULL) {
				prd(c);
				c=c->r;
		}
}

