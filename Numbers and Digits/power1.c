#include<stdio.h>
#include<math.h>
int main(){
	int base,power,ans=1;
	printf("enter base\n");
	scanf("%d",&base);
	printf("enter expo\n");
	scanf("%d",&power);
	ans=pow(base,power);
	printf("%d",ans);
}
