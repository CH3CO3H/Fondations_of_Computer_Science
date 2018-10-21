#include "dfs.h"

void dfs(node u, graph g)
{
		list p;
		node v;
		g[u].mark=VISITED;
		p=g[u].s;
		while (p!=NULL) {
				v=p->name;
				if (g[v].mark==UNVISITED)
						dfs(v, g);
				p=p->n;
		}
}
