#include <stdio.h>
int getMax1(int values[], int len);
int getMax2(int values[], int len);
int main()
{
    /*
     * ���һ�������ҳ�����Ԫ�ص����ֵ
     */
    int nums[5] = {3, 15, 5, 2, 7};
    int len = sizeof(nums) / sizeof(nums[1]);
    /*
    // 1.����һ�������������ֵ
//    int max = -1; // �ȼ���������ֵ��-1
    int max = nums[0];
    // 2.��������ȡ������Ԫ��, ���κ�max�Ƚ�
    for(int i = 0; i < len; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    */

//    int max = getMax1(nums, len);

    /*
    int max = 0; // �����0������
    for(int i = 1; i < len; i++){
        if(nums[max] < nums[i]){
            max = i;
        }
    }
    */
    int max = getMax2(nums, len);
    printf("max = %i\n", max);
    return 0;
}

int getMax2(int values[], int len){
    // 1.��������Ϊ0��Ԫ�������ֵ
    int max = 0;
    // 2.����ȡ�����е�Ԫ�ؽ��бȽ�
    for(int i = 1; i < len; i++){
        if(values[max] < values[i]){
            max = i;
        }
    }
    return values[max];
}
int getMax1(int values[], int len){
    // 1.����һ�������������ֵ
    int max = values[0];
    // 2.��������ȡ������Ԫ��, ���κ�max�Ƚ�
    for(int i = 0; i < len; i++){
        if(max < values[i]){
            max = values[i];
        }
    }
    return max;
}
