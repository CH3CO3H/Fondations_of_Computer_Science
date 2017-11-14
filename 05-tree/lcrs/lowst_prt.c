#include "prt.h"
#include <stdio.h>

static short cld(p, p);

p lowst_prt(p x, p y)
{
		if(cld(x, y))
				return x;
		return lowst_prt(x->p,y);
}

short cld(p x, p y)
{
		if(x==y)
				return 1;
		p z=x->l;
		while(z!=NULL)
				if(cld(z, y)
						return 1;
				else
						z=z->r;
}
