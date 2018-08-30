#include "def.h"

extern L mkl();
extern void prl(L);
extern L mgs(L);

int main(int argc, const char* argv[])
{
	L l;
	l=mkl();
	prl(mgs(l));
	return 0;
}

