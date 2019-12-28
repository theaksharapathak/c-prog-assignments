#include<stdio.h>
main()
{
	char a;
	printf("enter the character\n");
	scanf("%c",&a);
	
	if(a>='a'&&a<='z')
	printf("character is in lowercase\n",a);
	
	else if(a>='A'&&a<='Z')
	printf("character is in uppercase\n",a);
	
	else if(a>='0' &&a<='9')
	printf("character is a digit\n",a);
	
	else
	printf("character is a special case",a);
	
	return 0;
}
