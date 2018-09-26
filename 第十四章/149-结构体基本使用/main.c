#include <stdio.h>

int main()
{
    /*
     * 什么是结构体?
     * 结构体时构造类型的一种
     *
     * 构造类型前面我们已经学习过了数组:
     * 数组的作用是用于存储一组相`同类型`的数据
     * 结构体的作用是用于存储一组`不同类型`的数据
     *
     * 保存一个人的信息
     * 姓名/年龄/身高 ...
     * char *
     * int
     * double
     *
     * 如何定义结构体变量
     * 1.先定义结构体类型
     * 2.通过结构体的类型定义结构体变量
     *
     * 如何定义结构体类型?
     * struct 结构体类型名称{
     *   数据类型 属性名称;
     *   数据类型 属性名称;
     *   ... ...
     * };
     *
     * 如何定义结构体变量
     * struct 结构体类型名称 变量名称;
     *
     * 如何访问结构体的属性
     * 结构体变量名称.结构体属性名称;
     */
    // 1.定义结构体类型
    struct Person{
        char *name; // name我们称之为结构体的属性名称
        int age; // age也称之为结构体的属性名
        double height; // height也称之为结构体的属性名称
    };
    // 2.定义结构体变量
    struct Person p;

    // 3.使用结构体变量
//    int ages[3] = {1, 3, 5};
//    ages[0] = 1;
    // 格式: 结构体变量名称.结构体属性名称
    p.name = "lnj";
    p.age = 35;
    p.height = 1.9;
    printf("name = %s\n", p.name);
    printf("age = %i\n", p.age);
    printf("height = %lf\n", p.height);
    return 0;
}
