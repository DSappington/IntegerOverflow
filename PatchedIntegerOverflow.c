#include <stdio.h>
#include <limits.h>


/**
 *	File:					PatchedIntegerOverflow.c
 *	CWE-190:				Integer Overflow
 *	Description:			This is an example of a Patched Integer Overflow vulnerability written in C. 
 *							This program will add two numbers together and output its solution. 
 *							If a user enters in a value that has a total greater than the max 
 *							value of an integer data type (2147483647), it will overflow the variable and return a negative number.
 *							However, this program corrects the issue that is in IntegerOverflow.c
 * Fixes:					1. use preconditions such as checking the user inputs prior to calculating/processing 
 *							2. doing each individual arithmetic operation using the next larger primitive integer type and explicitly checking for overflow.
 *							3. You could create you own Big Integer function in C that would have no limitation.
 * 
*/

//Addition Function
void AdditionFunction(int unsigned long number1, int unsigned long number2){
	int unsigned long solution = number1 + number2;
	

	printf("\n\n%lu + %lu = %lu\n", number1, number2, solution);  
	printf("your total is %lu\n", solution);

//Subtraction Function
void SubtractionFunction(int unsigned long number1, int unsigned long number2){
	int unsigned long solution = number1 - number2;
	
	printf("\n\n%lu - %lu = %lu\n", number1, number2, solution);  
	printf("your total is %lu", solution); 



int main()
{
	int unsigned long n1, n2; // Changed data type to unsigned long int.
	int selection;
	
	printf ("\033[32;1m [*] Hello, This is a basic calculator that either Adds or Subtracts two numbers together.  \033[0m\n");

	printf ("\033[32;1m [*] Please Enter Number 1:  \033[0m\n");
	scanf("%lu", &n1);
    
	printf ("\033[32;1m [*] Please Enter Number 2:  \033[0m\n");
	scanf("%lu", &n2);
	
	
	// Precondition: The max value of n1 and n2 is 18446744073709551615 (unsigned long int).
	// This code will prevent an integer overflow from happening by limiting the user to 
	// only being able to compute a max value of 9223372036854775806 or less for each number making it impossible
	// to overflow the unsigned long int max limit.
	if(n1 >= LONG_MAX && n2 >= LONG_MAX){
		printf ("\033[31;1m [*] ERROR!  \033[0m\n");
		printf ("\033[31;1m [*] Number it too large to compute.  \033[0m\n");
		return 0;
	}
	
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
	