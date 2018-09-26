#include <stdio.h>

int main()
{
    /*
     * 结构体数组
     * 就是定义个数组保存结构体变量
     */
    struct Person{
        char *name;
        int age;
        double height;
    };
//    struct Person p1 = {"lnj", 35, 1.90};
//    struct Person p2 = {"zs", 22, 1.2};
//    struct Person p3 = {"ls", 33, 1.4};
//    struct Person p4 = {"ww", 56, 1.8};
    // 数据类型 数组名称[元素个数];
//    struct Person ps[4];
//    ps[0] = p1;
//    ps[1] = p2;
//    ps[2] = p3;
//    ps[3] = p4;

//    struct Person ps[4] = {p1, p2, p3, p4};
     struct Person ps[4] ={
         {"lnj", 35, 1.90},
         {"zs", 22, 1.2},
         {"ls", 33, 1.4},
         {"ww", 56, 1.8},
     };

    return 0;
}
