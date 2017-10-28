#include <stdlib.h>
#include "../def.h"

void dlt(int x, L* p)
{
		if (*p) {
				if (x>(*p)->e)
						dlt(x, &((*p)->n));
				if (x==(*p)->e) {
						L t=*p;
						*p=(*p)->n;
						free(t);
				}
		}
}
