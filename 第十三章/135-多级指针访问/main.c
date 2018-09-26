#include <stdio.h>

int main()
{
    /*
     * 指针和数组
     */
    int ages[3] = {1, 3, 5};

    for(int i = 0; i < 3; i++){
        printf("ages[%i] = %i\n", i, ages[i]);
    }

    // 数组名称保存的就是数组占用内存最小的那个地址
//    printf("ages = %p\n", ages); // ages = 0060FEA0
//    printf("&ages = %p\n", &ages); // ages = 0060FEA0

    // 既然数组名称保存的就是地址, 而指针也是用于保存地址的, 所以指针也可以指向数组
    int *p = &ages;
//    printf("p = %p\n", p); // 0060FEA0
    // 结论: 如果利用指针保存数组的地址之后, 那么 p = ages = &ages;

    // ages[0] 相当于 0060FEA0[0]
//    ages[0] = 8;
//    p[0] = 999;


    printf("--------------\n");
    for(int i = 0; i < 3; i++){
        printf("p[%i] = %i\n", i, p[i]);
    }
    return 0;
}
