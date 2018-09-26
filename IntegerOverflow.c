#include <stdio.h>
#include <stdlib.h>

/**
 *	File:					IntegerOverflow.c
 *	CWE-190:				Integer Overflow
 *	Description:			This is an example of an Integer Overflow vulnerability written in C. 
 *							This program will add two numbers together and output its solution. 
 *							If a user enters in a value that has a total greater than the max 
 *							value of an integer data type (2147483647), it will overflow the variable and return a negative number.
 * 
*/

void AdditionFunction(int number1, int number2){
	int solution = number1 + number2;
	
	printf("\n\n%d + %d = %d\n", number1, number2, solution);  

	printf("your total is %d\n", solution); // Solutions that are greater than 2147483647 it will overflow the "solution" integer variable. 
}


void SubtractionFunction(int number1, int number2){
	int solution = number1 - number2;
	
	printf("\n\n%d - %d = %d\n", number1, number2, solution);  
	printf("your total is %d", solution); // Solutions that are greater than 2147483647 it will overflow the "solution" integer variable. 
}



int main()
{
	int n1, n2;
	int selection;
	
	printf ("\033[32;1m [*] Hello, This is a basic calculator that either Adds or Subtracts two numbers together.  \033[0m\n");

	printf ("\033[32;1m [*] Please Enter Number 1:  \033[0m\n");
	scanf("%d", &n1);
    
	printf ("\033[32;1m [*] Please Enter Number 2:  \033[0m\n");
	scanf("%d", &n2);
	
	//Selection Mathmatical Operation
	printf ("\n\033[32;1m [*] Press 1 - Addition\n [*] Press 2 - Subtraction\033[0m\n");
	scanf("%d", &selection);
	
	
	if (selection == 1){
		AdditionFunction(n1, n2);

	
		
	} else if (selection == 2){
		SubtractionFunction(n1, n2);
	
		
	} else {
		printf ("\033[31;1m [*] ERROR!  \033[0m\n");
		printf ("\033[31;1m [*] No option was selected.  \033[0m\n");
		printf ("\033[31;1m [*] Program is exiting.  \033[0m\n");

		return 0;
	}
}
	