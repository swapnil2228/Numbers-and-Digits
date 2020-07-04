//Write a program which accept N from user and print all odd numbers up to N.
//INPUT: 18
//OUTPUT: 1 3 5 7 9 11 13 15 17
#include<stdio.h>
void odd(int no);
int main(){
	int no;
	printf("enter number");
	scanf("%d",&no);
	odd(no);
	return 0;
}
void odd(int no){
	int i;
	for(i=1;i<=no;i+=2){
		printf("%d\t",i);
	}
}
