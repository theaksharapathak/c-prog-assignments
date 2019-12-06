#include<stdio.h>


main()
{
	int i,n1,n2,*ptr1,*ptr2;
	printf("enter the size of the 1st array\n");
	scanf("%d",&n1);
	
	printf("enter the size of the 2nd array\n");
	scanf("%d",&n2);
	
	int a[n1],b[n2];
	ptr1=a;
	ptr2=b;
	
	printf("enter the elements of the 1st array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",ptr1+i);
	}
	printf("enter the elements of the 2nd array\n");
	
	for(i=0;i<n2;i++)
	{
		scanf("%d",ptr2+i);
	}
	
	for(i=0;i<n2;i++)
	{
		if(*(ptr1+i)!=*(ptr2+i))
		printf("arrays are different\n");
		else
		printf("arrays are same\n");
	}
 
 return 0;
}
