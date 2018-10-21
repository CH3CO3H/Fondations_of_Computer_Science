void mrg(tree x, tree y)
{
		tree h, l;
		if(x->h>y->h) {
				h=x;
				l=y;
		} else {
				h=y;
				l=x;
		}
		l->p=h;
		if (l->h==h->h)
				h->h++;
}
