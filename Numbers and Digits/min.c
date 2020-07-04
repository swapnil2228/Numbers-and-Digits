//write a program which accept N Numbers from user and print minimum from that numbers.
//INPUT:4 7 2 1 5 3 8
//OUTPUT: 1

#include<stdio.h>
int main()
{
	int n,m,min,i;
	printf("how many numbers you want...");
	scanf("%d",&n);
	printf("enter the numbers...");
	scanf("%d",&m);
	min=m;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&m);
		if(m<min)
		{
			min=m;
		}
	}
	printf("minimum is =%d",min);
	return 0;
}
