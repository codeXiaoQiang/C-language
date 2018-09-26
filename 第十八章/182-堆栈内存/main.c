#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
int main()
{

    /*
     * 1.栈内存分配从地址大的开始分配
     * 2.栈内存中存储的数据会自动释放
     * 3.栈的内存大小有限, 所以特别在使用递归的时候一定要注意, 栈溢出的问题
     */
    // 放在栈中的数据
    int num = 666;
    int value = 888;
    printf("&num = %p\n", &num); //  &num = 0060FEAC
    printf("&value = %p\n", &value); // &value = 0060FEA8

    sum(10, 20);
    // 4 * 10240 * 1024
//    int ages[10240 * 102400];


    /*
     * 堆内存可以存放任意类型的数据，但需要自己申请与释放
     * 堆大小，想像中的无穷大，但实际使用中，受限于实际内存的大小和内存是否连续性
     */

    // 手动申请一块堆中的内存
    // malloc函数就是用于申请堆中的内存的
    // malloc接收一个参数, 这个参数代表告诉系统, 我们需要几个字节的空间
    int *p1 = (int *)malloc(4);
    int *p2 = (int *)malloc(sizeof(int));
    *p1 = 123;
    *p2 = 456;


    printf("*p1 = %i\n", *p1);
    printf("*p2 = %i\n", *p2);

    printf("p1 = %i\n", p1); // p1 = 14947416
    printf("p2 = %i\n", p2); // p2 = 14947432

    // 可以通过free函数来手动释放我们申请的空间
    free(p1);
    free(p2);

    return 0;
}
int sum(int a, int b){ // 放在栈中的数据
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
}
