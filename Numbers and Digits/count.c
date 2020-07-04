//Write a program that accepts a number and returns the count of a digits.
//input: 1234 output:count is 4

#include<stdio.h>
int main(){
	int no;
	int count=0;
	printf("enter number:");
	scanf("%d",&no);
	while(no!=0){
		no=no/10;
		count++;
	}
	printf("%d",count);
}
