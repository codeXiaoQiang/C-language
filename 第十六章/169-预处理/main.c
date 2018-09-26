#include <stdio.h>

#define COUNT 5
//#define URL "http://127.0.0.1"
//#define URL "http://www.it666.com"
int main()
{
    /*
     * 预处理指令
     * 文件包含 include
     * 宏定义 #define
     * 条件编译 #if #else #endif
     *
     * 宏定义:
     * 宏定义会在预处理的时候, 用宏定义的值来替换宏的名称
     *
     * 宏定义的格式:
     * #define 宏名称 宏值
     *
     * 应用场景:
     * 企业开发分为开发阶段和部署阶段
     * 例如在程序开发中会用到很多的地址
     *
     * 注意点:
     * 1.宏定义的后面不要写分号
     * 因为宏定义是单纯的替换, 会用宏的值替换宏名
     * 2.宏定义分为两种, 一种是不带参数的宏定义, 一种是带参数的宏定义
     */

    /* */
//    int ages[5] = {1, 3, 5, 7, 9};
    int ages[COUNT] = {1, 3, 5, 7, 9};
    // 除了可以动态计算数组的长度以外, 还可以利用宏定义
//    int len = sizeof(ages) / sizeof(ages[1]);
//    for(int i = 0; i < len; i++){
    for(int i = 0; i < COUNT; i++){
        printf("ages[%i] = %i\n", i, ages[i]);
    }


//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
    return 0;
}
