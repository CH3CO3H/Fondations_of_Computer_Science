#include "def_lr_exp.h"
#define NUL (void*)0

extern int cut(P);

int main()
{
		struct N exp[7];
		exp[0].c='+';
		exp[1].c='a';
		exp[2].c='*';
		exp[3].c='-';
		exp[4].c='d';
		exp[5].c='b';
		exp[6].c='c';
		exp[0].l=&exp[1];
		exp[0].r=NUL;
		exp[1].l=NUL;
		exp[1].r=&exp[2];
		exp[2].l=&exp[3];
		exp[2].r=NUL;
		exp[3].l=&exp[5];
		exp[3].r=&exp[4];
		exp[4].l=NUL;
		exp[4].r=NUL;
		exp[5].l=NUL;
		exp[5].r=&exp[6];
		exp[6].l=NUL;
		exp[6].r=NUL;

		return cut(exp);
}

