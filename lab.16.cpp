#include<string.h>
#include<stdio.h>
main()
{
	char a[100];
	int count =0,i;
	printf("enter the string\n");
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='A' || a[i]=='E'|| a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' ||a[i]=='o' || a[i]=='e' || a[i]=='i' || a[i]=='u')
		{
			count++;
		}
		
	}
	printf("total no of vowels in it is %d",count);
	
	return 0;
}
