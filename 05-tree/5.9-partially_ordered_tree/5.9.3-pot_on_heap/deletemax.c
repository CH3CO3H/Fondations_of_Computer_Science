void deletemax(int A[], int* pn) {
	swap(A, 1, *pn);
	--(*pn);
	bubbleDown(A, 1, *pn);
}

