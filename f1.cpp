#include<stdio.h>
main()
{
	FILE *fp;
	char fname[20];
	
	printf("enter the name of the file\n");
	scanf("%s",fname);
	
	fp=fopen("fname","w");
	
	if(fp==NULL)
	{
		printf("file does not created");
		
	}
	printf("file created successfully");
	
	return 0;
	
	
}
