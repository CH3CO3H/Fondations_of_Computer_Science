#include "def.h"
#include <stdlib.h>
#include <stdio.h>

void dlt_rpt(int x, L* p)
{
		if ((*p)!=NULL && (*p)->e==x) {
				L t=*p;
				(*p)=(*p)->n;
				free(t);
				dlt_rpt(x, p);
		}
}

