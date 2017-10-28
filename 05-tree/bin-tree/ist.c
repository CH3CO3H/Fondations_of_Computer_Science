#include "bst.h"
#include <stdlib.h>
#define NUL ((void*)0)

T ist(int x, T t)
{
		if (t==NUL) {
				t=(T)malloc(sizeof (struct N));
				t->e=x;
				t->l=NUL;
				t->r=NUL;
		}
		else if (x<t->e)
				t->l=ist(x, t->l);
		else if (x>t->e)
				t->r=ist(x, t->r);
		return t;
}

