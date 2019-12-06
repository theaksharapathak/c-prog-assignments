#include<stdio.h>

int power(int base,int powerRaised);
int main()
{
	int base,powerRaised,result;
	printf("enter base no\n");
	scanf("%d",&base);
	
	printf("enter power no(positive integer):\n");
	scanf("%d",&powerRaised);
	
	result=power(base,powerRaised);
	printf("%d ^ %d = %d",base,powerRaised,result);
	
	return 0;
}
int power(int base,int powerRaised)
{
	if(powerRaised!=0)
	return (base*power(base,powerRaised-1));
	
	else
	return 1;
}
