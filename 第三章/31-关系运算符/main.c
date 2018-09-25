#include <stdio.h>

int main()
{
    /*
     * 关系运算符
     * > >= < <= == !=
     * 返回值: 要么是0, 要么是1
     * 0 代表关系不成立 1代表关系成立
     * 在C语言中非0即真
     * 只有数值是0 才代表是假, 其它的都是真 -1 1 666 999
     *
     * 关系运算符的结核性
     * 左结合性
     *
     * 优先级
     * > >= < <= 优先级高于 == !=
     * 如果优先级和结合性同时存在的时, 先优先级后结合性
     */
    /*
    int a, b;
    a = 10, b = 5;
//    int res = a > b;
//    int res = a < b;
//    int res = 10 == 10;
    int res = 11 != 10;
    printf("res = %i\n", res);
    */
    // int res = (10 > 5) > 3
    // int res = (1) > 3
//    int res = 10 > 5 > 3;

    // int res = 10 == (10 > 9)
    // int res = 10 == (1)
//    int res = 10 == 10 > 9;
//    printf("res = %i\n", res);

    // 结论: 不要使用关系运算符判断区间
    // int res = (20 >= 15) >= 10;
    // int res = (1) >= 10;
    int x = 15;
    int res = 20 >= x >= 10;

    return 0;
}
