#include <stdio.h>

//內容： 某校為了不讓學生互相比較成績，所以成績上記錄的是成績等第而不是分數，它的規則如下： 
    //90分(含)~100分(含)為A等 
    //80分(含)~90分(不含)為B等 
    //70分(含)~80分(不含)為C等 
    //60分(含)~70分(不含)為D等 
    //不滿60分者為E等 
    //現在給你一個成績，請你判斷它是哪一個等第

int main()
{
    int g;
    printf("成績:");
    scanf("%d", &g);
    if (g > 89){
        printf("A等");
    }else if (g > 79){
        printf("B等");
    }else if (g > 69){
        printf("C等");
    }else if (g > 59){
        printf("D等");
    }else{
        printf("E等");
    }
    return 0;
}
