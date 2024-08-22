#include <stdio.h>
//從鍵盤輸入10個整數，統計其中正數、負數和零的個數，並在螢幕上輸出。

int main()
{
    int x,b,c;
    for(int i=0;i<10;i++){
        int a[i];
        printf("%d.輸入數字: ",i+1);
        scanf("%d",&a[i]);
        if (a[i] > 0){
            x += 1;
        }else if(a[i] < 0){
            b += 1;
        }else{
            c += 1;
        }
    }
    printf("正數:%d 個\n",x);
    printf("負數:%d 個\n",b);
    printf("零:%d 個\n",c);
    return 0;
}
