typedef char PVARIETY[32];
typedef struct RCELL* RLIST;
struct RCELL {
	PVARIETY variety;
	PVARIETY pollinizer;
	RLIST next;
};

typedef struct PCELL* PLIST;
struct PCELL {
	PVARIETY pollinizer;
	PLIST next;
};

