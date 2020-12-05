#include <stdio.h>
#include <math.h>
int reversenum(int num);
int palindrome(int num);
int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(palindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    
    return 0;
}

int palindrome(int num)
{
    
    if(num == reversenum(num))
    {
        return 1;
    }
    
    return 0;
}
int reversenum(int num)
{
   
    int digit = (int)log10(num);
    
    
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reversenum(num/10));
}