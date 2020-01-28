/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to check a given number is even or odd using bitwise operators
 * Input: Read number n from user
 * Output: Display output. 	 
*/
#include<stdio.h>
int main()
{
    char ch;
    do
    {
	int num;			    //Variable delaration
	printf("Enter the number\n");	    //Enter number
	scanf("%d", &num);

	if ( num & 01 )			    //Bitwise opertaion to get last number LSB
	{
	    printf(" number is Odd\n");	    //If logical output is true
	}
	else
	    printf("Number is Even\n");	    //IF logical output is false


    getchar();
    printf("Do you want to run again? Press y or n\n");
    scanf("%c", &ch);
    }while ( ch == 'y' );
    return 0;
}
