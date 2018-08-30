#include <stdio.h>

void selection_sort(int A[], size_t n) {
	size_t small;
	int temp;
	for (size_t i=0;i<n-1;i++) {
		small=i;
		for (size_t j=i+1;j<n;j++)
			if (A[j]<A[small])
				small=j;
		temp=A[small];
		A[small]=A[i];
		A[i]=temp;
	}
}

