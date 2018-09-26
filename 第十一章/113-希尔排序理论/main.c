#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
   int nums[4] = {3, 2, 1, 5};

   printArray(nums, 4);
   // 1.取出用于比较的元素
   for(int i = 1; i < 4; i++){
       //   i = 1; i = 2
       // 2.取出前面一个元素
       // int j = 1; j = 0;
       // int j = 2; j = 1; j = 0;
       for(int j = i; j > 0; j--){
           // 3.进行比较
           // nums[1] < nums[0]
           // nums[2] < nums[1]
           // nums[1] < nums[0]
           if(nums[j] < nums[j-1]){
               int temp = nums[j];
               nums[j] = nums[j - 1];
               nums[j-1] = temp;
           }else{
               break;
           }
       }
   }
   printf("---------\n");
   printArray(nums, 4);

   return 0;
}
void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
