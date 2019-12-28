#include<stdio.h>
main()
{
	char c,check,uppercase,lowercase;
	printf("enter the character\n");
	scanf("%c",&c);
	
	check=(c>'A' && c<'Z')? uppercase:lowercase;
	
	printf("the character is in %c",check);
	
	return 0;
}
