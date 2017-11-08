#include <stdio.h>
#include <stdlib.h>

void fun_ist(d_t a, r_t b, list* p)
{
	if (*p==NULL) {
		*p=malloc(sizeof(struct CELL));
		strcpy((*p)->d, a);
		strcpy((*p)->r, b);
		(*p)->n=NULL;
	} else if (!strcmp(a, (*p)->d))
		strcpy((*p)->r, b);
	else
		fun_ist(a, b, &((*p)->n));
}

