void swap(potnode a, potnode b, graph g, pot p) {
	node temp;
	temp=p[b];
	p[b]=p[a];
	p[a]=temp;
	g[p[a]].topot=a;
	g[p[b]].topot=b;
}

