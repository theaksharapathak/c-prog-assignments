#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("enter the first string\n");
	gets(a);
	printf("enter the second string\n");
	gets(b);
	
	if(strcmp(a,b)==0)
	printf("strings are equal\n");
	
	else
	printf("strings are not equal");
	return 0;
}
