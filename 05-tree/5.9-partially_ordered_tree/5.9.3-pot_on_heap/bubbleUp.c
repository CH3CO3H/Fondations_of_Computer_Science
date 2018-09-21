void bubbleUp(int A[], int i) {
	if (i>1 && A[i]>A[i/2]) {
		swap(A, i, i/2);
		bubbleUp(A, i/2);
	}
}

