/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to check your processor endianess
 * Input: Enter possible input
 * Output: Display processor endianess results
*/

#include<stdio.h>

int main()
{
    char ch;
    do
    {
	int num, out;					//Declare Variables
	printf("Enter Hexadecimal number : ");
	scanf("%x", &num);				//Ask user for number
	
	char *p = (char*) &num;				//assign pointer to num and typecast it to char
	out = num & 0xff;				//AND with 0xff and store in out
	
	if ( *p == out )				//Check Last byte with pointer
	    printf("Output is %hhx so System is LITTLE ENDIAN\n",out);
	else
	    printf("Output is %hhx so System is BIG ENDIAN\n");

	printf("Do you want to check Again.[Y/N]\n");	//If to continue again
	getchar();
	scanf("%c", &ch);
    }while(ch=='y');
    return 0;
}
