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

void insert_ref(ele_t x, tree* t) {
	if (*t==NULL) {
		*t=malloc(sizeof(struct node));
		(*t)->ele=x;
		(*t)->leftChild=NULL;
		(*t)->rightChild=NULL;
	} else if (x<(*t)->ele)
		insert_ref(x, &((*t)->leftChild));
	else if (x>(*t)->ele)
		insert_ref(x, &((*t)->rightChild));
}

