#include <stdio.h>
int main()
{
	int marks;
	
	printf("enter your marks:=");
	scanf("%d", &marks);
	
	if (marks>=90){
		printf("Grade : A+");
	}
	else if (marks>=75){
		printf("grade : A");
	}
	else if (marks>=60){
		printf("grade : B");
	}
	else if (marks>=50){
		printf("grade : C");
	}
	else if (marks>=40){
		printf("grade : D");
	}
	else if (marks>=28){
		printf("grade : E");
	}
	else{
		printf("grade : F");
	}
	return 0;
}
