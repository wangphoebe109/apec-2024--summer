#include <stdio.h>

int main()
{
    int *i,ii;
    ii = 3;
    i = &ii;
    printf("\n *i = %d \n",*i);
    printf("&ii = %x \n",&ii);
    printf("i = %x \n",i);
    return 0;
}
