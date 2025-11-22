#include<stdio.h>;
main()
{
	double cm;
	printf("enter length in centimeters");
	scanf("%if",&cm);
	double meters=cm/100.0;
	double kilometers=cm/100000.0;
	printf("%.2 if cm=%.4 if meters=%.6 if kilometers\n",cm,meters,kilometers);
	return 0;
}
