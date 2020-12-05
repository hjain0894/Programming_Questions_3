#include <stdio.h>
#include <math.h>
int reversenum(int num);
int main()
{
    int num, rev;

      
    printf("Enter any number: ");
    scanf("%d", &num);
    
    rev = reversenum(num); 
    
    printf("Reverse of %d = %d", num, rev);
    
    return 0;
}



int reversenum(int num)
{
    
    int digit = (int) log10(num);
    
        if(num == 0)
        return 0;
    
    return ((num%10 * pow(10, digit)) + reversenum(num/10));
}