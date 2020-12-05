#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int num, num1, LCM;

    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num, &num1);
    
    
    if(num > num1)
        LCM = lcm(num1, num);
    else
        LCM = lcm(num, num1);
        
    printf("LCM of %d and %d = %d", num, num, LCM);
    
    return 0;
}
int lcm(int a, int b)
{
    int mul = 0;
    
    
    mul += b;
    
    
    if((mul % a == 0) && (mul % b == 0))
    {
        return mul;
    }
    else 
    {
        return lcm(a, b);
    }
}
 