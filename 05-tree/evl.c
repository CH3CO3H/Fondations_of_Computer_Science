#include "def_lr_exp_evl.h"

int evl(P n)
{
		if (n->o=='i')
				return n->v;
		int vl, vr;
		vl=evl(n->l);
		vr=evl(n->l->r);
		switch(n->o) {
				case '+':return vl+vr;
				case '-':return vl-vr;
				case '*':return vl*vr;
				case '/':return vl/vr;
				case '%':return vl%vr;
		}
		return 0;
}

