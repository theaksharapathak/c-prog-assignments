#include<string.h>
#include<stdio.h>
main()
{
	char a[100];
	int i;
	
	printf("enter the string\n");
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(i==0)
		{
			printf("%s\n",a[i]);
		}
		if(a[i]==' ')
		{
			printf("%s\n",a[i+1]);
		}
	}
	return 0;
}
