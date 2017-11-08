#include <stdio.h>
#include "lst.h"

plist lkp(pvt a, rlst l)
{
	plst p;
	if (l==NULL)
		return NULL;
	if (!strcmp(l->v, a)) {
		p=malloc(sizeof(struct PCEL));
		strcpy(p->p, l->p);
		p->n=lkp(a, l->n);
		return p;
	} else
		return lkp(a, l->n);
}

