#include<stdio.h>
void addVoid(int x, int y){
	printf("%d",x+y);
}
int addReturn(int x, int y) {
	return (x+y);
}
int main(){
	printf("%d",addVoid(5,10));
	printf("\n%d",addReturn(5,20));
	return 0;
}

