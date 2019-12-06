#include<stdio.h>
int compare(char a[],char b[]);
main()
{
	char a[100],b[100];
	int res;
	
	printf("enter the first string\n");
	gets(a);
	printf("enter the second string\n");
	gets(b);
	
	res=compare(a,b);
	if(res==0)
	{
		printf("strings are equal");
	}
	else if(res<0)
	{
		printf("first string is lexicographically smaller than second");
	}
	else
	{
		printf("first string is lexicographically greater than second");
	}
	return 0;
}
int compare(char a[],char b[])
{
	int i=0;
	while(a[i]==b[i])
	{
		if(a[i]=='\0'&&b[i]=='\0')
		break;
		i++;
	}
	return a[i]-b[i];	
}
