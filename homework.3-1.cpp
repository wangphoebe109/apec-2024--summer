#include <stdio.h>

//輸入年 月, 輸出當月天數

int main()
{
    int y,m,d,a;
    printf("輸入年份:");
    scanf("%d", &y);
    printf("輸入月份:");
    scanf("%d", &m);
    a = y % 4;
    if (m == 2){
        if (a == 0){
            d = 29;
        }else{
            d = 28;
        }
    }else if (m <= 7){
        if (m % 2 == 1){
            d = 31;
        }else{
            d = 30;
        }
    }else{
        if (m % 2 == 1){
            d = 30;
        }else{
            d = 31;
        }
    }
    
    printf("當月天數:%d",d);
    return 0;
}
