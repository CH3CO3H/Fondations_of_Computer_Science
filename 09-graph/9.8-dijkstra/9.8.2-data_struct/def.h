typedef struct {
	float dist;
	list successors;
	potnode topot;
} graph[MAX];
typedef struct cell* list;
struct cell {
	node nodeName;
	float nodeLabel;
	list next;
};
typedef node pot[MAX+1];

