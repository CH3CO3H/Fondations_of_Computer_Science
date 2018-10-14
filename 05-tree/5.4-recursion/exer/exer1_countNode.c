size_t countNode(pNODE n) {
	if (n==NULL)
		return 0;
	if (n->leftmostChild==NULL)
		return 1U;
	size_t nu=1U;
	pNODE c=n->leftmostChild;
	while (c!=NULL) {
		nu+=countNode(c);
		c=c->rightSibling;
	}
	return nu;
}

