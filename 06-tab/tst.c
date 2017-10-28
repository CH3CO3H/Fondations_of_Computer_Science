#include <stdio.h>
#include "def.h"

extern void ist(int, L*);

int main(const int argc, const char* const argv[])
{
		unsigned int n, i;

		scanf("%d", &n);
		L l=NULL;
		for (i=0;i<n;i++) {
				int t;
				scanf("%d", &t);
				ist(t, &l);
		}
		L t=l;
		for (i=0;i<n;i++) {
				printf("%d,", t->e);
				t=t->n;
		}
		putchar('\n');
		
		return 0;
}

