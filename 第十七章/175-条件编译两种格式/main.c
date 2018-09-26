#include <stdio.h>

#define DEBUG

int main()
{
    /*
     * 第一种格式:
     * #if #elif #else #endif
     * 第二种格式:
     * #ifdef #else #endif
     *
     * #ifdef作用: 判断是否定义某一个宏
     *
     * #ifndef #else #endif
     * #ifndef作用: 判断是否没有定义某一个宏
     */

//#ifdef DEBUG
//    printf("开发阶段\n");
//#else
//    printf("部署阶段\n");
//#endif

#ifndef DEBUG
     printf("部署阶段\n");
#else
    printf("开发阶段\n");
#endif
    return 0;
}
