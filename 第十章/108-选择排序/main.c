#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * ʵ�ֲ���:
     * 1.��ӡ������
     * 2.�����Ҫ�Ƚϵ�����
     * 3.�������, ����ͽ���λ��
     */
    int nums[4] = {3, 2, 1, 5};

    for(int i = 0; i < 3; i++){
        // ��⳯��, �ı���ѭ����ʼ�����ʽ
        for(int j = i; j < 3; j++){
//            printf("*");
//            printf("i = %i, j = %i\n", i, j + 1);
            if(nums[i] > nums[j + 1]){
                int temp = nums[i];
                nums[i] = nums[j +1];
                nums[j+1] = temp;
            }
        }
//        printf("\n");
    }
    printArray(nums, 4);

    return 0;
}
void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
