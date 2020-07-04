//Write a program to accept Number from user and print its numberline
//INPUT:4
//OUTPUT: -4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>
void numberline(int no){
	int i;
	for(i=(-no);i<no;i++){
		printf("%d\t",i);
	}
}
int main(){
	int no;
	printf("enter no");
	scanf("%d",&no);
	numberline(no);
	return 0;
}
