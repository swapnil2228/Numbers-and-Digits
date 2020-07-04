//Write a program to return sum of natural numbers using recursion
//input:5
//output:1+2+3+4+5 = 15


#include<stdio.h>
int natural_numbers(int no);
int main(){
	int no;
	printf("enter the number");
	scanf("%d",&no);
	int ans=natural_numbers(no);
	printf("%d",ans);
	return 0;
}
int natural_numbers(int num){
	if(num!=0)
	return num+natural_numbers(num-1);
}
