#include <stdio.h>

extern void ist(int[], int, int*);

int main()
{
		int a[11]={18,18,16,9,7,1,9,3,7,5};
		int n=10;
		ist(a, 13, &n);
		for (int i=0;i<n;i++)
				printf("%d  ", a[i]);
		putchar('\n');
		printf("%d\n", n);

		return 0;
}

