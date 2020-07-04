//write a program to print perfect numbers in given rangeOB
//INPUT: 1 10
//OUTPUT:6 is Perfect Number.

#include<stdio.h>
int isPerfect(int num);
void printPerfect(int start, int end);
int main()
{
	int start,end;
	printf("\n enter the starting limit\n");
	scanf("%d",&start);
	printf("\n enter the end limit \n");
	scanf("%d",&end);
	printf("the perfect number between %d and %d are:",start,end);
	printPerfect(start,end);
	return 0;
}
int isPerfect(int num)
{
	int i,sum=0;
	for(i=1;i<=num/2;i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(num==sum)
		return 1;
	else
		return 0;
}
void printPerfect(int start, int end)
{
	while(start<=end)
	{
		if(isPerfect(start))
			printf("%d",start);
	start++;
	}
}
