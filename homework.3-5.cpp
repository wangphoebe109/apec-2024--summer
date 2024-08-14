#include <stdio.h>

 //鍵盤輸入，輸入 2 個數，再輸入 兩數之和，如果正確，顯示“right”，否則顯示“error”

int main()
{
    int a,b,ans;
    printf("輸入2個數字: \n");
    scanf("%d %d",&a,&b);
    printf("輸入2數之和: \n");
    scanf("%d",&ans);
    if (a + b == ans){
        printf("right");
    }else{
        printf("error");
    }

    return 0;
}
