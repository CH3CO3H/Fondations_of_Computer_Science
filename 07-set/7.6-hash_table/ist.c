#include "hash.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int h(e_t);

void bkt_ist(e_t x, list* p)
{
	if (*p==NULL) {
		*p=malloc(sizeof(struct CELL));
		strcpy((*p)->e, x);
		(*p)->n=NULL;
	} else if (strcmp((*p)->e, x))
		bkt_ist(x, &((*p)->n));
}

void ist(e_t x, hash hs)
{
	bkt_ist(x, &hs[h(x)]);
}

