#include <stdio.h>

int main()
{
    /*
     * 结构体指针
     * 因为结构体变量也会分配内存空间, 所以结构体变量也有内存地址, 所以也可以使用指针保存结构体变量的地址
     *
     * 规律:
     * 定义指向结构体变量的指针的套路和过去定义指向普通变量的一样
     *
     * 如果指针指向了一个结构体变量, 那么访问结构体变量的属性就有3种方式
     * 结构体变量名称.属性名称;
     * (*结构体指针变量名称).属性名称;
     * 结构体指针变量名称->属性名称;
     */

    struct Person{
        char *name;
        int age;
        double height;
    };
    struct Person per = {"lnj", 35, 1.9};
    struct Person *p;
    p = &per;
//    printf("per.name = %s\n", per.name);
//    printf("per.name = %s\n", (*p).name);
    printf("per.name = %s\n", p->name);
    return 0;
}
