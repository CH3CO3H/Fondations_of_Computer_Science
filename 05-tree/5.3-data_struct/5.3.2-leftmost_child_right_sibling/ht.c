#include "lr.h"
#include <stdio.h>

void ht(p n)
{
		p c;
		n->i=0;
		c=n->l;
		while(c!=NULL) {
				ht(c);
				if(c->i>=n->i)
						n->i=c->i+1;
				c=c->r;
		}
}
