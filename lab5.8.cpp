#include<stdio.h>
main()
{
	char s[100];
	int c=0;
	printf("enter the string\n");
	gets(s);
	
	while(s[c]!='\0')
	{
		c++;
	}
	printf("length of the string is %d",c);
	return 0;
	
	
	
}
