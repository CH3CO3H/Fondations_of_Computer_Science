#include "bst.h"
#include <stdlib.h>

#define NUL ((void*)0)

T ist_ref(int x, T* p)
{
		if ((*p)==NUL) {
				(*p)=(T)malloc(sizeof (struct N));
				(*p)->e=x;
				(*p)->l=NUL;
				(*p)->r=NUL;
				return (*p);
		}
		else if (x<(*p)->e)
				return ist_ref(x, &((*p)->l));
		else if (x>(*p)->e)
				return ist_ref(x, &((*p)->r));
		return NUL;
}

