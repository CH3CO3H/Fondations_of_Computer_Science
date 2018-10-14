void preorder(pNODE n) {
	pNODE c;
	printf("%c\n", n->nodeLabel);
	c=n->leftmostChild;
	while (c!=NULL) {
		preorder(c);
		c=c->rightSibling;
	}
}

