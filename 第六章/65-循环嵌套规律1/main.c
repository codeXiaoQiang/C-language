#include <stdio.h>

int main()
{
    /*
     * 循环是可以嵌套的, 而且在企业开发中用的还比较多
     * 但是有一个注意点: 在企业开发中一般情况下,循环嵌套不会超过两层, 最多不超过三层
     *
     * 规律:
     * 循环嵌套的时候, 内循环执行的次数,就是外循环执行的次数*内循环执行的次数
     */

//    for(int i = 0; i < 2; i++){
//        for(int j = 0; j < 3; j++){
//            printf("随便写点东西\n");
//        }
//    }

    /*
     * 好友分组1
     *    好友1
     *    好友2
     * 好友分组2
     *    好友1
     *    好友2
     * 好友分组3
     *    好友1
     *    好友2
     */
    /*
    printf("好友分组1\n");
    printf("    好友1\n");
    printf("    好友2\n");
    printf("    好友3\n");
    printf("    好友4\n");

    printf("好友分组2\n");
    printf("    好友1\n");
    printf("    好友2\n");
    printf("    好友3\n");
    printf("    好友4\n");

    printf("好友分组3\n");
    printf("    好友1\n");
    printf("    好友2\n");
    printf("    好友3\n");
    printf("    好友4\n");
    */
    /*
    for(int num = 1; num <= 3; num++){
        printf("好友分组%i\n", num);
        printf("    好友1\n");
        printf("    好友2\n");
        printf("    好友3\n");
        printf("    好友4\n");
    }
    */
    for(int num = 1; num <= 3; num++){
        printf("好友分组%i\n", num);
        for(int j = 1; j <= 2; j++){
            printf("    好友%i\n", j);
        }
    }
    return 0;
}
