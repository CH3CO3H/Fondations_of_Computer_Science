bool lookup(int x, list* pl) {
	int i;
	pl->A[pl->length]=x;
	i=0;
	while(x!=pl->A[i])
		i++;
	return (i<pl->length);
}

