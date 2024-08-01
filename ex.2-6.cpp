#include <stdio.h>

int main()
{
    double a , b , product;
    printf("Enter two numbers : \n");
    scanf("%lf %lf", &a, &b);
    
    product = a * b;
    
    printf("product = %.2lf",product); 

    return 0;
}
