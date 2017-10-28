#include "bst.h"
#define NUL ((void*)0)

int dtm(T* p)
{
		int m;
		if ((*p)->l==NUL) {
				m=(*p)->e;
				(*p)=(*p)->r;
				return m;
		}
		return dtm(&((*p)->l));
}

