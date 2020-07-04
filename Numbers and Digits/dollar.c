//accpet the number from user and print the $ on screen that time
#include<stdio.h>
void print(int no){
	while(no>0){
		printf("$");
		no--;
	}
}
int main(){
	int no;
	printf("enter number");
	scanf("%d",&no);
	print(no);
	return 0;
}
