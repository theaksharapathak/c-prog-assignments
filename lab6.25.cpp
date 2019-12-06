#include<stdio.h>
int ackermann(int m,int n)
{
	if(!m)
	return n+1;
	if(!n)
	return ackermann(m-1,1);
	else
	return ackermann(m-1,ackermann(m,n-1));
}
int main()
{
	int m,n,result;
	printf("enter the value of m and n\n");
	scanf("%d %d",&m,&n);
	
	result=ackermann(m,n);
	printf("Ackermann(%d , %d)= %d\n",m,n,result);
	
	return 0;
}
