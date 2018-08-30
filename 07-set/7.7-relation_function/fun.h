typedef char r_t[1<<5];
typedef char d_t[1<<5];

typedef struct CELL* list;
struct CELL {
	d_t d;
	r_t r;
	list n;
};

