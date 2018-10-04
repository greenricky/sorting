#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*
note: the type of 2nd/3rd parameter should be "int",
      not "unsigned int", or it will be infinite loop.
*/
int quick_sort(int *p, int l, int r)
{
	int i=0, j=0, pivot=0;
	if(NULL == p)
		return -1;
	
	printf("%d-%d\n", l, r);	
	sleep(1);

	if(l < r)
	{
		/*reference point*/
		pivot = p[l];

		i=l;
		j=r;

		while(i<j)
		{
			/*note: >=, not >, for equal value, avoid infinite looping*/
			while( (p[j]>=pivot) && (i<j) )
				j--;
			p[i] = p[j];

			/*note: <=, not <, for euqal value, avoid infinite looping*/
			while( (p[i]<=pivot) && (i<j) )
				i++;
			p[j] = p[i];
		}

		p[i]= pivot;

		quick_sort(p, l, i-1);
		quick_sort(p, i+1, r);
	}
	
	return 1;
}
