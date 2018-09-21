void insert(int x, LIST* pl) {
	if ((*pl)==NULL) {
		(*pl)=(LIST)malloc(sizeof(struct CELL));
		(*pl)->ele=x;
		(*pl)->next=NULL;
	} else if (x!=(*pl)->ele)
		insert(x, &((*pl)->next));
}

