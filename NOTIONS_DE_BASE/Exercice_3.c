#include <stdio.h>

int main()
{
	float first_number;
	float second_number;
	float result;

	scanf("%f", &first_number);
	scanf("%f", &second_number);

	result = first_number*second_number;
	
	printf("%.3f", result);

	return(0);
}
