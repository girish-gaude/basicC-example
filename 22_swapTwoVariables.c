/*Author: Girish Gaude
 * Date: 10/Dec/2019
 * Desciption: Program to perform swap operation using bitwise
 * Input: Enter the number.
 * Output: Display output. 	 
*/

#include<stdio.h>
void swap(int *num1, int *num2);			//Function protocal

int main()
{
    char ch;
    do
    {
	int num1,num2;					//Declare variables

	printf("Enter the first number.\n");		//Ask user to enter numbers
	scanf("%d", &num1);
	printf("Enter the second number.\n");
	scanf("%d", &num2);

	swap(&num1, &num2);				//Call function

	printf("Do you want to continue.");
	getchar();
	scanf("%c", &ch);				//Continue again?
    }while(ch=='y');

    return 0;
}

void swap(int* num1, int* num2)				//Function to swap two number
{
    *num1 = *num1 ^ *num2;				//swap using exor
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
    printf("After swap:\nFirst number: %d  Second number: %d\n", *num1,*num2); //Print Swap number
}
