/*
 * Author: Girish Gaude
 * Date: 19/Dec/2019
 * Desciption: Program to do variance calculation with static arrays & with dynamic arrays
 * Input: Enter array of N integer.
 * Output: Display mean and sigma of given array. 	 
*/

#include<stdio.h>
#include<stdlib.h>
int variance( int *array, int size)		 //Call function and pass base address and size
{
    int x, sum = 0, sqr = 0;
    int sigma=0;			 //Variable Declaration and Defination
    for(int i=0; i<size; i++)
    {
	sum += array[i];			 //Add all elements
    }
    for(int i=0; i<size; i++)		    
    {
	x = array[i] - (sum/size);		 //Calculate median
	sqr = (x * x);				 //Square of median
	sigma += sqr;				 //Add all Square median
    }
    return (sigma/size);			 //Return sigma value
}

int main()
{
    char ch;
    do
    {
	int opt,size,var;			 //Declare varible
	printf("Please select the funtion.\n 1. Static Array\n 2. Dynamic Array\n");
	scanf("%d",&opt);			 //Ask user for input

	switch (opt)
	{
	case 1:					 //Static option
	{
	    printf("Enter the Array size : \n");
	    scanf("%d",&size);			 //Ask array size
	    int array[size];

	    for (int i=0; i<size; i++)
	    {
		scanf("%d", &array[i]);		 //Input array elent
	    }
	    var = variance(array, size);         //Call function
	    printf("The Variance of the entered numbers is %d\n", var);
	    break;;
	}
	case 2:					//Dynamic option
	{
	    printf("Enter the Array size : \n");
	    scanf("%d",&size);			//Ask for size
	    int *array = malloc(size*sizeof(int)); //malloc

	    for (int i=0; i<size; i++)
	    {
		scanf("%d", array+i);		//Fill array elements
	    }
	    var = variance(array, size);	//Call function
	    printf("The Variance of the entered numbers is %d\n", var);
	    free(array);			//Free malloc
	    break;;
	}
	default:
	   printf("ERROR : Please enter valid Input\n"); //Error 
	}

	printf("Do you want to continue [y/n].\n");
	getchar();
	scanf("%c", &ch);			//Continue again
    }while(ch=='y');
    return 0;
}
