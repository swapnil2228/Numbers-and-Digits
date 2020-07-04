//write a program to check given numbers is perfect number or not.
//INPUT:6
//OUTPUT:6 is Perfect Number.
//perfect number mhnje dilelya number chya factor sum tya number evdhich aali pahije
#include<stdio.h>
int main()
{
	int i,num,sum=0;	
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0){
			sum+=i;
		}
	}
	if(num==sum)
	{
		printf("number is perfect number");
	}
	else
		printf("not perfect");
return 0;
}
