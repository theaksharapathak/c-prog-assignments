#include<stdio.h>
main()
{
	FILE *fp1,*fp2;
	char c;
	
	fp1=fopen("file1","r");
	
	if(fp1==NULL)
	{
		printf("file doesn't open\n");
	}
	printf("file opened successfully\n");
	
	fp2=fopen("file2","w");
	
	if(fp2==NULL)
	{
		printf("file doesn't open\n");
	}
	
	c=fgetc(fp1);
	
	while(c!=EOF)
	{
		putc(c,fp2);
		c=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
