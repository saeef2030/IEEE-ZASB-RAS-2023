#include <stdio.h>   
int main()
{
	int num1, num2, result;
	printf("\nEnter your two numbers you want to sum ");
    printf("\nEnter your first number: ");
	scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);
	result = ad(&num1, &num2);
	printf("\nThe sum of %d and %d is %d", num1, num2, result);
}
int ad(int *n1, int *n2)
{
	int x;
	x= *n1 + *n2;
	return x;
}