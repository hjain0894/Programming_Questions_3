#include <stdio.h>
void printEvenOdd(int cur, int limit);
int main()
{
    int lowlim, uplim;
    
   
    printf("Enter lower limit: ");
    scanf("%d", &lowlim);
    printf("Enter upper limit: ");
    scanf("%d", &uplim);
    
    printf("Even/odd Numbers from %d to %d are: ", lowlim, uplim);
    EvenOdd(lowlim, uplim); 
    
    return 0;
}



void EvenOdd(int cur, int lim)
{
    if(cur > lim)
        return;
    
    printf("%d, ", cur);
    
    
    EvenOdd(cur + 2, lim);
}