#include <stdio.h>
#include "def_lr_exp_evl.h"

extern int evl(P);

int main()
{
		struct N exp[7];
		exp[0].o='+';
		exp[1].v=23;
		exp[1].o='i';
		exp[2].o='*';
		exp[3].o='-';
		exp[4].v=78;
		exp[4].o='i';
		exp[5].v=35;
		exp[5].o='i';
		exp[6].v=14;
		exp[6].o='i';

		exp[0].l=&exp[1];
		exp[0].r=NULL;
		exp[1].l=NULL;
		exp[1].r=&exp[2];
		exp[2].l=&exp[3];
		exp[2].r=NULL;
		exp[3].l=&exp[5];
		exp[3].r=&exp[4];
		exp[4].l=NULL;
		exp[4].r=NULL;
		exp[5].l=NULL;
		exp[5].r=&exp[6];
		exp[6].l=NULL;
		exp[6].r=NULL;

		printf("%d\n", evl(exp));

		return 0;
}

