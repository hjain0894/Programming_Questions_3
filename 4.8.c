#include <stdio.h>
long int fibonaci(int num);
int main()
{
    int num;
    long int fibo;
    
    printf("Enter a number to find nth fiboacci term: ");
    scanf("%d", &num);
    
    fibo = fibonaci(num); 
    
    printf("%d fibonacci term is %ld", num, fibo);
    
    return 0;
}
long int fibonaci(int num) 
{
    if(num == 0)      
        return 0;
    else if(num == 1) 
        return 1;
    else 
        return fibonaci(num-1) + fibonaci(num-2); 
}