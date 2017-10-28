#include "def.h"
#include <stdlib.h>

void ist(int x, L* p)
{
		L l=malloc(sizeof(struct C));
		l->e=x;
		l->n=(*p);
		(*p)=l;
}

