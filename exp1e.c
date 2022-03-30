#include <stdio.h>
#include <conio.h>
void main()
{
	
	float a,b=0,perc;
	printf("enter marks for maths:");
	scanf("%f",&a);
	b=b+a;
	printf("enter marks for civil:");
	scanf("%f",&a);
	b=b+a;
    printf("enter marks for comp:");
	scanf("%f",&a);
	b=b+a;
	printf("enter marks for phy:");
	scanf("%f",&a);
	b=b+a;
	perc=b/400*100;
	printf("The percentage of student is: %0.2f%%",perc);
	getch();
} 