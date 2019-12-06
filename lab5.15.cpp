#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	
	printf("enter the string\n");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0)
	printf("string is palindrome");
	
	else
	printf("string is not plindrome");
	
	return 0;
}
