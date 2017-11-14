#include "lr.h"
#include <stdio.h>

p max_i(p x)
{
		if (x==NULL)
				return NULL;
		if (x->l==NULL && x->r==NULL)
				return x;
		if (x->l==NULL) {
				p t=max_i(x->r);
				return x->i<t->i?t:x;
		}
		if (x->r==NULL) {
				p t=max_i(x->l);
				return x->i<t->i?t:x;
		}
		p t=max_i(x->r);
		p u=max_i(x->l);
		if (t->i>x->i && t->i>u->i)
				return t;
		if (u->i>x->i && u->i>t->i)
				return u;
		return x;
}
