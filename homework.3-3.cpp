#include <stdio.h>

int main()
{
    int a,b,max;
    printf("enter two number: \n");
    scanf("%d %d",&a,&b);
    if (a > b){
        max = a;
    }else{
        max = b;
    }
    printf("最大值: %d",max);

    return 0;
}
