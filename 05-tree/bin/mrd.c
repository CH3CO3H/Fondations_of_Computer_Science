#include "exp.h"
#include <stdio.h>

void mrd(p x)
{
		if (x!=NULL) {
				mrd(x->l);
				putchar(x->c);
				mrd(x->r);
		}
}
