bool lookup(int x, LIST L) {
	if (L==NULL)
		return false;
	if (x==L->ele)
		return true;
	return lookup(x, L->next);
}

