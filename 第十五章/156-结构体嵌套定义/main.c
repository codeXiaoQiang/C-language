#include <stdio.h>

int main()
{
    /*
     * 结构体嵌套定义
     * 结构体的属性可以又是一个结构体
     *
     * 提高代码的复用性
     */
    /*
    struct Person{
        char *name;
        int age;

        // 出生年月
        int year;
        int month;
        int day;

        // 死亡日期
        int year2;
        int month2;
        int day2;

        // 读幼儿园日期
        // 读小学日期
        // 读中学日期
        // 读大学日期
        // 工作日期
        // 结婚日期
        // ... ...
    }
    */
    // 1.定义了一个日期的结构体类型
    struct Date{
        int year;
        int month;
        int day;
    };
    // 2.定义一个人的结构体类型
    struct Person{
        char *name;
        int age;
        struct Date birthday;
    };
    struct Person p = {"lnj", 35, {2020, 12, 12}};

    printf("name = %s\n", p.name);
    printf("name = %i\n", p.age);
    printf("name = %i\n", p.birthday.year);
    printf("name = %i\n", p.birthday.month);
    printf("name = %i\n", p.birthday.day);

    return 0;
}
