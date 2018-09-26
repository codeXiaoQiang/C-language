#include <stdio.h>
int sum(int num1, int num2);
int minus(int num1, int num2);

int main()
{
    /*
     * typedef一般用于给复杂的数据类型起别名, 方便将来使用
     * 结构体
     * 指针
     * 指向函数的指针
     * 指向结构体的指针
     */

    // 1.给普通指针起别名
//    char *name = "lnj";
    typedef char* String;
//    String name = "it666";
//    printf("name = %s\n", name);

    // 2.给结构体起别名
    /*
    struct Person{
        String name;
        int age;
    };
    // 2.1先定义结构体类型, 再给结构体类型起别名
    typedef struct Person ps;
//    struct Person p;
    */
    /*
    // 2.2定义结构体类型的同时, 给结构体类型起别名
    typedef struct Person{
        String name;
        int age;
    } ps;
     ps p = {"lnj", 58};
    */
    /*
    // 2.3定义结构体类型的同时, 给结构体类型起别名, 并且省略原有类型的名称
    // 企业开发的写法
    typedef struct{
        String name;
        int age;
    } Person;

    //  struct Person p = {"lnj", 58};
    Person p = {"lnj", 58};
    printf("name = %s\n", p.name);
    */

    // 给共用体/枚举起别名, 格式和结构体一模一样

    // 3.给指向函数的指针起别名
//    int (*funP)(int, int);
//    funP = &sum;

//    int (*funP2)(int, int);
//    funP2 = &minus;

    // 注意点: 如果给指向函数的指针起别名, 那么指针名称就是别名
    // 企业开发经常使用, 随处可见
    typedef int (*funP)(int, int);
    funP p1 = &sum;
    funP p2 = &minus;

    return 0;
}
int sum(int num1, int num2){
    return num1 + num2;
}
int minus(int num1, int num2){
    return num1 - num2;
}

