/*
 * Author: Girish Gaude
 * Date: 11/Jan/2020
 * Desciption: Program to implement calc_mean for all data types
 * Input: Enter the number of elements to store in the array through the command line
 * Output: Display mean value	 
*/

#include<stdio.h>
#include<stdio_ext.h>
void mean(void *array, int size, int opt)			//Funtion to calculate mean
{
    switch (opt)						//Set datatype
    {
	case 1:							//int type
	    {
		float sum,mean;					//Declare variable
		sum = 0;
		for(int i=0; i<size; i++)
		{
		    sum = sum+(*((int *)array+i));		//Find sum with typecast datatype
		}
		mean = (sum/size);				//Calc Mean
		printf("Mean of Array is : %f\n",mean);		//Print mean
		break;			
	    }
	case 2:							//Short type
	    {
		float sum,mean;
		sum = 0;
		for(int i=0; i<size; i++)
		{
		    sum = sum + (*((short *)array+i));		//add all elements
		}
		mean = sum / size;				//Find mean
		printf("Mean of Array is : %f\n",mean);
		break;
	    }
	case 3:							//float type
	    {
		float sum,mean;
		sum = 0;
		for(int i=0; i<size; i++)
		{
		    sum = sum + (*((float *)array+i));		//Add all elements
		}
		mean = sum / size;				//Find mean
		printf("Mean of Array is : %f\n",mean);
		break;
	    }
	case 4:							//long type
	    {
		float sum,mean;
		sum = 0;
		for(int i=0; i<size; i++)
		{
		    sum = sum + (*((double *)array + i));	//Add all elements
		}
		mean = sum / size;				//Find mean
		printf("Mean of Array is : %f\n",mean);
		break;
	    }
    }
    return;
}
int main()
{
    char ch;
    do
    {	
	int size,opt;
	printf("Enter the size of array :\n");			//Ask user for Array size
	scanf("%d",&size);
	printf("Select Data Type\n 1) int\n 2) short\n 3) float\n 4) double\n");
	scanf("%d",&opt);					//Select option for type

	switch(opt)						//select option
	{
	    case 1:						//int type
		{
		    int array[size];
		    printf("Enter the %d elements : \n", size);
		    for(int i=0; i<size; i++)			//Fill array
		    {
			scanf("%d", &array[i]);
			__fpurge(stdin);
		    }
		    mean(array,size,opt);			//Call mean function
		    break;
		}
	    case 2:						//short type
		{
		    short array[size];
		    printf("Enter the %d elements : \n", size);
		    for(int i=0; i<size; i++)			//fill array
		    {
			scanf("%hd", &array[i]);
		    }
		    getchar();
		    mean(array,size,opt);			//Call mean function
		    break;
		}
	    case 3:						//float type
		{
		    float array[size];
		    printf("Enter the %d elements : \n", size);
		    for(int i=0; i<size; i++)			//Fill array
		    {
			scanf("%f", &array[i]);
		    }
		    getchar();
		    mean(array,size,opt);			//call mean function
		    break;
		}
	    case 4:						//double type
		{
		    double array[size];
		    printf("Enter the %d elements : \n", size);
		    for(int i=0; i<size; i++)			//fill array elements
		    {
			scanf("%lf", &array[i]);
		    }
		    getchar();
		    mean(array,size,opt);			//call mean funtion
		    break;
		}
	    default:
		{
		    printf("ERROR : Check Your Input\n");	//If no proper input
		    getchar();
		    break;
		}
	}
	printf("Do you want to continue.\n");
	//getchar();
	scanf("%c", &ch);
    }while( ch == 'y' );					//Continue again
    return 0;
}
