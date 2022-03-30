#include <stdio.h>
#include <conio.h>
void main()
{
	
	float a,b;
	printf("enter two numbers to be swapped:");
	scanf("%f %f",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped nubers are:%f %f",a,b);
	getch();
} 