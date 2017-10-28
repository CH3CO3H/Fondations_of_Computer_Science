#include <stdio.h>

extern void bup(int[], int);

int main()
{
		int a[11]={18,18,16,9,7,1,9,3,7,5,13};

		bup(a, 10);

		for (int i=0;i<11;i++)
				printf("%d  ", a[i]);
		putchar('\n');

		return 0;
}

