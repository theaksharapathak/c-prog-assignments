#include<stdio.h>
void TOH(int n, char source,char temp,char dest);
main()
{
	int n;
	char source='s',temp='t',dest='d';
	
	
	printf("enter the no of discs\n");
	scanf("%d",&n);
	
	printf("The sequence of moves involved in the tower of hanoi are:\n");
	TOH(n,source,temp,dest);
	return 0;
}
void TOH(int n,char source,char temp,char dest)
{
	if(n>0)
	{
		TOH(n-1,source,dest,temp);
		printf("Move a disc %d from %c to %c\n",n,source,dest);
		TOH(n-1,temp,source,dest);
	}
}
