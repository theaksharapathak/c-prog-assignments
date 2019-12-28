#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	char branch[10];
}s[20];

                                  
main()
{
	int i;
	printf("enter the students information\n");
	for(i=0;i<2;i++)
	{
		printf("enter the roll no\n");
		scanf("%d",&s[i].roll);
		printf("enter the name\n");
		scanf("%s",s[i].name);
		printf("enter the branch\n");
		scanf("%s",s[i].branch);
		
		
	}
	return 0;
}
