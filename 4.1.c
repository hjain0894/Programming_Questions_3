#include <stdio.h>
void printNaturalNumbers(int lowerLimit, int upperLimit);
int main()
{
    int lowlim, uplim;

   
    printf("Enter lower limit: ");
    scanf("%d", &lowlim);
    printf("Enter upper limit: ");
    scanf("%d", &uplim);

    printf("All natural numbers from %d to %d are: ", lowlim, uplim);
    NaturalNumbers(lowlim, uplim);
    
    return 0;
}


void NaturalNumbers(int lowlim, int uplim)
{
    if(lowlim > uplim)
        return;
    
    printf("%d, ", lowlim);

    NaturalNumbers(lowlim + 1, uplim);
}