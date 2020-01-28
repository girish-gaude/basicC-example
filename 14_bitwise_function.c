/*Author: Girish Gaude
 * Date: 28/Nov/2019
 * Desciption: Program to perform bitwise function
 * Input: Read number, bit value, position and value from user
 * Output: Display output. 	 
*/

#include<stdio.h>

int get_nbits(int num, int bit)						    //Function delaration, pass num and bit 
{
    int mask = (num & ((1<<bit) -1));					    //Creat mask to get n bits of number from lsb
    return mask;							    //Return value to function
}
int replace_nbits(int num, int bit, int val)				    //Function to replace bits, pass num, bit and value
{
    int mask = num & (~((1<<bit) -1)) | (val & ((1<<bit) -1));		    //Creat mask replace bits from val
    return mask;							    //Return to function
}
int get_nbits_from_pos(int num, int bit, int pos)			    //Function to get bits from given position
{
    int mask = (num >> ((pos-bit)+1)) & ((1 << bit) -1);		    //Create mask to get bits from given position
    return mask;							    //Return to function
}
int replace_nbits_from_pos(int num, int bit, int pos, int val)		    //Function to get bit from postion and replace with value
{
    int mask = (num & ~(((1<<bit)-1)<<((pos-bit)+1))) | ((val & ((1<<bit)-1))<<((pos-bit)+1));//Create mask
    return mask;							    //Return mask
}
int toggle_bits_from_pos(int num, int bit, int pos)			    //Function to toggel bits from given position
{
    int mask = num ^ ((1 << bit)-1) << ((pos-bit) + 1);			    //Create mask to toggel bits
    return mask;							    //Return mask
}
int print_bits( int num, int bit)					    //Function to print bits
{
    if(bit>31)								    //Check for 32 bits
    {
	for( int i=31; i>=0; i--)					    //Run loop for 32 times
	{
	    int mask = (num>>i) & 1;					    //Get each bit
	    printf("%d",mask);						    //Print bit
	}
	printf("\n");
    }
    else
    {
	for( int i=bit-1; i>=0; i--)					    //If bit size less then 32 bits
	{
	    int mask = (num>>i) & 1;					    //Read bits
	    printf("%d", mask);						    //Print bits
	}
	printf("\n");
    }
}
int main()
{
    char ch;								    //delcare char
    do									    //Start loop
    {
	int opt,num,bit,pos,val;					    //Variable declaration
	printf("Select Bitwise Function from below: \n\t 1 > get_nbits\n\t 2 > replace_nbits\n\t 3 > get_nbits_from_pos\n\t 4 > replace_nbits_from_pos\n\t 5 > toggle_bits_from_pos\n\t 6 > print_bits\n");				//print Menu to select
	scanf("%d", &opt);						    //scan option

	printf("Enter the  number: \n");				    //Ask number from user
	scanf("%d",&num);
	printf("Enter the bits: \n");					    //Ask bit from user
	scanf("%d",&bit);

	switch(opt)							    //Start switch
	{
	    case 1:							    //Case to get bits
		{
		    int out = get_nbits(num,bit);			    //Call function
		    printf("get_bit: %d\n", out);			    //Print output
		    break;
		}
	    case 2:							    //Case to replace bits
		{
		    printf("Enter the value: \n");			    //Ask user for value
		    scanf("%d",&val);
		    int out = replace_nbits(num,bit,val);		    //Call function
		    printf("replace_bit: %d\n", out);			    //Print function
		    break;
		}
	    case 3:
		{
		    printf("Enter the Position: \n");			    //Ask for position
		    scanf("%d",&pos);		    
		    int out = get_nbits_from_pos(num,bit,pos);		    //call function
		    printf("get_nbits_from_pos: %d\n", out);		    //Print output
		    break;
		}
	    case 4:
		{
		    printf("Enter the Position: \n");			    //Ask for position and value
		    scanf("%d",&pos);
		    printf("Enter the value: \n");
		    scanf("%d",&val);
		    int out = replace_nbits_from_pos(num,bit,pos,val);	    //Call function
		    printf("replace_nbits_from_pos: %d\n",out);		    //Print output
		    break;
		}
	    case 5:
		{
		    printf("Enter the Position: \n");			    //Ask for position
		    scanf("%d",&pos);
		    int out = toggle_bits_from_pos(num,bit,pos);	    //Call funtion
		    printf("toggle_bits_from_pos: %d\n", out);		    //Print return output
		    break;
		}
	    case 6:
		{
		    int out = print_bits(num,bit);			    //Call function
		    break;
		}
	    default:
		{
		printf("\nERROR : Invalid Input\n");			    //Show Error if not valid input
		}
	}
	printf("\n\nDo you want to continue? \n");			    //print to Repeat 
	getchar();							    //clear char
	scanf("%c", &ch);
    }while(ch == 'y');							    //check condition
    return 0;
}
