#include <stdio.h>
int main()
{
	int M;
	printf("Assigned marsks");
	scanf("%d",&M);
	
	if (M<=49 && M>=0)
	{ printf("your grade is D");
	}
	if (M<=69 && M>=50)
	{ printf("your grade is C");
	}
	if (M<=79 && M>=70)
	{ printf("your grade is B");
	}
	if (M<=100 && M>=80)
	{ printf("your grade is A");
	} 
	return 0;
}
