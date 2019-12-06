#include<stdio.h>
main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("%c is in uppercase",ch);
	else if(ch>='a' && ch<='z')
	printf("%c is in lowercase",ch);
	else if(ch>='0' && ch<='9')
	printf("%c is a digit",ch);
	else
	printf("%c is a special character",ch);
	
	return 0;
}
