#ifndef DEFCELL_H
#define DEFCELL_H

typedef struct CELL* list;

#define cell_t int

struct CELL {
	cell_t e;
	list n;
};

#endif
