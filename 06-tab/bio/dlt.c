#include <stdlib.h>
#include "bio.h"

void bdt(L l, L* p)
{
		if (l->n)
				l->n->p=l->p;
		if (!l->p)
				(*p)=l->n;
		else
				l->p->n=l->n;
		free(l);
}

