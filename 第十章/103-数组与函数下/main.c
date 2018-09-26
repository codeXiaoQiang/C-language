#include <stdio.h>
void printArray(int[], int);
int main()
{
    /*
     * 要求定义一个函数, 用于遍历数组
     */
    int ages[3] = {1, 3, 5};
//    printf("sizeof(ages) = %i\n", sizeof(ages)); // 12
    int len = sizeof(ages) / sizeof(ages[1]);
//    for(int i = 0; i < len; i++){
//        printf("ages[%i] = %i\n", i, ages[i]);
//    }
    printArray(ages, len); // ages是数组占用内存最小的地址, 所以传入的就是地址

    return 0;
}

// 既然外界传入的是一个地址, 所以这里接收到的也是一个地址
// 在C语言中所有地址都是用指针类型来接收的
// 指针类型在32位编译器中占用4个字节, 在64位编译器中占8个字节
// 结论: 当数组作为函数参数的时, 没办法在函数内存动态计算数组的长度
void printArray(int nums[], int len){
//    int len = sizeof(nums) / sizeof(nums[1]);
//    printf("len = %i\n", len);
//    printf("sizeof(nums) = %i\n", sizeof(nums)); // 4
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
