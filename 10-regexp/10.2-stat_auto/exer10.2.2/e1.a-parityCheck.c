
bool checkNum(char** pp) {
	while (**pp != 49 && **pp!=0)
		(*pp)++;
	if (**pp == 0)
		return false;
	else {
		(*pp)++;
		return true;
	}
}

bool parityCheck(char* p) {
	unsigned cnt=0;
	while (checkNum(&p))
		cnt++;
	if (cnt&1)
		return false;
	return true;
}

