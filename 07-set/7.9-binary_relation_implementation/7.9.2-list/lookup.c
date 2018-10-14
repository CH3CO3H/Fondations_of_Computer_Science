PLIST lookup(PVARIETY a, RLIST L) {
	PLIST P;
	if (L==NULL)
		return NULL;
	else if (!strcmp(L->variety, a)) {
		P=(PLIST)malloc(sizeof(struct PCELL));
		strcpy(P->pollinizer, L->pollinizer);
		P->next=lookup(a, L->next);
		return P;
	} else
		return lookup(a, L->next);
}

