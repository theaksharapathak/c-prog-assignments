#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,len;
	printf("enter the string\n");
	gets(a);
	
	len=strlen(a);
	printf("reverse string is:\n");
	for(i=len-1;i>=0;i--)
	{
		
		//base condition
		if(i==0)
		{
			printf("%c",a[i]);
			break;
		}
		else
		printf("%c",a[i]);
		
	}
	
}
