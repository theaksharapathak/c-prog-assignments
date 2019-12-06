#include<stdio.h>
#include<math.h>
main()
{
	int i,n,sum=0,sum1=0,a[100];
	float mean,sd,var;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		
	}
	mean=sum/float(n);
	for(i=0;i<n;i++)
	{
		sum1+=pow((a[i]-mean),2);
	}
	var=sum1/float(n);
	sd=sqrt(var);
	printf("mean= %.2f\n standard deviation=%.2f",mean,sd);
	return 0;
}
