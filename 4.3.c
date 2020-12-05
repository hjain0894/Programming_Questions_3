#include <stdio.h>
int sumOfNatNum(int start, int end);


int main()
{
    int beg, end, sum;
    
   
    printf("Enter lower limit: ");
    scanf("%d", &beg);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    sum = sumOfNatNum(beg, end);
    
    printf("Sum of natural numbers from %d to %d = %d", beg, end, sum);
    
    return 0;
}



int sumOfNatNum(int beg, int end)
{
    if(beg == end)
        return beg;
    else
        return beg + sumOfNatNum(beg + 1, end); 
}