#include <stdio.h>

int call(){
    value = 999;
    printf("value = %i\n", value);
    return 0;
}
int value; // 全局变量
int main()
{
    /*
     * 1.什么是局部变量
     * 定义在大括号中的变量, 我们称之为局部变量
     * 作用域:
     * 从定义变量的那一行开始, 直到遇到return或者遇到}结束为止
     * 1.什么是全局变量
     * 定义在大括号外面的变量, 我们称之为全局变量
     * 作用域:
     * 从定义变量的那一行开始, 直到文件末尾
     */
    /*
//    num = 10;
//    printf("num = %i\n", num);
//    int num; // 局部变量
//    num = 10;
//    printf("num = %i\n", num);
//    {
//        int num = 998;
////        printf("num = %i\n", num);
//    }
//    printf("num = %i\n", num);
    */
    value = 666;
    printf("value = %i\n", value);
    call();
    return 0; // 结束函数
//    num = 10;
//    printf("num = %i\n", num);
}
