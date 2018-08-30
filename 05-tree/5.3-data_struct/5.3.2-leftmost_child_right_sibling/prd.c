#include <stdio.h>
#include "exp.h"

void prd(p n)
{
		p c;
		printf("%c\n", n->c);
		c=n->l;
		while (c!=NULL) {
				prd(c);
				c=c->r;
		}
}

