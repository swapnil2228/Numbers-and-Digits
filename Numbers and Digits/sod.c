//sum of digits

#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter the numebr");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
