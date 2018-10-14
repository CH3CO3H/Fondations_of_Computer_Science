typedef struct node* pnode;
struct node {
	int lb;
	pnode left, right;
};

int maxLb(pnode n) {
	int max_t=n->lb;
	if (n->left==NULL)
		return max_t;
	pnode c=n->left;
	while (c!=NULL) {
		if (maxLb(c)>max_t)
			max_t=maxLb(c);
		c=c->right;
	}
	return max_t;
}

