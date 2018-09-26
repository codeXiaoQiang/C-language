#include <stdio.h>

int main()
{
    /*
     * 结构体变量初始化的几种方式
     * 1.定义的同时初始化
     * 2.先定义再初始化
     */
    // 1.定义结构体类型
    struct Dog{
        char *name;
        int age;
        double height;
    };
    // 2.定义结构体变量
    // 2.1先定义后初始化
//    struct Dog dd;
//    dd.name = "ww";
//    dd.age = 1;
//    dd.height = 1.5;

    // 2.2定义的同时初始化
//    struct Dog dd = {"ww", 1, 1.5};
    // 注意点: 如果在定义的同时初始化, 那么初始化的顺序必须和结构体类型中的顺序一致
//    struct Dog dd = {1, "ww", 1.5};
    struct Dog dd = {.age = 1, .name = "ww"};
    printf("name = %s\n", dd.name);
    printf("name = %i\n", dd.age);
    printf("name = %lf\n", dd.height);

    // 3.特殊的初始化方式
    // 数组只能在定义的同时完全初始化, 不能先定义再完全初始化
    // 但是结构体既可以在定义的同时完全初始化, 也可以先定义再完全初始

//    int ages[3] = {1, 3, 5};
//    int ages[3];
//    ages = {1, 3, 5};

    // 企业开发不推荐这样编写
//     struct Dog dd;
//     dd = (struct Dog){"ww", 1, 1.5};
//     printf("name = %s\n", dd.name);
//     printf("name = %i\n", dd.age);
//     printf("name = %lf\n", dd.height);

    return 0;
}
