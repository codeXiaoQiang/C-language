#include <stdio.h>

int main()
{
    /*
     * 现在有一个有序的数组, 还有一个key, 要求找到key插入数组之后还能保持数组是有序的位置
     * //            0  1  2  3  4
     * int nums[] = {1, 3, 5, 7, 9};
     * key = 8;
     */
    //            0  1  2  3  4
    int nums[] = {1, 3, 5, 7, 9};
    int key = 2;
    int len = sizeof(nums) / sizeof(nums[0]);
    int min = 0;
    int max = len - 1;
    int mid = (min + max) / 2;
    while(max >= min){
        if(nums[mid] > key){
            max = mid - 1;
            mid = (min + max) / 2;
        }else if(nums[mid] < key){
            min = mid + 1;
            mid = (min + max) / 2;
        }
    }
    printf("min = %i\n", min);
    return 0;
}
