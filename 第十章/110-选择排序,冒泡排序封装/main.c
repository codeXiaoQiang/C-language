
#include <stdio.h>
void selectSort(int values[], int len);
void printArray(int nums[], int len);
void swapEle(int values[], int i, int j);
void bubbleSort(int values[], int len);
int main()
{
    /*
     * 对选择排序和冒泡排序进行封装
     *
     * 1.选择排序, 每一次都是用某一个元素和后续所有元素比较, 经过一轮比较之后最值出现在最前面
     * 2.选择排序的实现步骤
     * 2.1实现打印倒三角
     * 2.2实现输出需要比较的索引
     * 2.3添加判断条件, 交换位置
     *
     * 3.冒泡排序, 每一次都是用相邻的两个元素进行比较, 经过一轮比较之后最值出现在最后面
     * 4.冒泡排序的实现步骤
     * 4.1实现打印倒三角
     * 4.2实现输出需要比较的索引
     * 4.3添加判断条件, 交换位置
     */
    int nums[4] = {3, 2, 1, 5};
    int len = sizeof(nums) / sizeof(nums[1]);
    printArray(nums, len);
    bubbleSort(nums,len);
    printf("-----------------\n");
    printArray(nums, len);
    return 0;
}
void bubbleSort(int values[], int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
//            printf("*");
//            printf("%i %i\n", j, j+1);
             if(values[j] > values[j +1]){
                 swapEle(values, j, j + 1);
             }
        }
//        printf("\n");
    }
}
void selectSort(int values[], int len){
    /*
     *2.选择排序的实现步骤
     * 2.1实现打印倒三角
     * 2.2实现输出需要比较的索引
     * 2.3添加判断条件, 交换位置
     */
     for(int i = 0; i < len - 1; i++){
         for(int j = i; j < len - 1; j++){
//             printf("*");
//             printf("%i %i\n", i, j + 1);
             if(values[i] > values[j +1]){
//                 int temp = values[i];
//                 values[i] = values[j + 1];
//                 values[j +1] = temp;
//                 swapEle(values[i], values[j + 1]);
                 swapEle(values, i, j + 1);
             }
         }
//         printf("\n");
     }
}
// 注意: 在判断函数内存会不会修改外面实参的时候
///     只看函数的形参是什么类型
///     如果是基本数据类型, 那么修改形参就不会影响实参
///     如果是数组类型, 那么修改形参就会影响实参
//void swapEle(int num1, int num2){
void swapEle(int values[], int i, int j){
//    int temp = num1;
//    num1 = num2;
//    num2 = temp;
    int temp = values[i];
    values[i] = values[j + 1];
    values[j +1] = temp;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
