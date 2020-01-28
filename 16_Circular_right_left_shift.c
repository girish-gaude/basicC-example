/*Author: Girish Gaude
 * Date: 5/Dec/2019
 * Desciption: Program to perform Circular right & left shift the int by n.
 * Input: Read number, bit value and shift side from user
 * Output: Display Returned output. 	 
*/
#include<stdio.h>
void circularLeftShift( unsigned int num, int n);			    //Function Prototype
void circularRightShift( unsigned int num, int n);			    //Function Prototype

int main()
{
    char ch;								    //Declare Variable 
    do
    {
	unsigned int num;						    //Take only positive number
	int opt, n;							    //Declare variable

	printf("Enter the number: \n");					    //Read number and shift bit from user
	scanf("%d",&num);
	printf("Enter the bit to shift: \n");
	scanf("%d",&n);

	if ( n > 31 )							    //Check number range till 32 bits
	{
	    n=31;							    //If not then make it 32 bits
	}

	printf("Please select the option\n1) Circular Left Shift.\n2) Circular Right Shift.\n");//Display text to select option from
	scanf("%d", &opt);

	printf("Entered Number in binary: \n");				    //Print each bit of entered number
	for(int i=31; i>=0; i--)
	{
	    int bnum = (num >> i) & 1;
	    printf("%d", bnum);
	}
	printf("\n");

	switch(opt)							    //Start switch case
	{
	    case 1:							    //Circular Left shift
		printf("Circular Left Shift\n");
		circularLeftShift(num, n);				    //Call Function
		break;
	    case 2:							    //Circular Right Shift
		printf("Circular Right Shift\n");   
		circularRightShift(num, n);				    //Call funtion
		break;
	    default:							    //Error if not valid case
		printf("Error : Invalid input.\n");
	}

	printf("\n");
	printf("Do you want to continue. Press y or n.\n");		    //Ask to continue or exit
	getchar();
	scanf("%c",&ch);
    }while( ch == 'y' );
    return 0;
}


void circularLeftShift( unsigned int num, int n)			    //Function to Left shift
{
    int mask = (num >> n) & ((1 << n ) & 1);				    //Creat mask
    num = ( num << n ) | mask;						    //Mask with number
    for (int i = 31; i>=0; i--)						    //Print each bits
    {
	int bit = (num>>i) & 1;
	printf("%d",bit);

    }
}
void circularRightShift( unsigned int num, int n)			    //Function to Right shift
{
    int mask = (num & ((1 << n ) - 1)) << (( 31 - n ) + 1);		    //Creat mask
    num = ( num >> n ) | mask;						    //Mask with number
    for (int i = 31; i>=0; i--)
    {
	int bit = (num>>i) & 1;						    //Print each bits
	printf("%d",bit);
    }
}

