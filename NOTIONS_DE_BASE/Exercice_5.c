#include <stdio.h>

int main()
{
	int first_param, second_param, third_param;
	float result;

	scanf("%d", &first_param);
	scanf("%d", &second_param);
	scanf("%d", &third_param);

	result = (first_param + second_param + third_param)/3;

	printf("La moyenne de ces trois notes est: %.2f", result);

	return(0);
}
