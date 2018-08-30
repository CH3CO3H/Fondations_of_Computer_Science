void dlt(int a[], int *p)
{
		swap(a, 1, *p);
		(*p)--;
		bud(a, 1, *p);
}

