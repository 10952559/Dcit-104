#include <stdio.h>

int main()
{
    int i, j, exit, numPrime, sum=0;

    
    printf("Find sum of all prime between 1 to your number  : ");
    scanf("%d", &exit);

    
    for(i=2; i<=exit; i++)
    {

        
       numPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                
                numPrime = 0;
                break;
            }
        }

        
        if(numPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", exit, sum);

    return 0;
}