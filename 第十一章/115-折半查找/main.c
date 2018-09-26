#include <stdio.h>
#include <time.h>

int main()
{
    /*
     * 需求: 有一个有序的数组, 要求找到指定元素对应的位置
     * int nums[] = {1, 3, 5, 7, 9};
     * int key = 7;
     *
     * 注意点:
     * 通过遍历依次比较的性能不好, 如果数组中的内容非常多的时,
     * 并且我们要查找的元素非常靠后的时候,我们必须将前面所有元素遍历完才能找到我们要查找的元素
     *
     *
     * 注意点:
     * 折半查找, 必须是有序数组
     * int nums[] = {1, 3, 5, 7, 9, [20]=998};
     */

    /*
    clock_t start = clock();
    // 有序数组
    //            0  1  2  3  4
    int nums[] = {1, 3, 5, 7, 9,[50000]=998, [60000]=0};
    // 需要查找的key
    int key = 998;
    // 遍历数组, 依次比较是否等于key
    for(int i = 0; i < 60000; i++){
        if(key == nums[i]){
            printf("index = %i\n", i);
            clock_t end = clock();
            printf("总共用时: %lli\n", end - start); // 总共用时: 1030809330909185
        }
    }
    */
    int nums[] = {1, 3, 5, 7, 9};
    clock_t start = clock();
    int key = 7;
    int len = sizeof(nums) / sizeof(nums[1]);

    int min = 0;
    int max = len - 1;
    int mid = (min + max) / 2;
    while(max >= min){
        if(nums[mid] < key){
            min = mid + 1;
            mid = (min + max) / 2;
        }else if(nums[mid] > key){
            max = mid - 1;
            mid = (min + max) / 2;
        }else{
//            return mid;
            printf("index = %i\n", mid);
            return;
        }
    }
//    printf("ABC\n");
    return 0;
}
