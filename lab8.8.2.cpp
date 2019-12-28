#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=(int *)malloc(sizeof(int));
	
	free(ptr);
	
	ptr=NULL;
	
	return 0;
}
