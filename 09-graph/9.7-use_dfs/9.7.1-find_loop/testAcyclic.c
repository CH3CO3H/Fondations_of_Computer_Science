bool testAcyclic(graph g) {
	node u, v;
	list p;
	dfsForest(g);
	for (u=0;u<MAX;u++) {
		p=g[u].successors;
		while (p!=NULL) {
			v=p->nodeName;
			if (g[u].postorder<=g[v].postorder)
				return false;
			p=p->next;
		}
	}
	return true;
}

