//主函式輸入 輸入 a ，其中自定義一函式，時間換算，輸出  b 小時 c 分 

#include <iostream>

int h(int a);
int m(int b);


int main()
{
    int t;
    printf("輸入幾分鐘: ");
    scanf("%d",&t);
    
    
    printf("總時間 = %d 小時 %d 分鐘 \n",h(t) ,m(t));

    return 0;
}

int h(int t){
    int ans;
    if (t < 60){
        ans = 0;
    }else{
        ans = t / 60;  
    }
    return ans;
}

int m(int t){
    int ans;
    ans = t % 60;
    return ans;
}
