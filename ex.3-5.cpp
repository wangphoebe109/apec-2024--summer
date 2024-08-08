#include <stdio.h>

int main(void)
{
    int stud_num = 25;
    for(int i=0;i<25;i++){
        if((i % 3) == 0){
            printf(" group %d. %d student \n",1,i+1);
        }else if ((i % 3) == 1){
            printf(" group %d. %d student \n",2,i+1);
        }else if ((i % 3) == 2){
            printf(" group %d. %d student \n",3,i+1);
        }
    }
    return 0;
    

}
