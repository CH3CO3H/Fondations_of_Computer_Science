tree insert(element_t x, tree t) {
	if (t==NULL) {
		t=malloc(sizeof(struct node));
		t->element=x;
		t->leftChild=NULL;
		t->rightSibling=NULL;
	} else if (x<t->element)
		t->leftChild=insert(x, t->leftChild);
	else if (x>t->element)
		t->leftChild->rightSibling=insert(x, t->leftChild->rightSibling);
	return t;
}

