#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * ��������
     */
    int nums[4] = {3, 2, 1, 5};

    // 1.ʵ�ִӵ�1��Ԫ�ؿ�ʼȡ��, ��ǰ�����е�Ԫ�ؽ��бȽ�
    for(int i = 1; i < 4; i++){
//        printf("i = %i\n", i);
        // 2.ȡ�����ں�����Ԫ�رȽϵ�Ԫ��
        int temp = nums[i]; // i = 1; temp = 2
        int j = i; // j = 1; j = 0;
        while(j > 0){
//            printf("%i, %i\n", i, j - 1);
            if(temp < nums[j - 1]){ // 2 < 3
                // 3.�����ǰԪ��С��ǰ��һ��Ԫ��, ��ǰ��һ��Ԫ�غ���һλ
                // nums[1] = nums[0];  num1 = 3
                nums[j] = nums[j - 1];
            }else{
                // 4.�����ǰԪ�ش���ǰ��һ��Ԫ��, ����ǰԪ�ز��뵽ǰ��һ��Ԫ�غ���
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
