#include "lr.h"
#include <stdio.h>

p max_i(p);

int main(void)
{
		struct N a[7];
		int i;
		for(i=0;i<7;i++)
				a[i].i=i;

		a[0].l=&(a[1]);
		a[0].r=NULL;
		a[1].r=&(a[2]);
		a[1].l=NULL;
		a[2].l=&(a[3]);
		a[2].r=NULL;
		a[3].l=&(a[6]);
		a[3].r=&(a[4]);
		a[4].l=NULL;
		a[4].r=&(a[5]);
		a[5].l=NULL;
		a[5].r=NULL;
		a[6].l=NULL;
		a[6].r=NULL;

		p t=max_i(a);
		printf("%d\n", t->i);

		return 0;
}
