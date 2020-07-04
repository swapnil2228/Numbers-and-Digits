//Write a progam to swap two numbers.
 //input:10 20
 //output: 20 10
 

#include<stdio.h>
int main(){
	int a,b,temp=0;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d	%d	",a,b);
	return 0;
}
