#include<stdio.h>
#include<string.h>
main()
{
	int i,len;
	char a[100];
	printf("enter a string\n");
	gets(a);
	
	len=strlen(a);
	
	for(i=len-1;i>=0;i--)
	{
		printf("%s",a);
	}
	return 0;
}
