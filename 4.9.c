#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int num, num1, hcf;
    
   
    printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &num, &num1);
    
    hcf = gcd(num, num1);
    
    printf("GCD of %d and %d = %d", num, num1, hcf);
    
    return 0;
}
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}
