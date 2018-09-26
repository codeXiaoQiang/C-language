
#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * 实现步骤:
     * 1.打印倒三角
     * 2.输出需要比较的索引
     * 3.添加条件, 满足就交换位置
     */
    int nums[4] = {3, 2, 1, 5};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 - i; j++){
//            printf("*");
//            printf("%i, %i \n", j, j + 1);
            if(nums[j] > nums[j + 1]){
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
        printf("\n");
    }

    printArray(nums, 4);
    return 0;
}
void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
