#include "def.h"
#include <stdlib.h>

#define NUL ((void*)0)

void ist(int x, L* p)
{
		if ((*p)==NUL) {
				(*p)=(L)malloc(sizeof (struct C));
				(*p)->e=x;
				(*p)->n=NUL;
		} else if (x!=(*p)->e)
				ist(x, &((*p)->n));
}

