void delete(list p, list* pl) {
	if (p->next!=NULL)
		p->next->previous=p->previous;
	if (p->previous==NULL)
		(*pl)=p->next;
	else
		p->previous->next=p->next;
}

