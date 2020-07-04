//write a program which accept N Numbers from user and print second last minimum number from that numbers.
//INPUT: 4 7 2 1 5 3 8
//OUPUT: 2
//INPUT: 5 5 5 5 5 5 5 
//OUTPUT: -1
#include<stdio.h>
int main()
{
	int n,m,i,min,secmin;
	printf("how many numbers you want....");
	scanf("%d",&n);
	printf("enter the numbers");
	scanf("%d",&m);
	secmin=min=m;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&m);
		if(min>m)
		{
			secmin=min;
			min=m;
		}
		if(min==secmin)
		{
			secmin=m;
		}
		if(m<secmin && m>min)
		{
			secmin=m;
		}
	}
	if(secmin==min)
	{
		secmin=-1;
	}
	printf("second minimum is %d",secmin);
	return 0;
}

