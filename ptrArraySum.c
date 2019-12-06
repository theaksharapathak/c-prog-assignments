#include<stdio.h>

void inputArray(int *arr, int n) {
	int i;
	for(i=0; i<n; i++) {
		scanf("%d",(arr+i));
	}
}


int main(){
	
	
	int n;
	
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	// making pointer reference to array i.e arr[0]
	int *ptrArr = arr;
	inputArray(ptrArr, n);

	printf("%d",*ptrArr);
	printf("%d", *(ptrArr+1));
	
	return 0;
}

