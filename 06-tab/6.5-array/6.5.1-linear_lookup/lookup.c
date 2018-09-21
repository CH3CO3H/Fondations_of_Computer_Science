bool lookup(int x, LIST* pl) {
	for (size_t i=0;i<pl->length;i++)
		if (x==pl->A[i])
			return true;
	return false;
}

