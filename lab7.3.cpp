#include<stdio.h>
main()
{
	int count=0;
	
	int arr[5]={2,3,4,1,8};
	int *pointer=arr;
	
	printf("enter array elements\n");
	
	while(count<5)
	{
		printf("%f",*(pointer+count));
		
		count++;
		
	}
	return 0;		
}

