#include <stdio.h>

int main()
{
    /*
     * 赋值运算符
     * 1.简单赋值运算符
     * =
     * 2.复杂赋值运算符
     * += -= *= /= %=
     */
    // 1.简单赋值运算符
    // 作用: 将等号右边的值赋值给等号左边的变量
    // 结合性: 右结合性
    int num;
    num = 666;
    printf("num = %i\n", num);

    // 2.复杂赋值运算符
    int value = 10;
//    value += 5; // value = value + 5; value = 10 + 5;
//    value -= 5; // value = value - 5; value = 10 - 5;
    value *= 2; // value = value * 2; value = 10 * 2;
    printf("value = %i\n", value);
    return 0;
}
