#include <stdio.h>

int main()
{
	int a;

	printf("Type an integer: ");
	scanf_s("%d", &a);
	
	if (a > 20)
	{
		printf("You typed %d.\n", a);
		printf("%d is greater than 20.\n", a);
	}
    else if (a < 15)
	{
		printf("You typed %d.\n", a);
		printf("%d is less than 20.\n", a);
	}
	else
	{
		printf("You typed %d.\n", a);
		printf("%d is 15.\n", a);
	}

}
