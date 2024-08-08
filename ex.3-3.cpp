#include <stdio.h>

//輸入年分，輸出閏年判斷

int main()
{
    int y,a;
    printf("輸入年分:");
    scanf("%d",&y);
    a = y % 4;
    if(a==0){
        printf("是閏年");
    }
    else{
        printf("不是閏年");
    }

    return 0;
}
