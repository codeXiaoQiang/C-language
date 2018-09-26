#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     * calloc函数: 就是对malloc函数的封装, 一般用于开辟数组的存储空间
     */
    /*
    int *p = (int *)malloc(sizeof(int) * 3);

    // *p代表操作p指向的存储空间
    // 如何操作呢? 根据指针的类型来操作, 如果指针的类型是int类型, 那么就操作4个字节
    // p + N, 给指针做加法
    // 如何计算呢? 根据指针的类型来计算, 如果指针的类型是int类型, 那么+1相当于+4
//    *(p + 0) = 1;
//    *(p + 1) = 3;
//    *(p + 2) = 4;
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;

    printf("*(p + 0) = %i\n", *(p + 0));
    printf("*(p + 1) = %i\n", *(p + 1));
    printf("*(p + 2) = %i\n", *(p + 2));
    */

    // 告诉操作系统, 需要开辟3块存储空间, 每块存储空间占用4个字节
    int *p = (int *)calloc(3, sizeof(int));
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
//    printf("*(p + 0) = %i\n", *(p + 0));
//    printf("*(p + 1) = %i\n", *(p + 1));
//    printf("*(p + 2) = %i\n", *(p + 2));
    printf("p[0] = %i\n", p[0]);
    printf("p[1] = %i\n", p[1]);
    printf("p[2] = %i\n", p[2]);
    return 0;
}
