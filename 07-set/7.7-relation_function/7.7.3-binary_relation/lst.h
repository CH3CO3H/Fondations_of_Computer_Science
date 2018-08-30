typedef char pvt[1<<5];
typedef struct RCEL* rlst;
struct RCEL {
	pvt v;
	pvt p;
	rlst n;
};
typedef struct PCEL* plst;
typedef struct PCEL {
	pvt p;
	plst n;
};
