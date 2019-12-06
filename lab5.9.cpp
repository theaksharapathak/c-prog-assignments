#include<stdio.h>
main()
{
	int c=0,upper=0,lower=0,digit=0;
	char s[100];
	printf("enter the string\n");
	gets(s);
	
	while(s[c]!='\0')
	{
		if(s[c]>='A'&& s[c]<='Z')
		upper++;
		
		if(s[c]>='a'&& s[c]<='z')
		lower++;
		
		if(s[c]>='0'&&s[c]<='9')
		digit++;
		
		c++;
	}
	printf("capital letters : %d\n small letter : %d\n digits : %d",upper,lower,digit);
	return 0;

}
