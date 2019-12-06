#include<stdio.h>
 
int string_length(char*);
void reverse(char*);
 
main()
{
   char s[100];
 
   printf("Enter a string\n");
   gets(s);
 
   reverse(s);
 
   printf("Reverse of the string is \"%s\".\n", s);
 
   return 0;
}
