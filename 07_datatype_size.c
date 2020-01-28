/*Author: Girish Gaude
 * Date: 18/Nov/2019
 * Desciption: Program to print sizes of all basic data types of C
 * Input: Enter all datatype
 * Output: Size of int : 4 bytes. 	 
*/
#include<stdio.h>
int main()
{
    printf("Size of unsigned char      : %lu\n", sizeof(unsigned char)); //Print all Datatypes in C
    printf("Size of signed char        : %lu\n", sizeof(signed char));
    printf("Size of signed short       : %lu\n", sizeof(signed short));
    printf("Size of unsigned short     : %lu\n", sizeof(unsigned short));
    printf("Size of signed int         : %lu\n", sizeof(signed int));
    printf("Size of unsigned int       : %lu\n", sizeof(unsigned int));
    printf("Size of signed long        : %lu\n", sizeof(signed long));
    printf("Size of unsigned long      : %lu\n", sizeof(unsigned long));
    printf("Size of signed long long   : %lu\n", sizeof(signed long long));
    printf("Size of unsigned long long : %lu\n", sizeof(unsigned long long));
    printf("Size of float              : %lu\n", sizeof(float));
    printf("Size of double             : %lu\n", sizeof(double));
    printf("Size of long double        : %lu\n", sizeof(long double));

    return 0;
}
