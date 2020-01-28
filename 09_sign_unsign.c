/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to print bits of signed and unsigned types for given number and check for 2’s complement
 * Input: Read number n from user
 * Output: Display output. 	 
*/
#include<stdio.h>
int main()
{
    char ch;
    do
    {
	int comp,num,var;		    //Variable Declaration
	printf("Enter the number\n");	    //Enter number
	scanf("%d", &num);
	printf(" %d= ", num);
	for (int i=31; i>=0; i--)	    //loop for 32 bits
	{
	   var = (num>>i) & 1 ;		    //Shift right and get lsb bit in each cycle bitwise operation
	   printf("%d",var);		    //Print each bit
	}
	printf("\n%d= ", (~num)+1);
	   var = (~num + 1);		    //Compliment the given number bits and add 1 to it
	for (int i=31; i>=0; i--)	    //For negative number
	{
	   comp = (var>>i) & 1;		    //Shift right and perform get bit using bitwise operation
	   printf("%d", comp);
	}

    getchar();
    printf("\nDo you want to run again? Press y or n\n");
    scanf("%c", &ch);
    }while ( ch == 'y' );
    return 0;
}
