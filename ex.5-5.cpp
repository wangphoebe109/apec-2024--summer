#include <stdio.h>
// 從鍵盤輸入10名學生的成績資料，求其中的最高分、最低分和平均分。
 //  （提示：用陣列存放成績資料）

int main()
{
    int grade[9];
    int all,avg,max,min;
    scanf("%d\n",&grade[0]);
    all += grade[0];
    max = grade[0];
    min = grade[0];
    
    for(int i=0;i<10;i++){
        scanf("%d",&grade[i+1]);
        all += grade[i+1];
        if (grade[i+1] > max){
           max = grade[i+1];
        }
        if (grade[i+1] < min){
            min = grade[i+1];
        }
    }
    avg = all / 10;
    printf("最高分: %d\n",max);
    printf("最低分: %d\n",min);
    printf("avg: %d\n",avg);

    return 0;
}
