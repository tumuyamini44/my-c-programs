#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter two integers");
	scanf("%d %d",&a,&b);
	//step:use third variable
	temp=a;
	a=b;
	b=temp;
	printf("after swap:a=%d,b=%d\n",a,b);
	return 0;
}
