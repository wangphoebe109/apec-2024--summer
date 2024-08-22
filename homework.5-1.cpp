#include <stdio.h>
//從鍵盤上輸入10個數，求其平均值。

int main()
{
    int all,avg;
    for(int i=0;i<10;i++){
        int a[i];
        printf("%d.輸入數字: ",i+1);
        scanf("%d",&a[i]);
        all += a[i];
    }
    avg = all / 10;
    printf("%d",avg);
    return 0;
}
