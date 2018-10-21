void bubbleUp(potnode a, graph g, pot p) {
	if ((a>1)&&(priority(a, g, p)<priority(a/2, g, p))) {
		swap(a, a/2, g, p);
		bubbleUp(a/2, g, p);
	}
}

