#include <stdio.h>

void printArray(int nums[], int len);

int main()
{
    /*
     * 需求: 要求从键盘输入5个 0~9的数, 然后排序之后输出
     * 计数排序:
     *  0  1  2  3  4  5  6  7  8  9
     * {0, 1, 0, 1, 1, 1, 0, 1, 0, 0}
     * if(1 == nums[i]){
     * }
     * 1, 3, 4, 5, 7
     * 注意点: 计数排序只能用于有限数字的排序
     * 在所有排序算法中, 如果需要排序的数组是在有限范围内的, 并且不是很多的情况
     * 计数排序的效率是最高的
     *
     *  0  1  2  3  4  5  6  7  8  9
     * {0, 1, 0, 2, 0, 1, 0, 1, 0, 0}
     *
     * 5, 1, 3, 7, 3  --> 1, 3, 3 , 5, 7
     *
     * 计数排序三个条件:
     * 1.数组索引必须和需要排序范围一致, 例如需要排序的是0~9, 那么数组索引必须是0~9
     * 2.遍历数组时每次遇到需要排序的数, 就往对应索引的元素中存入原来的值+1
     * 3.输出时输出的是数组的索引, 把数组索引中存储的值作为是否要输出该索引和输出多少次的条件
     */
    // 1.定义一个索引是0~9的数组
    int nums[10] = {0};
    int len = sizeof(nums) / sizeof(nums[1]);
//    printArray(nums, len);
    // 定义变量接收用户输入的数据
    int value = -1;
    for(int i = 0; i < 5; i++){
        // 2.提示用户如何输入数据
        printf("请输入1个0~9之间的整数, 以回车结束\n");
        // 3.接收用户输入的数据
        scanf("%i", &value);
        // 4.将用户输入的数据作为索引, 往数组对应索引的内存中存入一点输入
        nums[value] = nums[value] + 1;
    }
    printf("-------------------\n");
//    printArray(nums, len);

    // 遍历数组
    /*
    for(int i = 0; i < len; i++){
        // 判断当前遍历到的元素中是否有内容, 有内容就输出对应的索引
        if(1 == nums[i]){
            printf("i = %i\n", i);
        }
    }
    */

    // {0, 1, 0, 2, 0, 1, 0, 1, 0, 0}
    for(int i = 0; i < len; i++){ // 0 1 2 3
        //第一个元素     0 < 0
        //第二个元素     1 < 1
        //第三个元素     0 < 0
        //第四个元素     0 < 2
        //第四个元素     1 < 2
        for(int j = 0; j < nums[i]; j++){
            printf("i = %i\n", i); // 1 3 3
        }
    }

    return 0;
}
void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
