//WAP that reads 10 integers from an existing ASCII file,square the nos and writes 
//to another ASCII file sqr.txt

#include<stdio.h>

void printSquare(int *arr, int size) {
	if(size<1){
		printf("\nEmpty array\n");
		return ;
	}else {
		printf("\nTotal digit : %d", size);
	}
	// arr = [5,4,5] => 545 => 545*545 Answer
	int finalNum=0,i=0; // stores summation of all numbers of arr
	// iterates through array
	while(i<size) {
		finalNum = finalNum * 10;
		
		printf("\nArray digit:  %d", *arr);
			
		finalNum += *arr; // stores 1st element of Array
		arr++; // arr points to next index
		
		i++;	
	}
	// print Square of finalNum
	int square = finalNum * finalNum;
	printf("\nSquare of %d is %d\n", finalNum, square);
	
}
main()
{
	FILE *fp1,*fp2;
	char filenamee[20], c;
	printf("Enter the name of the file: ");
	scanf("%s",filenamee);
	
	fp1=fopen(filenamee,"r");
	
	if(fp1==NULL)
	{
		printf("file does not exist\n");
		
	}
	printf("file exists\n");
	
	printf("contents of file is\n ");

//	printf("%c",getc(fp1));
//	printf("%c",getc(fp1));
//	printf("%c",getc(fp1));
//	printf("%c",getc(fp1));
	
	c = getc(fp1);
 	int num_arr[100],len=0;//len stores number of digits of Number	
	while(c != EOF) {
		
		printf("\n%c", c);
		c = getc(fp1);
		
		// checks wheather c is space-char or not: [5 45 654 98]
		if(c==' ') {
		//	int *arr = num_arr;
			printf("\nNumArr at index 0: ", num_arr[0]);
			printSquare(&num_arr[0], len);
			len=0;
			
		}else { // if c is not a space-char
			num_arr[len] = (int)c; // store the numeric char in array
			printf("\nNumArr at index %d is %d: ", len, num_arr[len]);

			len++;
		}
		
	}

	
	fclose(fp1);
	
	return 0;
}
