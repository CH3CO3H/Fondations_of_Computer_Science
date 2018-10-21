#include "dfs.h"

void dfs_fst(graph g)
{
		node u;
		for(u=0;u<MAX;u++)
				g[u].mark=UNVISITED;
		for(u=0;u<MAX;u++)
				if(g[u].mark==UNVISITED)
						dfs(u, g);
}

