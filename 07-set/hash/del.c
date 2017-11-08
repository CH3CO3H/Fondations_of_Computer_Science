#include "hash.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int h(e_t);

void del(e_t, hash hs);
static void bkt_del(e_t, list*);

void bkt_del(e_t x, list* p)
{
	if (*p!=NULL) {
		if (!strcmp((*p)->e, x)) {
			list t=*p;
			*p=(*p)->n;
			free(t);
		} else
			bkt_del(x, &(*p)->n);
	}
}

void del(e_t x, hash hs)
{
	bkt_del(x, &hs[h(x)]);
}

