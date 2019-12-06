#include<stdio.h>
main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("new form is %c",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("new form is %c",ch);
	}
	return 0;
}
