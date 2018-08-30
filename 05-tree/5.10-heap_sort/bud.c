extern swp(int[], int, int);

void bud(int a[], int i, int n)
{
		int c;
		c=2*i+1;
		if (c+1<n && a[c+1]>a[c])
				c++;
		if (c<n && a[i]<a[c]) {
				swp(a, i, c);
				bud(a, c, n);
		}
}

