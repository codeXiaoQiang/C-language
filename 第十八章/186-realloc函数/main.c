#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     * realloc : 用于给内存扩容和缩容
     * 例如:
     * 1.我们利用malloc分配了4个字节, 一会我们觉得4个字节不够用, 想增加到8个字节, 这个时候就可以使用realloc函数
     * 2.我们利用malloc分配了8个字节, 一会我们觉得8个字节太多了, 想减少到4个字节, 这个时候就可以使用realloc函数
     *
     *
     * 注意点:
     * 利用malloc函数分配存储空间, 必须是连续的. 也就是在堆内存中分配内存空间必须是连续的
     * 所以如果利用realloc函数扩容的时候, 后面没有连续的内存了, 那么系统会分配一块新的内存
     */

    // 1.申请4个字节的存储空间
    int *p1 = (int *)malloc(sizeof(int));
    *(p1+0) = 666;
    printf("*(p1+0) = %i\n", *(p1+0));
    printf("p1 = %p\n", p1);

    // 2.给已经申请的4个字节扩容
    int *p2 = (int *)realloc(p1, sizeof(int) * 2);
    printf("p2 = %p\n", p2);
    return 0;
}
