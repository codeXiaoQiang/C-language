#include <stdio.h>

int main()
{
    /*
     * 注意点:
     * 在定义数组的时, 数组的元素个数只能放常量或者常量表达式
     */
    // 元素个数是一个常量
//    int ages[5];
    // 元素个数是一个常量表达式
//    int ages[1 + 1];
    int num = 6;
//    int ages[num]; // 虽然没有报错, 但是在企业开发中不要这样使用
//    int ages[num] = {1, 3, 5}; // 会报错

    return 0;
}
