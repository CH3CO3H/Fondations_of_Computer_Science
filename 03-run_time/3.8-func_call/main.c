#include <stdio.h>

int bar(int x, int n);
int foo(int x, int n);

int main(void) {
	int a, n;
	scanf("%d", &n);
	a = foo(0, n);
	printf("%d\n", bar(a, n));
	return 0;
}

int bar(int x, int n) {
	int i;
	for (i=1;i<=n;i++)
		x+=i;
	return x;
}

int foo(int x, int n) {
	int i;
	for (i=1;i<=n;i++)
		x += bar(i, n);
	return x;
}

