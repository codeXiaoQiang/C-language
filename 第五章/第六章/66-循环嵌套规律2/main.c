#include <stdio.h>

int main()
{
    /*
     * 需求:
       ****
       ****
       ****
     */
//    printf("****\n");

//    printf("*");
//    printf("*");
//    printf("*");
//    printf("*");
//    printf("\n");

//    for(int i = 0; i < 4; i++){
//        printf("*");
//    }
//    printf("\n");

//    for(int i = 0; i < 4; i++){
//        printf("*");
//    }
//    printf("\n");

//    for(int i = 0; i < 4; i++){
//        printf("*");
//    }
//    printf("\n");

    // 规律: 循环嵌套的时候, 外循环控制行数, 内循环控制列数
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 4; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
