#include "def.h"
#define NUL (void*)0

int lkp(int x, L l)
{
		if (l==NUL)
				return 0;
		if (x==l->e)
				return 1;
		else
				return lkp(x, l->n);
}

