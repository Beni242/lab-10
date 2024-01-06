//average of numbers

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float A[8] = {0};
    float Avg;
    int i, sum;
    
    sum = 0;
    printf("enter 8 value  ");

    //loop
    for(i=0; i < 8; i++)
    {
        scanf("%f", &A[i]);
    printf("%.3f\n", A[i]);

    sum = sum + A[i];
    }
    
    //average
    Avg = (sum/i);
    printf("the average is : %.3f", Avg);

}
