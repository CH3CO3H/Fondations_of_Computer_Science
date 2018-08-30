#include <stdio.h>
#include "exp.h"

void psd(p n)
{
		p c;
		c=n->l;
		while (c!=NULL) {
				psd(c);
				c=c->r;
		}
		printf("%c\n", n->c);
}

