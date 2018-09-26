#include <stdio.h>

int main()
{
    /*
    // 要求你写出三种访问数组元素的写法
    int ages[3] = {1, 3, 5};
//    printf("ages[0] = %i\n", ages[0]);
    int *p = ages;
//      printf("p[0] = %i\n", p[0]);
      printf("0[p] = %i\n", 0[p]);
      */

    /*
     * 指针可以进行加减法
     * 指针 +1  -1
     * 应用场景: 一般都是用在指针数组中
     *
     * 指针变量+1是加多少, 加的就是指针变量类型占用的字节数
     * 注意点:
     * 1. -1操作一般企业开发不会用到
     * 2.只有指针才可以做+1-1操作, 数组名不可以
     */

    int ages[3] = {1, 3, 5};
    int *p = ages;
//    printf("*p = %i\n", *p); // 1
//    printf("*(p + 1) = %i\n", *(p + 1)); // 3
//    printf("*(p + 2) = %i\n", *(p + 2)); // 5

//    printf("*p = %i\n", *p++); // 1
//    printf("*p = %i\n", *p++); // 3
//    printf("*p = %i\n", *p); // 5
//    printf("*p = %i\n", *(--p)); // 3


    for(int i = 0; i < 3; i++){
//        printf("ages[%i] = %i\n", i, ages[i]);
        printf("ages[%i] = %i\n", i, *p++);
    }
    return 0;
}
