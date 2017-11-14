#include <stdio.h>
#include "def_exp.h"

void prd(T t)
{
		if (t!=NULL) {
				printf("%c\n", t->c);
				prd(t->l);
				prd(t->r);
		}
}

