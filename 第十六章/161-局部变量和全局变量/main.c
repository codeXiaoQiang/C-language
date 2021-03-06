#include <stdio.h>

int value; // 全局变量
int value; // 全局变量
int value; // 全局变量
int main()
{
    /*
     * 局部变量:
     * 概念: 定义在{}中,函数中,形参都是局部变量
     * 作用域: 从定义的那一行开始, 直到遇到}结束或者遇到return为止
     * 存储的位置: 局部变量会存储在内存的栈区中, 会随着定义变量的代码执行分配存储空间, 会随着作用域的结束自动释放
     * 特点:
     *     相同作用域类, 不能出现同名的局部变量
     *     如果不同作用域内有相同名称的变量, 那么在访问时, 内部的会覆盖外部的(就近原则)
     *
     * 全局变量:
     * 概念: 定义在{}外或者函数外的变量, 都是全局变量
     * 作用域: 从定义的那一行开始, 直到文件末尾
     * 存储的位置: 全局变量会存储在内存的静态区中, 会随着程序的启动分配存储空间, 随着程序的结束释放存储空间
     * 特点:
     *    如果有多个同名的全局变量, 那么也只会分配一次存储空间, 多个同名的全局变量共用同一块存储空间
     */
    int num = 6; // 局部变量
//    int num;
    {
        int num = 7; // 局部变量
        printf("num = %i\n", num);
    }

    test(666);
//    printf("score = %i\n", score); // 不能访问
    return 0;
}

int score = 33; // 全局变量

void test(int a){ // 局部变量
    value = 19;
    printf("value = %i\n", value);
}
