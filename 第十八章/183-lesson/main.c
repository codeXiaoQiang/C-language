#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
     * malloc 作用:
     * 在堆内存中申请一块我们指定长度的空间
     * 接收一个参数: 用于指定需要申请空间的长度
     * 会返回一个void *:
     * void *是万能指针, 可以转换为任意类型的指针
     * 会将申请好的内存地址放到void *中返回给我们
     *
     * void * malloc(size_t _Size);
     *
     * 注意:
     * 1.使用malloc函数必须导入一个头文件 stdlib.h
     * 2.通过malloc申请的空间默认存储的是垃圾数据, 也就是系统不会帮我们初始化
     * 3.所以一般情况下, malloc都会和memset函数结合起来使用
     *
     * memset作用:
     * 专门用于初始化一块内存空间
     * 第一个参数: 传入需要初始化内存的地址
     * 第二个参数: 传入需要初始化的值
     * 第三个参数: 传入需要初始化的长度
     * memset(void *_Dst,int _Val,size_t _Size)
     *
     * 注意点:
     * 使用memset函数必须导入一个头文件 string.h
     */

//    int *num = (int *)malloc(sizeof(int));
//    *num = 666;
//    printf("*num = %i\n", *num);

    // 告诉系统, 我们需要申请12个字节存储空间
    int *p = (int *)malloc(3 * sizeof(int));
//    *(p + 0) = 1;
//    *(p + 1) = 3;
//    *(p + 2) = 5;
//    printf("*(p +0) = %i\n", *(p +0));
//    printf("*(p +1) = %i\n", *(p +1));
//    printf("*(p +2) = %i\n", *(p +2));

//    p[0] = 1;
//    p[1] = 3;
//    p[2] = 5;
//    printf("p[0] = %i\n", p[0]);
//    printf("p[1] = %i\n", p[1]);
//    printf("p[2] = %i\n", p[2]);

    // 告诉系统对那一块空间进行初始化
    memset(p, 0, 3 * sizeof(int));


    for(int i = 0; i < 3; i++){
        printf("p[%i] = %i\n", i, p[i]);
    }
    return 0;
}
