ele_t deletemax(tree* t) {
	if ((*t)==NULL)
		return {0};
	if ((*t)->rightChild==NULL) {
		ele_t max=(*t)->ele;
		*t=(*t)->leftChild;
		return max;
	} else
		return deletemax(&((*t)->rightChild));
}

delete(ele_t x, tree* t) {
	if ((*t)==NULL)
		return;
	if (x<(*t)->ele)
		delete(x, &((*t)->leftChild));
	else if (x>(*t)->ele)
		delete(x, &((*t)->rightChild));
	else
		if ((*t)->leftChild==NULL)
			(*t)=(*t)->rightChild;
		else if ((*t)->rightChild==NULL)
			(*t)=(*t)->leftChild;
		else
			(*t)->ele=deletemax(&((*t)->leftChild));
}

