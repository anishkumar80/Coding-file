#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,nguesses;
	srand(time(0));
	number = rand()%100+1;
	printf("the number is %d\n",number);
	do
	{
		printf("Guess the number b/w 1 t0 100\n");
		scanf("%d", &guess);
		if (guess>number)
		{
			printf("lower number please:\n");
		}
		else if (guess<number){
			printf("higher number please:\n");
		}
		else{
			printf(" SUCCESSFUL youR guessed is correct it in %d attemps\n",nguesses);
		}
		nguesses++;
	}
	while (guess != number);
	return 0;
}
