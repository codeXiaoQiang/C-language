#include <stdio.h>

#define SCORE 90
int main()
{
    /*
     * 条件编译
     * #if
     * #else
     * #endif
     *
     * 条件编译和if else语句很像, 但是也有区别
     * 1.if else语句是在程序运行的时候执行的
     *   #if #else #endif是在预处理的时候执行的
     * 2.if else语句所有的代码都会编译到程序中
     *  #if #else #endif中只有满足条件的语句才会编译到程序中
     *
     * 注意点:
     * #if 和 #endif 可以组成一对
     * #if #else #endif 可以组成一对
     * #if #elif #else #endif 可以组成一对, 其中#elif可以有一个或对个
     *
     * 无论怎么组合#endif都不可以省略
     */
//    int score = 90;
//    if(100 == score){
//        printf("100分\n");
//    }else if(60 <= score){
//        printf("及格了\n");
//    }else{
//        printf("不是100分\n");
//    }

#if 100 == SCORE
    printf("100分\n");
#elif 60 <= SCORE
    printf("及格了\n");
#else
    printf("不是100分\n");
#endif

      /*
       * 注意点: 条件编译中不能获取变量的值
       * 因为变量是程序执行的时候才有的, 而条件编译时预处理的时候就执行了
       * 君生为未生, 我生君已老
       *
       * 条件编译一般是配合宏定义来使用
       * 因为宏定义和条件编译都是在预处理的时候执行的
       */
//      int score = 100;
//#if 0 == score
//    printf("0分\n");
//#else
//    printf("100分\n");
//#endif

    return 0;
}
