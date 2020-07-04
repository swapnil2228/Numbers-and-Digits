//write a program to check given number is prime number or not.
//INPUT:5
//OUTPUT: 5 is prime number.


#include<stdio.h>
void isPrime(int num);
int main()
{
	int no;
	printf("enter the numebr");
	scanf("%d",&no);
	printf("the number %d is",no);
	isPrime(no);
	return 0;
	
}
void isPrime(int num)
{
	int i,prime=1;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
	}
	if(prime==1)
		printf("prime");
}

