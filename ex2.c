//square of numbers

#include <stdio.h>
#include <stdlib.h>


int main(void)

{
    int Number[10], i, Square, N;
   
    //must be 10 numbers and different of -1
    
    printf("enter ten numbers : ");

    


    while(1)
    {
    scanf("%d\n", &N);
    
    if(N == -1 || i == 10 )
    {
        break;
    }

    else
    {

        Number[i] = N;
        i++;
    }
    }
    

        for(int j = 0; j < i ; j++)
          
    printf("the square of %d is : %d\n", Number[j] , Number [j] * Number[j]);


}



   
 
   
   
  
   
   
   
  
    
