#include<stdio.h>

main()
{
	FILE *fpe,*fpo;
	int i;
	fpe=fopen("even.dat","w");
	fpo=fopen("odd.dat","w");
	
	fprintf(fpe,"even nos are\n");
	fprintf(fpo,"odd nos are\n");
	
	for(i=1;i<100;i++)
	{
		if(i%2==0)
		fprintf(fpe,"%d\n",i);
		else
		fprintf(fpo,"%d",i);
	}
	fclose(fpo);
	fclose(fpe);
	
}
