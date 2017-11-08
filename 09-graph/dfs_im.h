#define MAX 15
typedef int node;

enum MARK_T {VISITED, UNVISITED};
typedef struct {
		enum MARK_T mark;
		list s;
		int p;
} graph[MAX];

typedef struct CELL* list;
struct CELL {
		node name;
		list n;
};
