#include <stdio.h>

int main()
{
    /*
     * 注意点:
     * 1.自增和自减只能用于变量, 不能用于常量和表达式
     * 2.在企业开发中自增和自减最好单独出现
     * 3.同一个表达式中同一个变量同时自增或自减, 这种格式的表达式在C语言中没有规定如何运算
     * 所以结果是不确定的, 在不同的编译器下运行的结果不同
     */
    /*
    int num = 10;
    num++;
    num--;

//    10++; // 会报错

    int a, b;
    a = 10;
    b = 20;
    (a + b)++;
    */

    /*
    int num = 10;
//    int res = 10 + num++; // int res = 10 + 10; num++;
//    int res = 10 + num;
//    num++;
//    int value = num++;
    int value = num;
    num++;
    printf("value = %i\n", value); // 10
    printf("num = %i\n", num); // 11
    */

    int num = 10;
    int res = ++num + ++num; // 千万不要这样写
    printf("res = %i\n", res);

    return 0;
}

