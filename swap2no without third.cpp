#include<stdio.h>
main()
{
	int a,b;
	printf("enter two integers");
	scanf("%d %d",&a,&b);
	//OR swap(no third variable)
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swap:a=%d,b=%d\n",a,b);
	return 0;
}
