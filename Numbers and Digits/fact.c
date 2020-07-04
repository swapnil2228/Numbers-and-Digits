//write a program to find Factorial
//INPUT:5
//OUTPUT:120
#include<stdio.h>
void fact(int num);
int main()
{
	int num;
	printf("enter number to find the factorial\n");
	scanf("%d",&num);
	printf("the factorial of %d is::\n",num);
	printf("--------------------------------------\n");
	fact(num);
	return 0;
}
void fact(int num){
	int i,fact=1;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("%d",fact);
}
