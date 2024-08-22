#include <stdio.h>
//將一個有5個元素的陣列中的值(整數)按逆序重新存放。
//   例: 原來順序為:8、6、5、4、1，要求改為1、4、5、6、8

int main()
{
    int number;
    int n[5],ans[5];
    printf("輸入5個數字: \n");
    for (int i=0;i<5;i++){
        scanf("%d",&n[i]);
        ans[4-i] = n[i];
        printf("%d",n[i]);
    }
    printf("\n更新後: ");
    for (int i=0;i<5;i++){
        printf("%d",ans[i]);    
    }

    return 0;
}
