#include<stdio.h>
int main()
{
	int i,m,n,max,secmax;
	printf("how many numbers you want...\n");
	scanf("%d",&n);
	printf("\nEnter the numbrs....\n");
	scanf("%d",&m);
	secmax=max=m;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&m);
		if(max>m){
			secmax=max;
			max=m;
		}
		if(max==secmax)
		{
			secmax=m;
		}
		if(m<secmax && m>max)
		{
			secmax=m;
		}
	}
	if(max==secmax)
	{
		secmax=-1;
	}
	printf("SecondMinimum is=%d",secmax);

	return 0;
}
