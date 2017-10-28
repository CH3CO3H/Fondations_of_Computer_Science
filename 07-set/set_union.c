#include "../defcell.h"
#include <stdio.h>

list asb(cell_t, list, list);

list set_union(list l, list m)
{
	if (l==NULL && m==NULL)
		return NULL;
	if (l==NULL)
		return asb(m->e, NULL, m->n);
	if (m==NULL)
		return asb(l->e, l->n, NULL);
	if (l->e==m->e)
		return asb(l->e, l->n, m->n);
	if (l->e<m->e)
		return asb(l->e, l->n, m);
	return asb(m->e, l, m->n);
}

