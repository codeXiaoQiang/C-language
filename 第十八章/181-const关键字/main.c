#include <stdio.h>

int main()
{
    /*
     * const关键字, 用于定义一个常量
     *
     * 字面量 --> 常量  --> 1, 1.1 , 'a' , "abc"
     * 宏定义 --. 常量  --> #define COUNT 5
     * const --> const 数据类型 变量名称;
     *
     * 注意点:
     * const可以写在数据类型的前面, 也可以写在数据类型的后面
     * 对于基本数据类型来说, 写在数据类型的前面和后面没有任何区别
     * 但是对于指针来说, 写在数据类型的前面和后面就有区别了
     *
     * const和指针
     * const如果写在指针数据类型左边, 那么代表指针指向的内存空间不能修改, 但是指针的指向可以修改
     * const如果写在指针数据类型右边, 那么代表指针指向的内存空间不能修改, 但是指针的指向可以修改
     * const如果写在指针星号右边, 那么代表指针指向的内存空间可以修改, 但是指针的指向不可以修改
     */

    /*
    // 此时的num是一个变量, 可以被修改
//    int num = 10;
//    const int num = 10;
    int const num = 10;
    printf("num = %i\n", num);
    // 只要在变量的前面加上const, 那么这个变量保存的数据就不可以修改了
    num = 666;
    printf("num = %i\n", num);
    */

    int num = 666;
    // 定义一个指针变量
    // 指向的内存不能修改的, 但是指向可以修改
    const int *p;
//    int const *p;
//    int *const p = &num;
    // 让指针p指向num的存储空间
//    p = &num;
    // 访问P指针的存储空间, 将指向存储空间中的值取出来
    printf("*p = %i\n", *p);
    // 访问P指针的存储空间, 将888存储到该空间中
    *p = 888;
    printf("*p = %i\n", *p);


    int value = 789;
    // 修改指针的指向, 让指针p指向value的存储空间
    p = &value;
    printf("*p = %i\n", *p);
    return 0;
}
