#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * 从键盘输入3个0~9之间的数, 然后输出0~9中哪些数字没有出现过
     */

    /*
    // 1.定义是三个变量保存输入的数据
    int a, b, c;
    // 2.提示用如何输入
    printf("请输入3个0~9之间的整数, 以逗号隔开, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i,%i,%i", &a, &b, &c);
    // 4.判断哪些数字没有出现过
    for(int i = 0; i < 10; i++){
//        printf("i = %i\n", i);
        if(a != i &&
           b != i &&
           c != i){
            printf("i = %i\n", i);
        }
    }
    */

    // 1.定义数组保存用户输入的数据
    // 注意点: 为什么要定义一个可以存储10个元素的数组
    //        因为可以存储10个元素的数组, 索引正好是0~9
    int nums[10] = {0};
    int len = sizeof(nums) / sizeof(nums[1]);
//    printArray(nums, len);

    int value = -1; // 定义变量保存用户输入的数据
    for(int i = 0; i < 3; i++){
         // 2.提示用户如何输入
         printf("请输入1个0~9之间的整数, 以回车结束\n");
         // 3.接收用户输入的数据
         scanf("%i", &value);
         // 4.将用户输入的数据作为索引, 往指定索引中存入一个666
         nums[value] = 666;
    }
    // 例如: 1, 3, 5
    //           0  1  2  3  4  5  6  7  8  9
    // 原始数组: {0, a, 0, a, 0, a, 0, 0, 0, 0}

   // 打印用户输入完毕之后的数组
    printf("-----------------------\n");
//    printArray(nums, len);

    for(int i = 0; i < len; i++){
        if(666 != nums[i]){
            printf("i = %i\n", i);
        }
    }

    return 0;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
