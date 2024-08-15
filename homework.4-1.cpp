//主函式輸入 輸入 a 小時 b 分， 其中自定義一函式，時間換算，輸出  x 分

#include <iostream>

int s(int a,int b){
    int ans;
    ans = 60 * a + b;
    return ans;
}

int main()
{
    int a,b;
    printf("輸入幾小時幾分鐘: \n");
    scanf("%d %d",&a ,&b);
    
    
    printf("總時間(分) = %d \n",s(a,b));

    return 0;
}
