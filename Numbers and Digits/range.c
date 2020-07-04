//perfect number between the given range
//logic
//first take the start and end point of the range and then pass these parameter to the print the perfect numbers to check the number is perfect or not check it to isperfect method 

#include<stdio.h>
int isPerfect(int num);
void printPerfect(int start, int end);
int main()
{
	int start,end;
	printf("enter start limit :\n");
	scanf("%d",&start);
	printf("end limit: \n");
	scanf("%d",&end);
	printf("the perfect number between %d and %d are:\n",start,end);
	printPerfect(start,end);
	return 0;
}
int isPerfect(int num)
{
	int i,sum=0;
	for(i=1;i<=num/2;i++){
		if(num%i==0)
			sum+=i;
	}
	if(num==sum)
		return 1;
	else 
		return 0;
}
void printPerfect(int start,int end)
{
	while(start<=end){
		if(isPerfect(start))
		{
			printf("%d\n",start);
		}
		start++;
	}
}
