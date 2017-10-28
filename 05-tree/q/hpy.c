extern void bud(int[], int, int);

void hpy(int a[], int n)
{
		int i;
		for (i=n/2;i>=1;i--)
				bud(a, i, n);
}

