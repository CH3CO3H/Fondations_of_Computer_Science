#include <stdio.h>
#include <stdlib.h>

#define MAX 13
typedef int node;
typedef struct EDGE* edgelist;
struct EDGE {
		NODE n1, n2;
		EDGELIST n;
};
typedef struct TREENODE* tree
struct TREENODE {
		int h;
		tree p;
};
tree find(node, tree[]);
void mrg(tree x, tree y);
edgelist mk_edges();

int main(void)
{
		node u;
		tree a, b;
		edgelist e;
		tree nodes[MAX];

		for (u=0;u<MAX;u++) {
				nodes[u]=malloc(sizeof(struct TREENODE));
				nodes[u]->p=NULL;
				nodes[u]->h=0;
		}
		e=mk_edges();
		while(e!=NULL) {
				a=find(e->n1, nodes);
				b=find(e->n2, nodes);
				if (a!=b)
						mrg(a, b);
				e=e->n;
		}
}

