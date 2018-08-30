#include "def.h"
#include <stdio.h>

void prl(L l)
{
	while (l!=NULL) {
		printf("%d\n", l->e);
		l=l->n;
	}
}

