#include "bst.h"
#include <stdio.h>

extern int lkp(int, T);

int main()
{
		struct N exp[7];
		exp[0].e='+';
		exp[1].e='a';
		exp[2].e='*';
		exp[3].e='-';
		exp[4].e='d';
		exp[5].e='b';
		exp[6].e='c';

		exp[0].l=&exp[1];
		exp[0].r=&exp[2];
		exp[1].l=NULL;
		exp[1].r=NULL;
		exp[2].l=&exp[3];
		exp[2].r=&exp[4];
		exp[3].l=&exp[5];
		exp[3].r=&exp[6];
		exp[4].l=NULL;
		exp[4].r=NULL;
		exp[5].l=NULL;
		exp[5].r=NULL;
		exp[6].l=NULL;
		exp[6].r=NULL;

		printf("%d\n", lkp(84, exp));

		return 0;
}

