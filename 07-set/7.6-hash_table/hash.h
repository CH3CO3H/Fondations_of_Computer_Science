#ifndef HASH_H
#define HASH_H

#define B 5
typedef char e_t[1<<5];

typedef struct CELL* list;
struct CELL {
	e_t w;
	list n;
};

typedef list hash[B];

#endif
