void clear(stack* ps) {
	ps->top=-1;
}

bool isempty(stack* ps) {
	return (ps->top<0);
}

bool isFull(stack* ps) {
	return (ps->top>=MAX-1);
}

bool pop(stack* ps, int *px) {
	if (isEmpty(ps))
		return false;
	else {
		*px=ps->A[(ps->top)--];
		return true;
	}
}

bool push(int x, stack* ps) {
	if (isFull(ps))
		return false;
	else {
		ps->A[++(ps->top)]=x;
		return true;
	}
}

