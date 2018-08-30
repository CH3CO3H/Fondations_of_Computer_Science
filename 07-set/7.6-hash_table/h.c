#include "hash.h"

unsigned int h(e_t x)
{
	int i, sum;
	sum=0;
	for (i=0;x[i]!='\0';i++)
		sum+=x[i];
	return sum%B;
}

