void midorder(TREE t) {
	if (t==NULL)
		return;
	midorder(t->leftChild);
	printf("%c\n", t->nodeLabel);
	midorder(t->rightChild);
}

