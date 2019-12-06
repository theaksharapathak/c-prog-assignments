#include<stdio.h>
int convertDecimalToOctal(int d);

	 main()
{
	int d;
	printf("enter the decimal no\n");
	scanf("%d",&d);
	
	printf("%d in decimal = %d in octal",d,convertDecimalToOctal(d));
	return 0;
	
}

	int convertDecimalToOctal(int d)
	{
		int i=1,oct=0;
		while(d!=0)
		{
			oct+=(d%8)*i;
			d/=8;
			i*=10;
		}
			return oct;
	}
	
