typedef struct NODE* pNODE;
struct NODE {
	char op;
	int value;
	pNODE leftmostChild, rightSibling;
};

int eval(pNODE n) {
	int val1, val2;
	if (n->op=='i')
		return n->value;
	else {
		val1=eval(n->leftmostChild);
		val2=eval(n->leftmostChild->rightSibling);
		switch (n->op) {
			case '+': return val1+val2;
			case '-': return val1-val2;
			case '*': return val1*val2;
			case '/': return val1/val2;
		}
	}
}

