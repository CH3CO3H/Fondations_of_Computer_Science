void delete(int x, LIST* pl) {
	if (*pl==NULL)
		return;
	if (x==(*pl)->ele)
		(*pl)=(*pl)->next;
	else
		delete(x, &((*pl)->next));
}

