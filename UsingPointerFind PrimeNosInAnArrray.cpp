#include<stdio.h>
int isPrime(int n)
{
	int flag=0,i;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;	
		}
	}
	if(flag==1)
	return 0;
	else
	return 1;
}
main()
{
	int *ptr,i,n,flag=1;
	
	printf("enter the no of elements: \n");
	scanf("%d",&n);
	
	int arr[n];
	ptr=arr;
	
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("prime nos in an array are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%s: %d\n",(isPrime(*ptr+i))?"prime":"non-prime",*(ptr+i));
	}
	return 0;
}
