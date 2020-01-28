/*Author: Girish Gaude
 * Date: 10/Dec/2019
 * Desciption: Program to perform Factorial of number using recursion
 * Input: Enter the number.
 * Output: Display output. 	 
*/

#include<stdio.h>

int main()
{
    char ch;
    static int factorial = 1;				//Define and declare Static variables
    static int num;
    static int start = 0;

    if ( start == 0 )					//Check if loop run for first time
    { 
	printf("Enter the number\n");			//Enter the number
	scanf("%d",& num);
	start++;					//Inceament by one
    }

    if ( num < 1 )					//If loop reach at end. print the number
    {
	if(num < 0)
	{
	    printf("Error : Please Check the number\n");
	}
	else
	{
	    printf("Factorial is %d\n", factorial);		//Print the number
	    start--;					//Decrement the start variable to zero
	    factorial = 1;					//Set variable to one
	}
	printf("\nDo you want to continue? [y/n]\n");	
	getchar();
	scanf("%c",&ch);				//Continue again?
	if (ch == 'y')					//If yes then call the main again
	    main();
	else 
	    return 0;					//Else return
    }

    else						//If num greater then one
    { 
	factorial = factorial * num;				//Calculate factorial of number
	num  = num - 1 ;				//Decreament by one
	main();						//Call the main funtion again.
    }
}
