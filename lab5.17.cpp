#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int count=0,i;
	
	printf("enter the sentence\n");
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		count++;
		
	}
	printf("%d",count);
	
}
