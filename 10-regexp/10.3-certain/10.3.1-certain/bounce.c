void bounce(void) {
	char x;
	putchar('0');
a:
	x = getchar();
	if (x=='0')
		goto a;
	if (x=='1')
		goto b;
	goto finis;
b:
	putchar('0');
	x=getchar();
	if (x=='0')
		goto a;
	if (x=='1')
		goto c;
	goto finis;

c:
	putchar('1');
	x=getchar();
	if (x=='0')
		goto d;
	if (x=='1')
		goto c;
	goto finis;
d:
	putchar('1');
	x=getchar();
	if (x=='0')
		goto a;
	if (x=='1')
		goto c;
	goto finis;
finis:
	;
}
