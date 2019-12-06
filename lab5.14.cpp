#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("enter the 1st string\n");
	gets(a);
	
	printf("enter the second string\n");
	gets(b);
	
	strcat(a,b);
	printf("string after concatenation is %s",a);
	
	return 0;
}
