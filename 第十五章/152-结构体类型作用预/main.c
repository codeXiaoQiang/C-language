#include <stdio.h>

struct Person{
    char *name;
    int age;
    double height;
};
int main()
{
    /*
     * 结构体类型的作用域
     * 和变量的作用域一样
     */
    // 1.定义一个结构体类型
    {
//        struct Person{
//            char *name;
//            int age;
//            double height;
//        };
        struct Person p1;
    }
    struct Person p3;
    return 0;
}
void test(){
    // 找不到Person这个结构体类型
     struct Person p2;
}
