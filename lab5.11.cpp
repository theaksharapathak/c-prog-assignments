#include<stdio.h>
#include<string.h>
main()
{
	char s[100],rs[100];
	int len,i,j=0;
	printf("enter the original string\n");
	gets(s);
	
	len=strlen(s);
	
	for(i=len-1;i>=0;i--)
	{
		rs[j++]=s[i];
		
	}
	rs[j]='\0';
	printf("reversed string is %s",rs);
	
	return 0;
}

