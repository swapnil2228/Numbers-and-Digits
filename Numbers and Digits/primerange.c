//write a program to print prime in range.
//INPUT:1 10
//OUTPUT: 2,3,5 7


#include<stdio.h>
void printPrime(int start, int end);
int isPrime(int num);
int main()
{
	int start,end;
	printf("enter the starting range");
	scanf("%d",&start);
	printf("enter the last range");
	scanf("%d",&end);
	printf("-----------------------------------------------------------------\n");
	printf("the prime numbers between %d and %d are\n",start,end);
	printPrime(start,end);
	return 0;
}
int isPrime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
void printPrime(int start,int end)
{
	while(start<=end)
	{
		if(isPrime(start) && start!=1)
		{
			printf("%d\n",start);
		}
		start++;
	}
}
