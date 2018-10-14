void insert(ele_t x, list* l) {
	if (*l==NULL) {
		*l=malloc(sizeof(struct CELL));
		(*l)->ele=x;
		(*l)->next=NULL;
	} else if (x<(*l)->ele) {
		list z=malloc(sizeof(struct CELL));
		z->ele=x;
		z->next=(*l);
		(*l)=z;
	} else if (x>(*l)->ele)
		insert(x, &((*l)->next));
}

void delete(ele_t x, list* l) {
	if (*l==NULL || (*l)->ele>x)
		return;
	if ((*l)->ele==x) {
		(*l)=(*l)->next;
		return;
	}
	delete(x, &((*l)->next));
}

