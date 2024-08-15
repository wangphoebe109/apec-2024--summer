//主函式輸入 輸入 a degree C ，其中自定義一函式，溫度轉換，輸出  b degree F 


#include <iostream>
int c(int C){
    int F;
    F = C * 9 / 5 + 32;
    return F;
}


int main()
{
    int C,F;
    printf("輸入溫度(攝氏): ");
    scanf("%d",&C);
    
    
    printf("溫度(華氏): %d",c(C));

    return 0;
}
