#include <stdio.h>

#define MAX 100
int A[MAX];

void selection_sort(int A[], size_t n);

int main(void) {
	size_t n;
	for (n=0;n<MAX && scanf("%d", &A[n])!=EOF;n++);
	selection_sort(A, n);
	for (size_t i=0;i<n;i++)
		printf("%d\n", A[i]);
	return 0;
}

