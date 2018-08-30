#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOLEAN;

BOOLEAN findChar(char** pp, char c) {
	while (**pp!=c && **pp!='\0')
		(*pp)++;
	if (**pp=='\0')
		return FALSE;
	else {
		(*pp)++;
		return TRUE;
	}
}

BOOLEAN testWord(char* p) {
	if (findChar(&p, 'a'))
		if (findChar(&p, 'e'))
			if (findChar(&p, 'i'))
				if (findChar(&p, 'o'))
					if (findChar(&p, 'u'))
						return TRUE;
	return FALSE;
}

int main(void) {
	printf("%d\n", testWord("abstemious"));
	return 0;
}
