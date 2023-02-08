#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);
	printf("Welcome");

	switch (inputNum)
	{
	case 1:
		add();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract(){
	double number1, number2, result;
	printf ("enter the first case value;");
	scanf_s ("%lf", &number1);
	printf ("enter second case value;");
	scanf_s ("%lf", &number2);
	result = number1 - number2;
	printf ("lf - %lf= %lf\n", number1 - number2 = result);
}