#include <stdio.h>
//從鍵盤輸入10名學生的成績資料，按成績從高到低的順序排列並輸出。（提示：用陣列存放成績資料）


int main()
{
    int grade[10],temp,isTrue;
    for(int j=0;j<5;j++){
            scanf("%d", &grade[j]);
    }
    while (isTrue==0){
        isTrue=1;
        for(int i=0;i<5;i++){
            if (grade[i] < grade[i+1]){
                temp = grade[i];
                grade[i] = grade[i+1];
                grade[i+1] = temp;
                isTrue=0;
            } 
    }}
    for(int i=0;i<5;i++){
        printf("%d ",grade[i]);
    }
    return 0;
}
