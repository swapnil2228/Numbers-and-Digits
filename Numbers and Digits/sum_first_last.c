//Write a program to sum first and last digit of a number.
//input: 8523
//ouput : 11 (8+3)
#include<stdio.h>
int main(){
	int no=0,temp=0,last=0,first=0,sum=0;
	printf("enter the number");
	scanf("%d",&no);
	temp=no;
	last=temp%10;
	while(temp!=0){
		first=temp%10;
		temp/=10;
	}
	sum=first+last;
	printf("%d	",sum);
	return 0;

}
