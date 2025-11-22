#include<stdio.h>
#include<stdio.h> //for abs
main()
{
	int a,b;
	printf("enter two integers");
	scanf("%d %d",&a,&b);
	int maximum=(a+b+abs(a-b))/2;
	int minimum=(a+b-abs(a-b))/2;
	printf("maximum=%d\n",maximum);
	printf("minimum=%d\n",minimum);
	return 0;
}
