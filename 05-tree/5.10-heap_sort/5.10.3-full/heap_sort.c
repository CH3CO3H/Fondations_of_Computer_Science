#include <stdio.h>

#define MAX 128

int a[MAX+1];
void swap(int[], int, int);
void bubbleDown(int[], int, int);
void deletemax(int[], int*);
void heapify(int[], int);
void heapsort(int[], int);
void bubbleUp(int[], int);

void bubbleDown(int a[], int i, int n)
{
		int c;
		c=2*i+1;
		if (c+1<n && a[c+1]>a[c])
				c++;
		if (c<n && a[i]<a[c]) {
				swap(a, i, c);
				bubbleDown(a, c, n);
		}
}

void bubbleUp(int a[], int i)
{
		if (i>0) {
				int j=((i%2==1)?i/2:i/2-1);
				if (a[i]>a[j]) {
						swap(a, i, j);
						bubbleUp(a, j);
				}
		}
}

void deletemax(int a[], int *p)
{
		swap(a, 1, *p);
		(*p)--;
		bubbleDown(a, 1, *p);
}

void heap_sort(int a[], int n)
{
		int i;
		heapify(a, n);
		i=n;
		while (i>1)
				deletemax(a, &i);
}

void insert(int a[], int x, int* p)
{
		a[(*p)++]=x;
		bubbleUp(a, *p-1);
}


int main(void) {
		int i, n, x;
		n=0;
		while (n<MAX && scanf("%d", &x)!=EOF)
				a[++n]=x;
		heap_sort(a, n);
		for (i=1;i<=n;i++)
				printf("%d  ", a[i]);
		putchar('\n');

		return 0;
}

void swap(int a[], int i, int j) {
		a[i]^=a[j];
		a[j]^=a[i];
		a[i]^=a[j];
}

