#include "dfs_im.h"

int k;
void dfs(node u, graph g)
{
		list p;
		node v;

		g[u].mark=VISITED;
		p=g[u].s;
		while(p!=NULL) {
				v=p->name;
				if(g[v].mark==UNVISITED)
						dfs(v, g);
				p=p->n;
		}
		k++;
		g[u].p=k;
}

void dfs_fst(graph g)
{
		node u;
		k=0;
		for(u=0;u<MAX;u++)
				g[u].mark=UNVISITED;
		for(u=0;u<MAX;u++)
				if(g[u].mark==UNVISITED)
						dfs(u, g);
}

