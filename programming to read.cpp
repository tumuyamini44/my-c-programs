//write a simple program to read int,float,char and string using scanf() and display using
//printf() in all the above given platform.
#include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x),
	printf("enter floating point number");
	scanf("%f",&y);
	printf("enter a character");
	scanf("%c",&ch);
	printf("\n");
	printf("enter a word");
	scanf("%s\n",s);
	printf("\n");
	printf("the integer is %d\n",x);
	printf("the floating point number is %f\n",y);
	printf("the character is %c\n",ch);
	printf("the word is %s\n",s);
}
