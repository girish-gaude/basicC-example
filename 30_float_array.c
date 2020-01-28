/*
 * Author: Girish Gaude
 * Date: 18/Dec/2019
 * Desciption: Program to perform floating array and print the values in sorted order without modifying or copying ’store’.
 * Input: Read the float elements from user and store them into an array.
 * Output: Print ascending order of float elements from array. 	 
*/

#include<stdio.h>
float float_array(float *array, int size)		//Call Function and pass array base address and size
{
    for ( int k = 0; k<size; k++ )			//Loop to count 
    {
	for (int i=0; i<size; i++ )			//Check all possible elements 
	{
	    int count = 0;				//Initiaize count to zero
	    for ( int j=0; j<size; j++)
	    {	
		if( array[i] <= array[j] )		//Check number is greater then next number
		 {
		    count++;				//If small then inc count
		 }
	    }
	    if ( count == (size-k) )			//Comapre count with index size
	    {
		printf(" %0.2f\n", array[i]);		//Print element
	    }
	}
    }
}
 
int main()
{
    char ch;						//Declaration
    do
    {
	int len;
	printf("Enter the lenght of array.\n");		//Ask user for size of array
	scanf("%d", &len);
	float array[len];				//Declare floating type array
	printf("Enter the array element.\n");
	
	for ( int i = 0; i < len ; i++)			//Take Each element of array from user
	{
	   scanf( "%f", &array[i] );
	}
	
	float_array(array,len);				//Call funtion and pass address and size

	printf("Do you want to continue [y/n]\n");
	getchar();
	scanf("%c", &ch);				//If user wants to run again
    
    }while (ch=='y');
    return 0;
}
