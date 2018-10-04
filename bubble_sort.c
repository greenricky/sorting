int bubble_sort(int *p, unsigned int n)
{
	int i,j,tmp=0;
	if(NULL == p)
		return -1;

	for(i=0; i<n-1; i++)
	{
		for(j=n-1; j>i; j--)
		{
			if(p[j-1] > p[j])
			{
				tmp = p[j-1];
				p[j-1] = p[j];
				p[j] = tmp;	
			}
		}
	}
	return 0;
}
