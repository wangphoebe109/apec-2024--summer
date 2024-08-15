#include <stdio.h>
#include <math.h>

int main()
{
    int i_num = 4;
    double f_num = 4.0;
    //(double)i_num;
    //f_num = sqrt(f_num);
    f_num = pow(8.0,i_num); // pow(a,b):次方(a的b次方)
    printf("  %f \n",f_num);
    printf("Square root of %lf if %lf \n",4.0,sqrt(4.0)); // sqrt(a):根號(a開根號)
    printf("Square root of %lf if %lf \n",5.0,sqrt(5.0));
    
    return (0);
}
