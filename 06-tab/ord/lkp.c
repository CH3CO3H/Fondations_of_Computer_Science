#include "def.h"
#define NUL (void*)0

int olk(int x, L l)
{
		if (l==NUL)
				return 0;
		if (x>l->e)
				return olk(x, l->n);
		if (x==l->e)
				return 1;
		return 0;
}

