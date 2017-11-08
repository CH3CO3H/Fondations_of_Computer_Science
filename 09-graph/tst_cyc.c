#include "dfs_im.h"

int tst_cyc(graph g)
{
		node u, v;
		list p;
		dfs_fst(g);
		for(u=0;u<MAX;u++) {
				p=g[u].s;

