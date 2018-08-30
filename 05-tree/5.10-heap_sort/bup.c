extern void swp(int[], int, int);

void bup(int a[], int i)
{
		if (i>0) {
				int j=((i%2==1)?i/2:i/2-1);
				if (a[i]>a[j]) {
						swp(a, i, j);
						bup(a, j);
				}
		}
}

