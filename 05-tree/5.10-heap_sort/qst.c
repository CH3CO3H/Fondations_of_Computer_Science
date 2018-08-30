#include <stdio.h>

#define MAX 128

int a[MAX+1];
void bud(int[], int, int);
void dlt(int[], int*);
void hpy(int[], int);
void hst(int[], int);
void swp(int[], int, int);

int main()
{
		int i, n, x;
		n=0;
		while (n<MAX && scanf("%d", &x)!=EOF)
				a[++n]=x;
		hst(a, n);
		for (i=1;i<=n;i++)
				printf("%d  ", a[i]);
		putchar('\n');

		return 0;
}

