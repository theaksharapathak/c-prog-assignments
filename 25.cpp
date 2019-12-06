#include<stdio.h>
#include<string.h>

void reversearray(char *arr[],char *start)
{
	char *end;
	int *temp;
	while(*start<*end)
	{
		*temp=*start;
		*start=*end;
		*end=*temp;
		
		start++;
		end--;
	}
}
main()

{
	int i,n;char start,end;
	
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	
	char *arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",arr+i);
	}
	
	reversearray(arr,0);
	
	for(i=n-1;i>=0;i--)
	{
		printf("%s:",*(arr+i));
	}
	
	return 0;

	
	
}
