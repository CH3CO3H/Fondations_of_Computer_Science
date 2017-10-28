#include <stdio.h>
#include "def_lr_exp.h"

void psd(P n)
{
		P c;
		c=n->l;
		while (c!=NULL) {
				psd(c);
				c=c->r;
		}
		printf("%c\n", n->c);
}

