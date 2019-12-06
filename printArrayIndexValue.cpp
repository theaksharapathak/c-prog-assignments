#include<stdio.h>
#include<string.h>
void printArrayIndexValue(char* arr,int index)
{	
	printf("%c",arr[index]);
}
main()
{
	int index,n,i;
	
	printf("entre the size of the array\n");
	scanf("%d",&n);
	char arr[n];
	
	printf("enter the elements of the array\n");
	gets(arr);// taking arr input
	
//	for(i=0; i<n; i++ ) {
//		scanf("%c", &arr[i]);
//	}
		
//	for(i=0; i<n; i++ ){
//		printf("%c", arr[i]);
//	}

	//printf("%c",printArrayIndexValue(arr,i));
	printArrayIndexValue(arr, 3);
	
	return 0;
}

