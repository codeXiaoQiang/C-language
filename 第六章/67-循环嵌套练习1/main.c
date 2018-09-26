#include <stdio.h>

int main()
{
    /*
     * 需求
     ---
     --
     -
     注意: 在企业开发中, 但凡遇到需要解决很多行很多列的问题, 就要想到循环嵌套
     */

    /*
     * ---
     * ---
     * ---
     */

//    for(int i = 0; i < 3; i++){ // 行数
//        for(int j = 0; j < 3; j++){ // 列数
//            printf("-");
//        }
//        printf("\n");
//    }

    // 定义变量控制列数
//    int count = 0; // 0 1 2
//    for(int i = 0; i < 3; i++){ // 行数
//        // 第一次执行内循环 : j = 0 1 2
//        // 第二次执行内循环:  j = 1 2
//        // 第三次执行内循环:  j = 2
//        for(int j = count; j < 3; j++){ // 列数
//            printf("-");
//        }
//        printf("\n");
//        count++;
//    }


    // 规律: 尖尖朝下, 修改内循环的初始化表达式
    for(int i = 0; i < 3; i++){ // 行数
//        printf("i = %i\n", i);
        for(int j = i; j < 3; j++){ // 列数
            printf("-");
        }
        printf("\n");
    }
    return 0;
}
