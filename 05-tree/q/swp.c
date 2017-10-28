void swp(int a[], int i, int j)
{
		a[i]^=a[j];
		a[j]^=a[i];
		a[i]^=a[j];
}

