#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	int first_number;
	int second_number;
	int last_number;

	scanf("%d", &number);
	
	last_number = number%10;
	number = number/10;
	second_number = number%10;
	number = number/10;
	first_number = number;

	printf("%d%d%d",last_number, second_number, first_number);

	return(0);
}
