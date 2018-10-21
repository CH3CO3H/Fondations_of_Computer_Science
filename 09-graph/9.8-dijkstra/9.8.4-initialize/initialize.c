void initialize(graph g, pot p, int* plast) {
	int i;
	for (i=0;i<MAX;i++) {
		g[i].dist=INFTY;
		g[i].topot=i+1;
		p[i+1]=i;
	}
	g[0].dist=0;
	*plast=MAX;
}

