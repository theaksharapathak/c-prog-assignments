#include<stdio.h>
main()
{
	int i;
	
	printf("ASCII values of all small letters are\n");
	
	for(i=97;i<=122;i++)
	{
		printf("%c : %d\n",i,i);
	}
	return 0;
}
