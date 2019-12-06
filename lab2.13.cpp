#include<stdio.h>
main()
{
	char a;
	printf("enter the character\n");
	scanf("%c",&a);
	printf("previous character is %c\n",a-1);
	printf("next character is %c",a+1);
	return 0;
}
