#include "../defcell.h"
#include <stdlib.h>

list set_isc(list, list);

list asb_set_isc(cell_t x, list a, list b)
{
	list t;
	t=malloc(sizeof(struct CELL));
	t->e=x;
	t->n=set_isc(a, b);

	return t;
}

