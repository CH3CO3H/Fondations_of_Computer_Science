#include <string.h>

#define B 5

typedef char apples[1<<5];
enum MONTHS {Unknown, Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
typedef struct CELL* list;
struct CELL {
	apples v;
	int h;
	list n;
};
typedef list hsh[B];

int lkp_bkt(apples a, list l)
{
	if (l==NULL)
		return Unknown;
	if (!strcmp(a, l->v))
		return l->h;
	else
		return lkp_bkt(a, l->n);
}

int lkp(apples a, hsh ha)
{
	return lkp_bkt(a, ha[h(a)]);
}

unsigned int h(apples x)
{
	unsigned int i, s;
	s=0;
	for (i=0;x[i]!='\0';i++)
		s+=x[i];
	return s%B;
}
