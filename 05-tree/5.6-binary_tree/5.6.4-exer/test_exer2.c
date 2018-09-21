#include "express.h"
#include <stdio.h>

void print_exp(TREE);

int main(void) {
	struct NODE exp[7]={0};
	exp[0].nodeLabel='+';
	exp[1].nodeLabel='a';
	exp[2].nodeLabel='*';
	exp[3].nodeLabel='-';
	exp[4].nodeLabel='b';
	exp[5].nodeLabel='c';
	exp[6].nodeLabel='d';
	exp[0].leftChild=&exp[1];
	exp[0].rightChild=&exp[2];
	exp[2].leftChild=&exp[3];
	exp[2].rightChild=&exp[4];
	exp[3].leftChild=&exp[5];
	exp[3].rightChild=&exp[6];
	print_exp(exp);
	putchar('\n');
	return 0;
}
