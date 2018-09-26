#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * 插入排序
     * 每次都是用后一个元素和前面所有的元素进行比较
     * 一旦发现后一个元素小于前面一个元素就让前面一个元素向后移动
     * 或者一旦发现后一个元素大于前面一个元素就让当前元素插入到前面一个元素后面
     */

    int nums[4] = {3, 2, 1, 5};
    printArray(nums, 4);
    // 1.依次从第一个元素开始出去元素和前面的元素进行比较
    for(int i = 1; i < 4; i++){
        // 2.取出用于和前面元素比较的那个元素
        int temp = nums[i];
        // 3.定义变量用于保存前面一个元素的索引
        int j = i;
        while(j > 0){
            // 用当前元素和前面的一个元素进行比较
            if(temp < nums[j - 1]){
                // 将前面一个元素往后移动一位
                nums[j] = nums[j - 1];
            }else{
                break;
            }
            j--;
        }
        // 将用于比较的元素插入到当前空出来的位置
        nums[j] = temp;
    }
    printf("-------\n");
    printArray(nums, 4);

    return 0;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
