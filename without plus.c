#include<stdio.h>
int add_without_plus(int x,int y)
{
	while (y!=0){
		int carry=x+y;
		x=x^y;
		y=carry<<1;
	}
	return x;
}
int main()
{
	int a,b;
	printf("enter two integers");
	scanf("%d %d",&a,&b);
	int sum=add_without_plus(a,b);
	printf("sum (without+)=%d\n",sum);
	return 0;
}
