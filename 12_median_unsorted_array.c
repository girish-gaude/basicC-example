/*Author:  Girish Gaude
 * Date :  27/Nov/2019
 * Desciption: Program to find the median of N unsorted arrays
 * Input:  Enter the number
 * Output: Display median of array.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    do								//Start do while loop
    {
	int count, size, temp, n1, n2;
		
	printf("Please Enter total number of arrays\n");	//Enter Total array number
	scanf("%d", &count);
	float avg[count];					//Declare floating array
	for ( int i = 0; i < count; i++ )
	{
	    printf("\nEnter size of Array %d : \n",(i+1));	//Enter size of array
	    scanf("%d", &size);
	    int array[size];					//Declare array to store each element
	    if ( size <=10 )					//Check each array size
	    {
		printf("Enter Elements of Array %d : \n",(i+1));//Enter all elements
		for ( int j=0; j<size; j++ )
		{
		    scanf("%d", &array[j]);			//Read each element
		}
		for ( int j=0; j<size; j++ )			//Sorting Array
		{
		    for ( int k=0; k<j; k++ )
		    {
			if ( array[j] < array[k] )		//check array element
			{
			    temp = array[j];		    
			    array[j] = array[k];
			    array[k] = temp;
			}
		    }
		}
		printf("Sorted Array %d : \n", (i+1));	//Display all sorted elements
		for ( int j=0; j<size; j++ )
		{
		    printf("%d ", array[j]);			//Print
		}
		if ( size%2 )					//If array size is odd
		{
		    avg[i]=array[size/2];
		    printf("\nMedian of array is: %0.2f\n", avg[i]);
		}
		else						//If array size is even
		{
		    n1 = array[size/2];				//Read first element
		    n2 = array[(size/2)-1];			//Read second element
		    avg[i] = (n1 + n2)/(float)2;		//Find Median and store in new array 
		    printf("\nMedian of array %d is: %0.2f\n",(i+1), avg[i] );
		}
	    }
	else
	    printf("\nERROR: Check element size\n");		//if number out of range
	}
	float sum = 0;						//Declare variable
	for ( int z = 0; z<count; z++ )			    
	{
	    sum += avg[z];					//Add all elements and store in variable
	    if ( z == (count-1) )			
	    {
		float avg = sum/count;				//Calculate average of all array
		printf("\nAverage of all Array is: %0.2f\n", avg);		
	    }
	}
	printf("\nDo you want to continue.[y/n]\n");
	scanf("%c", &ch); 
    }while ( ch == 'y' );					//continue loop
    return 0;
}

