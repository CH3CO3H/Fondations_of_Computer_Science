typedef struct CELL* LIST;
struct CELL {
	LIST previous;
	int element;
	LIST next;
};

