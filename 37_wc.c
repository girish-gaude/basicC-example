/*
 * Author: Girish Gaude
 * Date: 8/Jan/2020
 * Desciption: Program to count characters
 * Input: Enter the string
 * Output: Display count number of characters, words and lines, entered through stdin buffer 	 
*/

#include<stdio.h>
#include<stdio_ext.h>

int word_count()				//Call Function to count
{
    char ch,c;					//Declare variable
    int character = 0, line = 0, word = 0;
    __fpurge(stdin);				//Clear stdin buffer
    c = getchar();				//Get First character of stdin
    while( c != EOF )				//Run loop till CTRL+D encounter
    {
	ch = getchar();				//Get Second character from stdin
	character += 1;				//Increament Characters
	if ( ch == '\n' )			//Check line
	{
	    line += 1;				//Increament Line
	}
	if ( c != 0 && ch == EOF && c != '\n' )	//Condition for Current word and CTRL+D
	{ 
	    word += 1;				//Increament loop
	}
	if((ch == ' ' && c != ' ') || ( ch == '\n' && c != '\n' )) //For Space and next line
	{
	    word += 1;				//Increament word
	}
	c = ch;					//Update Last word
    }
    printf("\t%d \t%d \t%d",line,word,character);   //Print output
}

int main()
{
    char ch;					//Declare char
    do
    {
	word_count();				//Call Funtion

	printf("\nDo you want to continue.\n");
	__fpurge( stdin );			//Clear Stdin
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}
