void clear(stack* ps) {
	*ps=NULL;
}

bool isEmpty(stack* ps) {
	return (*ps==NULL);
}

bool isFull(stack* ps) {
	return false;
}

bool pop(stack* ps, int* px) {
	if (*ps==NULL)
		return false;
	else {
		*px=(*ps)->element;
		(*ps)=(*ps)->next;
		return true;
	}
}

bool push(int x, stack* ps) {
	stack newcell;
	newcell=malloc(sizeof(struct cell));
	newcell->element=x;
	newcell->next=*ps;
	*ps=newcell;
	return true;
}

