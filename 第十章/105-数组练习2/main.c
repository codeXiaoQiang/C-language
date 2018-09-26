#include <stdio.h>
int getMax1(int values[], int len);
int getMax2(int values[], int len);
int main()
{
    /*
     * 设计一个函数找出数组元素的最大值
     */
    int nums[5] = {3, 15, 5, 2, 7};
    int len = sizeof(nums) / sizeof(nums[1]);
    /*
    // 1.定义一个变量保存最大值
//    int max = -1; // 先假设这个最大值是-1
    int max = nums[0];
    // 2.遍历数组取出所有元素, 依次和max比较
    for(int i = 0; i < len; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    */

//    int max = getMax1(nums, len);

    /*
    int max = 0; // 这里的0是索引
    for(int i = 1; i < len; i++){
        if(nums[max] < nums[i]){
            max = i;
        }
    }
    */
    int max = getMax2(nums, len);
    printf("max = %i\n", max);
    return 0;
}

int getMax2(int values[], int len){
    // 1.假设索引为0的元素是最大值
    int max = 0;
    // 2.遍历取出所有的元素进行比较
    for(int i = 1; i < len; i++){
        if(values[max] < values[i]){
            max = i;
        }
    }
    return values[max];
}
int getMax1(int values[], int len){
    // 1.定义一个变量保存最大值
    int max = values[0];
    // 2.遍历数组取出所有元素, 依次和max比较
    for(int i = 0; i < len; i++){
        if(max < values[i]){
            max = values[i];
        }
    }
    return max;
}
