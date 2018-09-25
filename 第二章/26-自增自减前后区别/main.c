#include <stdio.h>

int main()
{
    /*
     * 自增和自减可以写在变量前面, 也可以写在变量后面
     * 写在前面和后面的区别:
     * 如果自增和自减写在变量前面, 代表先自增和自减再参与其它运算
     * 如果自增和自减写在变量后面, 代表先参与其它运算再自增和自减
     */
    /*
    int num = 10;
//    int res = 10 + num++; // int res = 10 + 10; num++
    int res = 10 + num--; // int res = 10 + 10; num--
    printf("res = %i\n", res); // 20 20
    printf("num = %i\n", num); // 11 9
    */

    int num = 10;
//    int res = 10 + ++num; // ++num; int res = 10 + 11
    int res = 10 + --num; // --num; int res = 10 + 9
    printf("res = %i\n", res); // 21 19
    printf("num = %i\n", num); // 11 9

    return 0;
}
