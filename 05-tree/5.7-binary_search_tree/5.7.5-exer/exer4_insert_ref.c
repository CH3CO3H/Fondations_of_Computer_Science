bool insert(ele_t x, tree* t) {
	if (*tree==NULL) {
		*t=malloc(sizeof(struct node));
		(*t)->ele=x;
		(*t)->leftChild=(*t)->rightChild=NULL;
		return true;
	} else if (x<(*t)->ele)
		return insert(x, &((*t)->leftChild));
	else if (x>(*t)->rightChild)
		return insert(x, &((*t)->rightChild));
	else return false;
}

