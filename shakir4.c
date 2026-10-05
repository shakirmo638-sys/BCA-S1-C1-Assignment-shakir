#include <stdio.h>
int main ()
{
	int r;
	float a,c;
	printf("enter radius");
	scanf("%d",&r);
	a = (3.14)*r*r;
	c = 2*(3.14)*r;
	printf("Area = %2f\n Circumference = %2f\n",a,c);
	return 0;
	
}
	
