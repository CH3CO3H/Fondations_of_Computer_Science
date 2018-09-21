void insert(ele_t x, list* l) {
	l->A[l->length]=x;
	(l->length)++;
}

size_t lookup(ele_t x, list* l);

void delete(ele_t x, list* l) {
	int pos=lookup(x, l);
	if (pos<l->length)
		for (size_t i=pos;i<l->length-1;i++)
			l->A[i]=l->A[i+1];
	l->length--;
}

