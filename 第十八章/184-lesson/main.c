#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
     * malloc函数: 在堆内存中开辟一块存储空间
     * malloc函数开辟好的存储空间, 不会进行初始化
     * free函数: 释放我们在堆内存中开辟的一块内存空间
     * memset函数: 给指定的堆内存进行初始化
     */
    // 申请4个字节的存储空间
    // (int *)强制类型转换
    // malloc函数返回的是void *, 而我们开辟的是4个字节, 正好是int类型,
    // 所以最好将void *转换为int *, 因为只有指针类型是int类型,
    // 将来操作这块内存的时候, 我们才知道应该操作多少个字节
    int *p = (int *)malloc(sizeof(int));
    printf("*p = %i\n", *p);

    // 给分配好的堆内存进行初始化
    memset(p, 0, sizeof(int));
    printf("*p = %i\n", *p);

    // 释放堆内存中分配的存储空间
    // free函数, 我们只传递了内存的地址, 系统如何知道应该释放多少个字节的存储空间
    // 在利用malloc分配的时, 系统就偷偷摸摸的保存了该指针对应的内存大小
    free(p);
    return 0;
}
