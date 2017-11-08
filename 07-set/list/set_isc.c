#include "../defcell.h"

list asb(cell_t, list, list);

list set_isc(list a, list b)
{
	if (a==NULL || b==NULL)
		return NULL;
	if (a->e==b->e)
		return asb_set_isc(a->e, a->n, b->n);
	if (a->e<b->e)
		return set_isc(a->n, b);
	return set_isc(a, b->n);
}

