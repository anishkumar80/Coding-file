#include <stdio.h>
int main()
{
	int a, b;
	char operator;
	
	printf("enter operator:\n");
	scanf("%c", &operator);

	printf("enter a:");
	scanf("%d", &a);
	
	printf("Enter b:");
	scanf("%d", &b);
	
	switch(operator)
	{
	case '+':
		printf("Addition = %d\n", a+b);
		break;
    
    
	case '-':
		printf("Subtraction = %d\n", a-b);
		break;
	
	case '*':
		printf("Multiplication = %d\n", a*b);
		break;
	
	case '/':
		printf("Division = %d\n", a/b);
		break;
	
	case '%':
		printf("Modulus = %d\n", a%b);
		break;
		
	default:
		printf("invalid operator");
		break;
		
    }
	return 0;
}
