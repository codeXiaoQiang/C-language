#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * 插入排序
     */
    int nums[4] = {3, 2, 1, 5};

    // 1.实现从第1个元素开始取出, 和前面所有的元素进行比较
    for(int i = 1; i < 4; i++){
//        printf("i = %i\n", i);
        // 2.取出用于和其它元素比较的元素
        int temp = nums[i]; // i = 1; temp = 2
        int j = i; // j = 1; j = 0;
        while(j > 0){
//            printf("%i, %i\n", i, j - 1);
            if(temp < nums[j - 1]){ // 2 < 3
                // 3.如果当前元素小于前面一个元素, 让前面一个元素后移一位
                // nums[1] = nums[0];  num1 = 3
                nums[j] = nums[j - 1];
            }else{
                // 4.如果当前元素大于前面一个元素, 将当前元素插入到前面一个元素后面
                break;
            }
            j--; // j = 0;
        }
        // nums[0] = 2;
        nums[j] = temp;
    }

    printArray(nums, 4);
    return 0;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
