#include "bst.h"
#define NUL (void*)0

extern T ist_ref(int, T*);
extern void prd(T);

int main()
{
		char a[16]="have fun";
		T t=NUL;
		for (int i=0;i<1<<4;i++)
				if (a[i])
						ist_ref(a[i], &t);
		prd(t);

		return 0;
}

