#include <stdio.h> 
int main()
{
	int n1,n2,n3;
	printf("enter 1st num");
	scanf("%d",&n1);
	printf("enter 2nd num");
	scanf("%d",&n2);
	printf("enter 3rd num");
	scanf("%d",&n3);
	
	if (n1>n2)
	{ if (n1>n3)
		printf("1st number is largest");
	}
	
	if (n2>n3) 
	{ if (n2>n1)
		printf("2nd number is largest");
	}
	
	if (n2>n1)
	{ if (n3>n2)
		printf("3rd number is largest");
	}
	return 0;
}
