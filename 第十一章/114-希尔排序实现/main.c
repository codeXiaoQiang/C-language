#include <stdio.h>
void printArray(int nums[], int len);
int main()
{

    /*
     * 思想:
     * 和插入排序唯一的区别就是插入排序的步长是1, 而希尔排序的步长是我们自己计算的
     *
     * 在企业开发中, 一般情况下排序算法都用不上(普通的开发 --> 项目经理--> CTO)
     * 后续学习的编程语言中都有封装好的排序方法
     *
     * 学习排序算法的目的:
     * 1.将来面试
     * 1.1.面对面  --> 主要给面试官讲解排序思想
     * 1.2.笔试    --> 手写代码(难度相当高, 开发工具有代码提示, 而手写没有)
     * 1.3.机试    --> 写代码
     * 所以: 前面学习的所有排序算法, 不用非常深入的研究
     * 1.每种排序算法的思想必须掌握
     * 2.面试之前把代码背下来
     */
    int nums[7] = {4, 7, 6, 3, 1, 5, 2};
//    printArray(nums, 7);

    // 1.计算步长
    int gap = 7 / 2; // 3
    do{

        // 1.依次从第一个元素开始出去元素和前面的元素进行比较
        for(int i = gap; i < 7; i++){
            // 3.定义变量用于保存前面一个元素的索引
            int j = i;
            while((j - gap) >= 0){
                // 用当前元素和前面的一个元素进行比较
                if(nums[j] < nums[j - gap]){
                    // 2.取出用于和前面元素比较的那个元素
                    int temp = nums[j];
                    // 将前面一个元素往后移动一位
                    nums[j] = nums[j - gap];
                    nums[j - gap] = temp;
                }else{
                    break;
                }
                j--;
            }
        }
        gap = gap / 2;
    }while(gap >= 1);

    printArray(nums, 7);
    return 0;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
