#include<stdio.h>
#define filename "test.txt"
main()
{
	FILE *fp;
	char ch;
	int linecount=0;
	
	fp=fopen(filename,"r");
	
	if(fp==NULL)
	{
		printf("file doesn't exist");
		
	}
	
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		linecount++;
	}
	fclose(fp);
	printf("total no of lines are %d",linecount);
	
	return 0;
}
