#include <stdio.h>
#include "../5.6.3-recursion_binary_tree/express.h"
void print_exp(TREE t) {
	if (t==NULL)
		return;
	printf("(");
	print_exp(t->leftChild);
	printf("%c", t->nodeLabel);
	print_exp(t->rightChild);
	printf(")");
}

