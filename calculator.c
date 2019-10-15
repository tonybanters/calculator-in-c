/* A very simple command line calculater that can perform
addition, subtraction, multiplication, and division. */

#include <stdio.h>

int main()
{
	char symbol;
	double num1, num2;

	printf("Select a symbol from the following:\n");
	printf(" +, -, *, / \n");
	printf("Symbol: \n");
	scanf("%c", &symbol);

	printf("Enter two numbers that you would like to perform arithmetic on: \n");
	printf("Number 1: \n");
	scanf("%lf", &num1);
	printf("Number 2: \n");
	scanf("%lf", &num2);



	switch(symbol)
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
			break;

		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
			break;

		// default:
		// 	printf("Error: Symbol is not one of (+, -, *, /)");
	}

	return 0;
}