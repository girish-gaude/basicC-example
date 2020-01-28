/*
 * Author: Girish Gaude
 * Date: 06/Jan/2020
 * Desciption: Program to to take n and k (1 <= k <= 10) as inputs. Generate consecutive NRPS of length n using k distinct character (0 <= k <= 9)
 * Input: Enter String, k-value, Char size and n
 * Output: Display NRPS or error
*/

#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

int check_string( char *str, int k);				//Function to check duplicates
char nrps ( char *str,int z, int n );		    		//Function NRPS
int swap( char* strz, char* stri);				//Function to swap char

char arr[380000];						//Temp array

int main()
{
    char ch;
    do
    {
	arr[0] = '\0';						//Make array empty
	int n,num;						//Declare variables
	char str[100];
	int z = 0,i=0, q;
	printf("Enter the number characters n value:\n");	//Ask user to enter n
	scanf("%d",&n);
	printf("Enter String of %d character: \n", n);		//Ask user to enter string
	getchar();
	scanf("%100[^\n]",str);
	int k = 0;
	while (str[i] != '\0')
	{
	    k++;
	    i++;
	}
	printf("k = %d\n", k);
	if(k >= 10)
	{
	    printf("Error : Value of k should be less then 10\n");
	    main();
	}
	
	check_string(str, k);					//Call  check_string function 
	
	nrps (str, z, n);					//Call NRPS function
	
	printf("Enter Number of Character to Print: \n");	//Ask user printing length
	scanf("%d", &num);
	printf("\nNRPS Length : %.*s \n", num, arr);
	
	printf("\nDo you want to continue? Press [y/n].\n");
	__fpurge(stdin);					//Clear buffer
	scanf("%c", &ch);
    }while( ch == 'y' );
    return 0;
}

int check_string( char *str, int k)				//Function to check duplicates
{
    int count = 0;						//Declare counter
    for ( int i=0;i<k;i++ )					//Run loop
    {
	for ( int j=i+1; j<k ; j++ )
	{
	    if( str[i] == str[j] )				//Check each character
	    count += 1;						//Increment if character match
	}
    }
    if (count != 0)						//If match
    {
	printf("ERROR : Duplicate Character. Retry Again\n");	//Print error
	__fpurge(stdin);					//Clear buffer
	main();							//Call main
    }
}

char nrps( char *str,int z, int n)				//nrps Function
{
    if ( z != n )						//Check z pointer reach at end 
    {
	for (int i=z; i<n; i++)					//Loop for string
	{
	    swap((str+z), (str+i));				//Swap z=0 pointer char with next char
	    nrps( str, z+1 , n );				//Call function again with inc z
	    swap((str+z), (str+i));				//Swap z+1 pointer with next char
	}
    }
    else							//Check till pointer each to the end
    {
	strcat(arr,str);
    }
}

int swap( char* strz, char* stri)				//Function to Swap
{
    char temp;	
    temp = *strz;						//Interchange current pointer and next char 
    *strz = *stri;
    *stri = temp;
}



