//主函式輸入高與寬,編寫程式,其中自定義一函數,算矩型面積

#include <iostream>

int a(int x,int y){
    return x*y;
}

int main()
{
    int x,y;
    printf("輸入高和寬: \n");
    scanf("%d %d",&x ,&y);
    
    
    printf("面積 = %d \n",a(x,y));

    return 0;
}
