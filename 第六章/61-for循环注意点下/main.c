#include <stdio.h>

int main()
{
    /*
    // 1.for循环和while循环一样, 可以省略大括号
    // 如果for循环省略了大括号, 和while循环一样, 只能控制紧随其后的那条语句
    // 如果for循环省略了大括号, 和while循环一样, 不能定义行的变量
    // 和while循环一样, 任何数值都有真假性
//    for(;0;)
//        printf("被控制的语句\n");
//    printf("不被控制的语句\n");

//    for(;0;)
//        int num = 666;

    // 2.还是和while一样, for循环可以不写分号
    // 如果写了分号, 一定不能写在()和{}之间
//    for(;0;);{
//        printf("被控制的语句\n");
//    }
    */

    // 3.for作用中变量的作用域问题
    /*
    int num = 666;
    {
        int num = 888;
        printf("num = %i\n", num); // 888
    }
    printf("num = %i\n", num); // 666
    */

    // 结论: 在循环体中定义和初始化表达式同名的变量不会报错
//    for(int num = 0; num < 3; num++)
//    {
//        int num = 666;
//        printf("num = %i\n", num); // 666
//    }

    // 结论: 在for的()中不能范围循环体中定义的变量
    for(int num = 0; num < 3; count++)
    {
        int count = 666;
        printf("num = %i\n", num); // 666
    }
    return 0;
}

