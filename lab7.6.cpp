#include<stdio.h>
#include<string.h>

void reversearray(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp=start;
		start=end;
		end=temp;
		
		start++;
		end--;
	}
}
main()

{
	int i,n,start,end;
	
	printf("enter the no of elements:\n");
	scanf("%d",&n);
	
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	reversearray(a,0,n-1);
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d:",a[i]);
	}
	
	return 0;

	
	
}
