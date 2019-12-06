#include<stdio.h>
main()
{
	int n,r,largest=0;
	printf("enter the digit\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		if(r>largest)
		largest=r;
		n=n/10;
		
	}
	printf("largest digit in it is %d",largest);
	return 0;
}
