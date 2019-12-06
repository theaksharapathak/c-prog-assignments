#include<iostream>
using namespace std;

void printArrIndexValue(char arr[], int index){
	cout<<arr[index];
}

// Recursively reverse string
void reverseString(char arr[], int index ){
	
	if(index<=0)
	{
		printf("%c",arr[index]);
		break;
	}
	else
	printf("%c",reverseString(arr[index],index));
}


int main(){
	
	int n;
	cout<<"Enter size of Array\n";
	cin>>n;
	char arr[n];
	cout<<"Enter string\n";
	cin>>arr;
	
	
	printArrIndexValue(arr, 2);
	
	
}
