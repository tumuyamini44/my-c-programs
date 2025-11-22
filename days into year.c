#include<stdio.h>
main()
{
	int total_days;
	printf("enter number of days");
	scanf("%d",&total_days);
	int year=total_days/365;
	int rem=total_days%365;
	int months=rem/30;
	int days=rem%30;
	printf("%d days=%d year(s),%d month(s),%d day(s)\n",total_days, years, months, days);
	return 0;
}
