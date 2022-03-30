#include <stdio.h>
#include <conio.h>
void main()
{
	
	float a,b,c;
	printf("enter two numbers to be swapped:");
	scanf("%f %f",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the swapped nubers are:%f %f",a,b);
	getch();
} 