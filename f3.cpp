#include<stdio.h>
main()
{
	FILE *fp;
	char fname[20];
	
	printf("enter the name of the file\n");
	scanf("%s",fname);
	fp=fopen(fname,"w");
	
	if(fp==NULL)
	{
		printf("file doesn't exist");
	}
	
	printf("file created successfullly\n");
	putc('A',fp);
	putc('B',fp);
	putc('C',fp);
	
	printf("data written successfully\n");
	fclose(fp);
	
	fp=fopen(fname,"r");
	if(fp==NULL)
	{
	printf("Can not open file\n");
	}
	printf("contents of file is\n");
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	
	fclose(fp);
	
	return 0;
	
}
