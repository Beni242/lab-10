//reverse of numbers
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    double array[10];
    

    //enter the value  of array

    printf("enter 10 values in array : ");

    for(int i = 0; i <= 10 ; i++)
    {
        scanf("%.1lf\n", &array[i]);
    }

    //output of values and reverses

    for (int i = 0; i <= 10 ; ++i)
    {
        printf( "values are : %.1lf\n", array[i]);
    }

    for (int i = 9; i >= 10 ; --i)
    {
        printf("the reverse is : %.1lf\n", array[i]);
    }
}