#include "def.h"
#include <stdio.h>
#include <stdlib.h>

L mkl()
{
	L l;
	int x;
	if (scanf("%d", &x)==EOF)
		return NULL;
	else {
		l=(L)malloc(sizeof(struct C));
		l->n=mkl();
		l->e=x;
		return l;
	}
}

