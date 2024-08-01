#include <stdio.h>

int main()
{
    int x =16;
    
    x = x & 3;
    printf("x = %d\n",x);
    
    x = x | 3;
    printf("x = %d\n",x);
    
    x = x ^ 3;
    printf("x = %d\n",x);
    
    x = x >> 3;
    printf("x = %d\n",x);
    
    x = x << 3;
    printf("x = %d\n",x);

    return 0;
}
