#include<stdio.h>

int mult(int a,int b);
main()
{
	int a,b,ans;
	
	printf("enter the two nos\n");
	scanf("%d %d",&a,&b);
	
	ans=mult(a,b);
	
	printf(" multiplication of two nos = %d",ans);
	return 0;
}
int mult(int a,int b)
{
	//base cases
	if(a==0 || b==0)
	return 0;
	
	//handles positive values
	if(a==1)
	return b;
	
	if(b==1)
	return a;
	
	//handles negative values
	if(a==-1)
	return -b;
	
	if(b==-1)
	return -a;
	
	//recursive case
	if(a>0 && b>0)
	return mult(a,b-1)+a;
	
	else if(a>0 && b<0)
	return mult(a-1,b)+b;
	
	else if(b>0 && a<0)
	return mult(a,b-1)+a;
	
	else if(a<0 && b<0)
	return mult(-a,-b-1)+ -a;
	
	else
	return 0;
}
