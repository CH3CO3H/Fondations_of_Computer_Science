#include "lr.h"
#include <stdio.h>

int cut(p n)
{
		if (n==NULL)
				return 0;
		return cut(n->r)+cut(n->l)+1;
}

