#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
	char s[100];
	int i;
	printf("enter the string\n");
	gets(s);
	
	for(i=0;i<strlen(s);i++)
	{
		if(i==0 || s[i-1]==' ')
		{
			if(s[i]>=97 && s[i]<=122)
			{
				s[i]=s[i]-32;
			}
		}
		
		else
		{
			if(s[i]>=65 && s[i]<=90)
			{
				s[i]=s[i]+32;
			}
		}
	}
		printf("%s",s);
		return 0;
}
