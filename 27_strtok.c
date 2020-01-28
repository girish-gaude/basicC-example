/*
 * Author: Girish Gaude
 * Date: 3/Jan/2020
 * Desciption: Program to built strtok function
 * Input: Enter two string
 * Output: Display output string
*/

#include<stdio.h>

char *my_strtok(char *str1, char *str2)		    //Function prototype
{
    int j = 0;					    //Declare variable
    static int i;
    static char *temp;
    int count = i;
    if (str1 != NULL)				    //if string 1 not equal to null
    {
    	temp = str1;				    //Store in temp variable
    }
    while (temp[i] != '\0')			    //If string 1 equal to null
    {
    	j = 0;					    //Count
	while (str2[j] != '\0')
	{
	    if (str2[j] == temp[i])		    //If delimiter match
	    {
		temp[i] = '\0';			    //Put null 
		i++;
		if (temp[count] != '\0')	    //Check position of temp pointer
		{
		    return (&temp[count]);	    //return temp address
		}
		else
		{
		    count = i;			    //last temp position count
		    i--;			    //dec count
		    break;			    //exit
		}
	    }
	    j++;
	}
	i++;
    }
    if (temp[count] == '\0')			    //Check if pointer reach to end of string1
    {
    	i = 0;
	return NULL;				    //return null to exit loop
    }
    else
    {
	return (&temp[count]);			    //Or return address
    }
}

int main()
{
    char ch;
    do
    {
	char str1[100];
	char str2[100];
    
	printf("Enter string 1: \n");		    //Enter string 1
	scanf("%100[^\n]",str1);
	getchar();
	printf("Enter string 2: \n");		    //Enter string 2
	scanf("%100[^\n]", str2);
    
	char *token = my_strtok(str1,str2);	    //Call function
    
	while(token != NULL)			    //Check end of string 1
	{
	    printf(" %s\n",token);
	    token = my_strtok(NULL,str2);	    //Call function
	}
	printf("Do you want to continue.\n");
	getchar();
	scanf("%c", &ch);			    //If want to continue
    }while( ch =='y' );
    return 0;
     }
