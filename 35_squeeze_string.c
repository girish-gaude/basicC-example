/*
 * Author: Girish Gaude
 * Date: 11/Jan/2020
 * Desciption: Program that perform alternative version of squeeze(str1, str2) that deletes each character in s1 that matches any character in the string s2
 * Input: Enter the two String.
 * Output: Display squeeze output.	 
*/

#include<stdio.h>

void squeeze( char *str1, char *str2 )		    //Function to squeeze two string
{
    int match = 0;				    //Define variable to count matching word
    for ( int i=0; str1[i] != '\0'; i++ )	    //Run loop till nul
    {
	for ( int j=0; str2[j] != '\0'; j++ )	    //Run loop till nul
	{
	    if ( str1[i] == str2[j] )		    //Compare each char of two string
		match += 1;			    //Increament match variable if match
	}
	if( match == 0 )			    //If match is zero in one itration
	{
	    printf("%c",str1[i]);		    //Print that charcter
	}
	else
	    match = 0;				    //If Char match then skip that char and make match to zero again
    }
}


int main()
{
    char ch;
    do
    {
	char str1[100],str2[100];		    //Define two string
	printf("Enter First String\n");
	scanf("%99[^\n]", str1);		    //Ask user to enter string 1
	getchar();				    //Clear buffer
	printf("Enter Second String\n");
	scanf("%99[^\n]", str2);		    //Ask user to enter string 2

	squeeze( str1, str2 );			    //Call funtion and pass both string

	printf("\nDo you want to continue.\n");
	getchar();
	scanf("%c", &ch);			    //If want to continue again
	getchar();
    }while( ch == 'y' );
    return 0;
}
