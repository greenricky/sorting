#include <stdlib.h>

int insert_sort(int *p, unsigned int n)
{
	int i=0, j=0, tmp=0;
	if(NULL == p)
		return -1;

	/*
	range[0, j]: already sorted
	range[j, n]: need to be sorted
	*/
	for(i=1; i<n; i++)
	{
		tmp = p[i];
		for(j=i-1; j>=0; j--)
		{
			if(p[j] > tmp)
			// shift data
				p[j+1] = p[j];
			else 
				break;
		}

		//insert
		p[j+1] = tmp;
	}

	return 0;
}
