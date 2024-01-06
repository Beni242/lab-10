// max digit of a number
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //u: unit; d:deciml , c: centieme, m: millieme

    int arr[1], N, U, D, C ,M, i;
    printf("enter an number with 5 digit: ");
    scanf("%d", &N);

    if  (N >= 10000 &&  N <= 99999 )
    {
    
    while(N > 0 )
    {
        
        
        
        U = N % 10;
        N = N / 10;
        D = N % 10;
        N = N / 10;
        C = N % 10;
        N = N / 10;
         M = N % 10;
    }
   /* for(i = 0; i <= 5 ; i++)
    {

    }*/

    if(M > U && M > D && M > C)
    {
        arr[1] = M;
    }
    else if (C > U && C > D && C > M)
     {
        arr[1] = C;
    }
     else if (U > D && U > C && U > M)
     {
        arr[1] = U;
    }
     else if (D > U && D > C && D > M)
     {
        arr[1] = D;
    }

    printf("the value of array is : %d", arr[1]);
    }

    else
    printf("exit");


    

   
}