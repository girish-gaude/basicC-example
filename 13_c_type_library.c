/*Author:  Girish Gaude
 * Date :  8/Dec/2019
 * Desciption: Program to create c_type libry
 * Input:  Enter the character and select case to check.
 * Output: Display character is present in case or not.
*/

#include<stdio.h>
void my_alnum(char c)						//Function to check all Number and both snall and large alphabates 
{
    if (( c > 48 && c < 57 ) || ( c > 65 && c < 90 ) || ( c > 97 && c < 122 ))	//Check ascii range of character
	printf("The character '%c' is an alnum.\n",c);		//Print if present in range.    
    else
	printf("The character '%c' not an alnum.\n",c);		//Print if not prensent in range
}
void my_alpha(char c)						//Function to check all alpha
{
    if (( c > 65 && c < 90 ) || ( c > 97 && c < 122 ))		//Check ascii of charater in this range
	printf("The character '%c' is an alpha.\n",c);		//Print if present
    else
	printf("The character '%c' not an alpha.\n",c);		//print if not present
}
void my_ascii(char c)						//Function to check input character is ascii or not
{
    if ( c > 0 && c < 127 )					//Check the range
	printf("The character '%c' is an ascii.\n",c);		//Print if present
    else
	printf("The character '%c' not an ascii.\n",c);		//Print if not present
}
void my_digit(char c)						//Function to check if input character is digit or not
{
    if ( c > 48 && c < 57 )					//Check the range 
	printf("The character '%c' is an digit.\n",c);		//Print if present
    else
	printf("The character '%c' not an digit.\n",c);		//Print if not present
}
void my_blank(char c)						//Function to check input character is space or tap key
{
    if ( c == ' '|| c == 9 )					//Check both ascii
	printf("The character is an space or tab.\n");		//Print if present
    else
	printf("The character not an space or tab.\n");		//Print if not present
}
int main()
{
    char ch, c;							//Decleration 
    do
    {
	int opt;
	printf("Enter character\n");				//Ask user to enter character
	getchar();						//Clear buffer
	scanf("%c",&c);						    
	printf("1)-alnum\n2)-alpha()\n3)-digit\n4)-ascii\n5)-blank\n");	//Display option
	printf("Enter postion\n");
	scanf("%d",&opt);

	switch(opt)						//Start switch case
	{
	    case 1:
		{
		   my_alnum(c);					//Call my_alnum function and pass character
		   break;
		}
	    case 2:
		{
		   my_alpha(c);					//Call my_alpha function and pass character
		   break;
		}
	    case 3:
		{
		    my_digit(c);				//Call my_digit function and pass character
		    break;
		}
	    case 4:
		{
		   my_ascii(c);					//Call my_ascii function and pass character
		   break;
		}
	    case 5:
		{
		   my_blank(c);					//Call my_blank function and pass character
		   break;
		}
	    default:
		printf("Invalid input\n");			//Error
	}
	printf("Do you want to continue\n");
	getchar();
	scanf("%c",&ch);
    }while (ch == 'y');
    return 0;
}
