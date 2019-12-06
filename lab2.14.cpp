#include<stdio.h>
main()
{
	int a;
	printf("enter the year\n");
	scanf("%d",&a);
	if(((a%4==0) && (a%100!=0) )|| (a%400==0))
	printf("year is a leap year");
	else
	printf("year is not a leap year");
	return 0;
}
