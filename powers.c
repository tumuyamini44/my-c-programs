#include<stdio.h>
#include<math.h>
main()
{
	double a;
	double b;
	printf("enter base and exponent");
	scanf("%if%if",&a,&b);
	double result=pow(a,b);
	printf("%.4if^%.4if=%.6if\n",a,b,result);
	return 0;
}
