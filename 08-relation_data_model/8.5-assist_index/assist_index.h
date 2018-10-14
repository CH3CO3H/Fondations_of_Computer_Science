typedef struct TUPLE* TUPLELIST;
struct TUPLE {
	int StudentId;
	char Name[30];
	char Address[50];
	char Phone[8];
	TUPLELIST next;
};
typedef TUPLELIST HASHTABLE[2];

typedef struct NODE* TREE;
struct NODE {
	char Name[30];
	TUPLELIST toTuple;
	TREE lc;
	TREE rc;
};

