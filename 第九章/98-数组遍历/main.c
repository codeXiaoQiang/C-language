#include <stdio.h>

int main()
{
    /*
     * 遍历数组
     * 什么是遍历数组?
     * 遍历数组就是取出数组中存储的所有数据, 我们就称之为遍历数组
     */
    int ages[] = {1, 3, 5};
//    printf("ages[0] = %i\n", ages[0]);
//    printf("ages[1] = %i\n", ages[1]);
//    printf("ages[2] = %i\n", ages[2]);
//    printf("ages[3] = %i\n", ages[3]);
//    printf("ages[4] = %i\n", ages[4]);

    // 注意点:
    // 在遍历数组的时候, 循环结束的条件不要写死

    // 规律: sizeof(数组名称) 可以得到该数组占用的内存总大小
//    printf("sizeof(ages) = %i\n", sizeof(ages));
    // 规律: sizeof(数组元素) 可以得到该元素占用的内存大小
//    printf("sizeof(ages[1]) = %i\n", sizeof(ages[1]));
//    printf("length = %i\n", sizeof(ages) / sizeof(ages[1]));

    int length = sizeof(ages) / sizeof(ages[1]);
    for(int i = 0; i < length; i++){
        printf("ages[%i] = %lf\n", i,ages[i]);
    }
    return 0;
}
