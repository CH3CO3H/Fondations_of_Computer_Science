#include "def.h"
#define NUL (void*)0

void dlt(int x, L *p)
{
		if ((*p)!=NUL)
				if (x==(*p)->e)
						(*p)=(*p)->n;
				else
						dlt(x, &((*p)->n));
}

