void insert(ele_t x, list l) {
	list z=malloc(sizeof(struct CELL));
	z->next=l->next;
	z->previous=l;
	l->next=z;
	if (z->next!=NULL)
		z->next->previous=z;
}

