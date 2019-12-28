#include<stdio.h>

struct student
{
	int registration_no;
	char name[50];
	char branch[50];
}s[20];

main()
{
	int i;
	printf("enter the students information\n");
	for(i=0;i<5;i++)
	{
		printf("enter the name\n");
		scanf("%s",s[i].name);
		printf("enter the registraion no\n");
		scanf("%d",&s[i].registration_no);
		printf("enter the branch\n");
		scanf("%s",s[i].branch);
	}
	return 0;
}
