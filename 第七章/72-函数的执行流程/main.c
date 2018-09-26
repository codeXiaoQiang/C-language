#include <stdio.h>
int getAverage(int num1, int num2){
    int avg = (num1 + num2) / 2;
    return avg;
}
int main()
{
    int a = 10;
    int b = 20;
//    int res = (a + b) / 2;
    int res = getAverage(a, b);
    printf("average = %i\n", res);
    return 0;
}
