#include "bst.h"

#define NUL ((void*)0)

void dlt(int x, T* p)
{
		if ((*p))
				if (x<(*p)->e)
						dlt(x, &((*p)->l));
				else if (x>(*p)->e)
						dlt(x, &((*p)->r));
				else
						if ((*p)->l==NUL)
								(*p)=(*p)->r;
						else if ((*p)->r==NUL)
								(*p)=(*p)->l;
						else
								(*p)->e=dtm(&((*p)->r;));
}

