#include <stdio.h>
int moveToLeft(){
    printf("打左转向灯\n");
    printf("看左边后视镜\n");
    printf("向左打方向盘\n");
    printf("踩油门加速\n");
}

int moveToRight(){
    printf("打右转向灯\n");
    printf("看右边后视镜\n");
    printf("向右打方向盘\n");
    printf("踩油门加速\n");
}

int main()
{
    /*
     * 为什么要定义函数
     *
     * 如果不定义函数:
     * 1.重复代码冗余代码过多, 又臭又长
     * 2.需求发生变更时需要修改很多代码, 不利于维护
     *
     * 如果定义函数:
     * 1.提高了代码的复用性, 代码变得更简洁
     * 2.需求发生变更时只需要修改很少的代码, 有利于维护
     *
     * 函数的作用:
     * 将某些代码封装起来
     */

    /*
    // 像左边变道
    printf("打左转向灯\n");
    printf("看左边后视镜\n");
    printf("向左打方向盘\n");
//    printf("踩油门加速\n");

    // 像右边变道
    printf("打右转向灯\n");
    printf("看右边后视镜\n");
    printf("向右打方向盘\n");
    printf("踩油门加速\n");

    // 像左边变道
    printf("打左转向灯\n");
    printf("看左边后视镜\n");
    printf("向左打方向盘\n");
//    printf("踩油门加速\n");
    */

    // 向左变道
    moveToLeft();
    printf("-----------------\n");
    // 向右变道
    moveToRight();
    printf("-----------------\n");
    // 向左变道
    moveToLeft();
    return 0;
}

