#include <stdio.h>

int main()
{
    /*
     * 1.赋值运算符结合性
     * 右结合性
     * 2.优先级
     * 赋值运算符的优先级 低于 算数运算符
     */
//    int res = 10;
//    res += 10 - 5; // res = res + (10 - 5); res = 10 + (10 - 5);
//    printf("res = %i\n", res);

    int num = 10;
    num += 5; // num = num + 5;

    int value = 10;
    value += 2 + 2; // value = value + (2 + 2);


    int temp = 2 + 2;
    printf("temp = %i\n", temp);
    return 0;
}

