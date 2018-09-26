#include <stdio.h>

struct Person{
    char *name;
    int age;
};

void test(struct Person per);

int main()
{
    /*
     * 结构体和函数
     * 虽然结构体时构造类型, 但是结构体变量之间的赋值
     * 和基本数据类型赋值一样, 是拷贝
     */

    // 注意点: 定义结构体类型不会分配存储空间
    // 只有定义结构体变量才会分配存储空间
    /*
    struct Person{
        char *name;
        int age;
    };
    struct Person p1 = {"lnj", 35};
    struct Person p2;
    p2 = p1;
    p2.name = "zs";
    printf("p1.name = %s\n", p1.name); // lnj
    printf("p2.name = %s\n", p2.name); //  zs
    */

    struct Person p1 = {"lnj", 35};
    printf("p1.name = %s\n", p1.name); // lnj
    test(p1);
    printf("p1.name = %s\n", p1.name); // lnj
    return 0;
}
void test(struct Person per){
    per.name = "zs";
}
