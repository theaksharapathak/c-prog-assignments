#include<stdio.h>
void TOH(int n, char A,char B,char C);
main()
{
	int n;
	char A='s',B='t',C='d';
	
	
	printf("enter the no of discs\n");
	scanf("%d",&n);
	
	printf("The sequence of moves involved in the tower of hanoi are:\n");
	TOH(n,A,B,C);
	return 0;
}
void TOH(int n,char A,char B,char C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("Move a disc %d from %c to %c\n",n,A,C);
		TOH(n-1,B,A,C);
	}
}
