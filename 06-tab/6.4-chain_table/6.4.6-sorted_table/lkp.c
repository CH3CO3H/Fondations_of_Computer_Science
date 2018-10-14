bool lookup(int x, L l)
{
		if (l==NULL)
				return false;
		if (x>l->e)
				return lookup(x, l->n);
		if (x==l->e)
				return true;
		return false;
}

