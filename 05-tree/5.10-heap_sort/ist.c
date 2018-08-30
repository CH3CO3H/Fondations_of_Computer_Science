extern void bup(int[], int);

void ist(int a[], int x, int* p)
{
		a[(*p)++]=x;
		bup(a, *p-1);
}

