//write a program which accept N Numbers from user and print second last maximum number from that numbers.
//INPUT: 4 7 2 1 5 3 8
//OUPUT: 7
//INPUT: 5 5 5 5 5 5 5 
//OUTPUT: -1

#include<stdio.h>
int main()
{
	int m,n,i,max,secmax;
	printf("how many numbers you want");
	scanf("%d",&n);
	printf("enter the numbers");
	scanf("%d",&m);
	secmax=max=m;
	for(i=2;i<=n;i++){
		scanf("%d",&m);
		if(max<m)
		{
			secmax=max;
			max=m;
		}
		if(max==secmax){
			secmax=m;
		}
		if(m>secmax && m<max){
			secmax=m;
		}
	}
	if(secmax==max)
	{
		secmax=-1;
	}
	printf("second max is=%d",secmax);
	return 0;
}
