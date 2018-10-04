//sorting algorithm
#include <stdio.h>

extern int bubble_sort(int *p, unsigned int n);

int main()
{
	int i=0;
	int d[] = {3,4,1,2,7};
	bubble_sort(d, sizeof(d)/sizeof(d[0]));	

	for (i=0; i<sizeof(d)/sizeof(d[0]); i++)
	{
		printf("%d ", d[i]);
	}

	printf("\n");
	return 1;
}
