typedef struct NODE* pNODE;
struct NODE {
	char nodeLabel;
	pNODE leftmostChild, rightSibling;
};

