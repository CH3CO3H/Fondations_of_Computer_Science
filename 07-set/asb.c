#include "../defcell.h"
#include <stdlib.h>

list set_union(list, list);

list assemble(cell_t x, list l, list m)
{
	list first;
	first=malloc(sizeof(struct CELL));
	first->e=x;
	first->n=set_union(l, m);
	return first;
}

