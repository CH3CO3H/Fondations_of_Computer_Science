typedef struct TUPLE* TUPLELIST;
struct TUPLE {
	int StudentId;
	char Name[30];
	char Address[50];
	char Phone[8];
	TUPLELIST next;
};
typedef TUPLELIST HASHTABLE[1009];
