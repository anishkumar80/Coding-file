#include <stdio.h>
int main()
{
	int a, b;
	char operator;
	printf("enter a:");
	scanf("%d", &a);
	
	printf("Enter b:");
	scanf("%d", &b);
	
    printf("Enter operator:");
	scanf("%c", &operator);
	
	if (operator == '+'){
        printf("Addition = %d\n", a+b);
   }
   
   if (operator == '-'){
        printf("Subtraction = %d\n", a-b);
   }
   
   if (operator == '*'){
        printf("Multiplication = %d\n", a*b);
   }
   
   if (operator == '/'){
   	    printf("Division = %d\n", a/b);  
   }
   
   if (operator == '%'){
   	    printf("Modulus = %d\n", a%b);
   }
	return 0;
}
