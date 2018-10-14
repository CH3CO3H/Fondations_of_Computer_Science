void preorder(TREE t) {
	if (t==NULL)
		return;
	printf("%c\n", t->nodeLabel);
	preorder(t->leftChild);
	preorder(t->rightChild);
}

