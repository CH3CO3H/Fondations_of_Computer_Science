#include <stdlib.h>
#include <stdio.h>
#include "../def.h"

void ist(int x, L* p)
{
		if (!*p) {
				*p=malloc(sizeof(struct C));
				(*p)->e=x;
				(*p)->n=NULL;
				return;
		}
		if ((*p)->e>x) {
				L t;
				t=malloc(sizeof(struct C));
				t->e=x;
				t->n=(*p);
				*p=t;
				return;
		}
		if ((*p)->e==x)
				return;
		ist(x, &((*p)->n));
}

