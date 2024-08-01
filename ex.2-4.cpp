#include <stdio.h>

int main()
{
    int a,b,product,x;
    a = 20;
    b = 7;
    x = 16;
    
    product = a * b;
    printf("product = %d\n", product);
    product = a % b;
    printf("product = %d\n", product);
    x = x >> 1;
    printf("x = %d\n",x);
    x = x >> 2;
    printf("x = %d\n",x);
    x = x << 1;
    printf("x = %d\n",x);
    
    return 0;
}
