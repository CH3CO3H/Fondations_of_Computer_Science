void insert(ele_t x, list* l) {
	list z=malloc(sizeof(struct CELL));
	z->ele=x;
	z->next=(*l);
	(*l)=z;
}

void delete(ele_t x, list* l) {
	if ((*l)==NULL)
		return;
	if ((*l)->ele==x) {
		(*l)=(*l)->next;
	}
	delete(x, &((*l)->next));
}

