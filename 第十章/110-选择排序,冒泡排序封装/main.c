
#include <stdio.h>
void selectSort(int values[], int len);
void printArray(int nums[], int len);
void swapEle(int values[], int i, int j);
void bubbleSort(int values[], int len);
int main()
{
    /*
     * ��ѡ�������ð��������з�װ
     *
     * 1.ѡ������, ÿһ�ζ�����ĳһ��Ԫ�غͺ�������Ԫ�رȽ�, ����һ�ֱȽ�֮����ֵ��������ǰ��
     * 2.ѡ�������ʵ�ֲ���
     * 2.1ʵ�ִ�ӡ������
     * 2.2ʵ�������Ҫ�Ƚϵ�����
     * 2.3����ж�����, ����λ��
     *
     * 3.ð������, ÿһ�ζ��������ڵ�����Ԫ�ؽ��бȽ�, ����һ�ֱȽ�֮����ֵ�����������
     * 4.ð�������ʵ�ֲ���
     * 4.1ʵ�ִ�ӡ������
     * 4.2ʵ�������Ҫ�Ƚϵ�����
     * 4.3����ж�����, ����λ��
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
     *2.ѡ�������ʵ�ֲ���
     * 2.1ʵ�ִ�ӡ������
     * 2.2ʵ�������Ҫ�Ƚϵ�����
     * 2.3����ж�����, ����λ��
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
// ע��: ���жϺ����ڴ�᲻���޸�����ʵ�ε�ʱ��
///     ֻ���������β���ʲô����
///     ����ǻ�����������, ��ô�޸��βξͲ���Ӱ��ʵ��
///     �������������, ��ô�޸��βξͻ�Ӱ��ʵ��
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
