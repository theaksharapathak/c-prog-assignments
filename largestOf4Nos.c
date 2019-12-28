#include<stdio.h>
#include<stdlib.h>
int main()
{ 
 int a,b,c,d,largest;
 
 //Getting the numbers
 printf("Enter the numbers out of which you have to find the greatest\n ");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 
 //Actual Computation
 largest= (((a>b)?a:b) > ((c>d)?c:d))  ?  ((a>b)?a:b) : ((c>d)?c:d) ;
 
 
 
 printf("The largest number is %d",largest);
 return 0;
}
