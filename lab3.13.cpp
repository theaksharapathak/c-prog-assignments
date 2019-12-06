#include<stdio.h>
main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	
	(ch>='A' && ch<='Z')? printf("it is in uppercase"):printf("it is in lowrcase");
	
	return 0;
	
}
