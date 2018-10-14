void postorder(pNODE n) {
	pNODE c;
	c=n->leftmostChild;
	while (c!=NULL) {
		postorder(c);
		c=c->rightSibling;
	}
	printf("%c\n", n->nodeLabel);
}

