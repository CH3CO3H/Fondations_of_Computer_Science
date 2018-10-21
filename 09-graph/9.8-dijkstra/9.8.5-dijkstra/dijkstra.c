void dijkstra(graph g, pot p, int* plast) {
	node u, v;
	list ps;
	initialize(g, p, plast);
	while ((*plast)>1) {
		v=p[1];
		swap(1, *plast, g, p);
		--(*plast);
		bubbleDown(1, g, p, *plast);
		ps=g[v].successors;
		while (ps!=NULL) {
			u=ps->nodeName;
			if (g[u].dist>g[v].dist+ps->nodeLabel) {
				g[u].dist=g[v].dist+ps->nodeLabel;
				bubbleUp(g[u].topot, g, p);
			}
			ps=ps->next;
		}
	}
}

