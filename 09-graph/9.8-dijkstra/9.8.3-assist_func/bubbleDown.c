void bubbleDown(potnode a, graph g, pot p, int last) {
	potnode child;
	child=2*a;
	if (child<last && priority(child+1, g, p)<priority(child, g, p))
		++child;
	if (child<=last && priority(a, g, p)>priority(child, g, p)) {
		swap(a, child, g, p);
		bubbleDown(child, g, p, last);
	}
}

