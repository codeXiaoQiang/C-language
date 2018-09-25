#include <stdio.h>

int main()
{
    /*
     * 1.sizeof是一个运算符, 不是一个函数
     * 2.既然sizeof是一个运算符, 所以它也有优先级
     * sizeof运算符的优先级高于算数运算符
     */
    //               double int           double double          double
//    int res = sizeof(3.14 + 1); // sizeof(3.14 + 1.0) --> sizeof(4.14)
//    printf("res = %i\n", res);

    // 由于sizeof的优先级高于算数运算符
    // 所以会先计算 sizeof 3.14 --> 8
    // 然后再利用计算结果和1相加  8 + 1 == 9
//    int res = sizeof 3.14 + 1;
    int res = sizeof(3.14) + 1;
    printf("res = %i\n", res);
    return 0;
}
