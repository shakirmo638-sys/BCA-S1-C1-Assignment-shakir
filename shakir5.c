#include <stdio.h>
int main()
{
	float l,b,a,p;
	printf("enter the length");
	scanf("%f",&l);
	printf("enter the breadth");
	scanf("%f",&b);
	a = l*b;
	p = 2*(l+b);
	printf("Area = %2f\n Perimeter = %2f\n",a,p);
	return 0;
	
}
