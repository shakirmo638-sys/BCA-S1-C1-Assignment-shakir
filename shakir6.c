#include <stdio.h>
int main()
{
	int A;
	float C,F;
	printf("press 1 for C to F\n press 2 for F to C");
	scanf("%d",&A);
	 
	 if(A == 1)
	 { printf("celcius");
	   scanf("%f",&C);
	   F = (C*1.8)+32;
	   printf("%2f degree celsius is %2f in fahrenheit",C,F);
   }
   if (A == 2)
   { printf("fahrenheit");
	   scanf("%f",&F);
	   C = (F-32)*(0.5555);
	   printf("%2f degree fahrenheit is %2f in celsius",F,C);
   }
       return 0;
   }
