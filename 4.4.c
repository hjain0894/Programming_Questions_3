#include <stdio.h>
int sumOfEvenOdd(int beg, int end);


int main()
{
    int beg, end, sum;

   
    printf("Enter lower limit: ");
    scanf("%d", &beg);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Sum of even/odd numbers between %d to %d = %d\n",beg , end, sumOfEvenOdd(beg, end));
    
    return 0;
}

int sumOfEvenOdd(int beg, int end) 
{
    
    if(beg > end)
        return 0;
    else
        return (beg + sumOfEvenOdd(beg + 2, end));
}