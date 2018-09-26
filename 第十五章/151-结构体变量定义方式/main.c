#include <stdio.h>

int main()
{
    /*
     * 定义结构体变量的几种方式
     * 1.先定义结构体类型, 再定义结构体变量
     * 2.定义结构体类型的同时定义结构体变量
     * 3.定义结构体类型的同时省略结构体名称, 同时定义结构体变量
     */
    // 1.先定义结构体类型, 再定义结构体变量
    /*
    struct Person{
        char *name;
        int age;
        double height;
    };
    struct Person p1;
    struct Person p11;
    */

    // 2.定义结构体类型的同时定义结构体变量
    /*
    struct Person{
        char *name;
        int age;
        double height;
    } p2;
    p2.name = "lnj";
    printf("name = %s\n", p2.name);
    struct Person p22;
    */
    // 3.定义结构体类型的同时省略结构体名称, 同时定义结构体变量
    // 匿名结构体
    // 特点: 结构体类型只能使用一次
    struct{
        char *name;
        int age;
        double height;
    } p3;
    p3.name = "it666";
    printf("name = %s\n", p3.name);
    return 0;
}
