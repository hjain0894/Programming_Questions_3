 #include <stdio.h>
int sumdigits(int num);
int main()
{
    int num, sum;
    
    printf("Enter a number to find sum of digits: ");
    scanf("%d", &num);
    
    sum = sumdigits(num);
    
    printf("Sum of digits of %d = %d", num, sum);
    
    return 0;
}
int sumdigits(int num)
{
    
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumdigits(num / 10));
}