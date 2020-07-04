//Write a program which accept N from user and print all even numbers up to N.
//INPUT: 18
//OUTPUT: 2 4 6 8 10 12 14 16 18
#include<stdio.h>
void even(int no);
int main(){
	int no;
	printf("enter number");
	scanf("%d",&no);
	even(no);
	return 0;
}
void even(int no){
	int i;
	for(i=2;i<=no;i+=2){
		printf("%d\t",i);
	}
}
