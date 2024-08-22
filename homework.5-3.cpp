#include <stdio.h>
//用陣列實現以下功能：輸入5個學生成績，而後求出這些成績的平均值並顯示出來。

int main()
{
    int all, avg;
    for(int i=0;i<5;i++){
        int score[i];
        printf("%d.輸入成績: \n",i+1);
        scanf("%d",&score[i]);
        all += score[i];
    }
    avg = all / 5;
    printf("平均成績: %d 分",avg);
    return 0;
}
