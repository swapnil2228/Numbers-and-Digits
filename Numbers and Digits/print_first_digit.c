//Write a program which accepts one integer and prints its first digit.
  //input:12345
  //output:1

#include<stdio.h>
int main()
{
	int no,temp,rem;
	printf("enter the number:");
	scanf("%d",&no);
	temp=no;
	while(temp!=0){
		rem=temp%10;
		temp=temp/10;
		//printf("%d\n",rem);
	}

	printf("%d",rem);
	return 0;
}
