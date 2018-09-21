void appand(tree left, tree* right) {
	if ((*right)->leftChild==NULL) {
		(*right)->left=left;
		return;
	}
	appand(left, &((*right)->leftChild));
}

void bad_delete(ele x, tree* t) {
	if (*t==NULL)
		return;
	if (x<(*t)->ele)
		bad_delete(x, &((*t)->leftChild));
	else if (x>(*t)->ele)
		bad_delete(x, &((*t)->rightChild));
	else
		if ((*t)->leftChild==NULL)
			(*t)=(*t)->rightChild;
		else if ((*t)->rightChild==NULL)
			(*t)=(*t)->leftChild;
		else {
			appand((*t)->leftChild, &((*t)->rightChild));
			(*t)=(*t)->rightChild;
		}
}

