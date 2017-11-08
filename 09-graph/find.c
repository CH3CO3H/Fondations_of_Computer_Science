tree find(node a, tree nodes[]);
{
		tree x;
		x=nodes[a];
		while(x->p!=NULL)
				x=x->p;
		return x;
}
