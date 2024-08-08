#include <stdio.h>

//2.輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積和周長，否則，輸出提示資訊。

int main()
{
    double r,l,a;
    printf("Enter r:");
    scanf("%lf",&r);
    if(r >= 0){
        l = 2 * r * 3.14;
        a = r * r * 3.14;
        printf("l = %.2lf \n",l);
        printf("a = %.2lf",a);
    }else{
        printf("error: r < 0 \n");
    }
    return 0;
}
