#include <stdio.h>

int main()
{
    /*
     -
     --
     ---
     */
    int count = 0;
//    for(int i = 0; i < 3; i++){ // 行数
//        for(int j = 0; j <= count; j++){ // 列数
//            printf("-");
//        }
//        printf("\n");
//        count++;
//    }

    // 规律: 尖尖朝上, 修改内循环条件表达式
    for(int i = 0; i < 3; i++){ // 行数
        for(int j = 0; j <= i; j++){ // 列数
            printf("-");
        }
        printf("\n");
    }
    return 0;
}
