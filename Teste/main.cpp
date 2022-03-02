#include <iostream>
#include <string>
#include "main.h"
using namespace std;

void calc_numbers(char str_operator, int arg1, int arg2) {
	switch (str_operator)
	{
		case'+':
			printf("\nThe sum is: %d", arg1 + arg2);
		break;

		case'-':
			printf("\nThe subtraction is: %d", arg1 - arg2);
		break;

		case'*':
			printf("\nThe multiplication is: %d", arg1 * arg2);
			break;

		case'/':
			printf("\nThe division is: %d", arg1 / arg2);
		break;

		default:
			printf("\nYou didn't use the correct operators");
			printf("\nUse '+' to addition,'-' to substration,'*' to multiplication and '/' to division.");
		break;
	}

	
}
void sum_program() {
	int number1 = 5, number2 = 10;
	char str_operator;

	printf("Digit the fisrt value:");
	std::cin >> number1;

	printf("Digit the operator:");
	std::cin >> str_operator;

	printf("Digit the second value:");
	std::cin >> number2;
	
	calc_numbers(str_operator, number1, number2);
}

void feet_to_meters_program() {
	printf("Ainda não esta pronto!");
}

void main() {
	char menu = '1';

	while (menu != '0')
	{
		#if _WIN32
			system("cls");
		#else
			system("clear");
		#endif

		printf("1 - Calculator\n2 - Feet to meters\n0 - To exit the program");
		printf("\nWhat program you want use?");
		cin >> menu;

		switch (menu)
		{
		case '1':
			sum_program();
		break;

		case '2':
			feet_to_meters_program();
		break;

		default:
			break;
		}
	}
}
