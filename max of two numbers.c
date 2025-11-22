#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter a and b values");
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	printf("the max number is %d",max);
}
