#include <stdio.h>
void printArray(int[], int);
int main()
{
    /*
     * Ҫ����һ������, ���ڱ�������
     */
    int ages[3] = {1, 3, 5};
//    printf("sizeof(ages) = %i\n", sizeof(ages)); // 12
    int len = sizeof(ages) / sizeof(ages[1]);
//    for(int i = 0; i < len; i++){
//        printf("ages[%i] = %i\n", i, ages[i]);
//    }
    printArray(ages, len); // ages������ռ���ڴ���С�ĵ�ַ, ���Դ���ľ��ǵ�ַ

    return 0;
}

// ��Ȼ��紫�����һ����ַ, ����������յ���Ҳ��һ����ַ
// ��C���������е�ַ������ָ�����������յ�
// ָ��������32λ��������ռ��4���ֽ�, ��64λ��������ռ8���ֽ�
// ����: ��������Ϊ����������ʱ, û�취�ں����ڴ涯̬��������ĳ���
void printArray(int nums[], int len){
//    int len = sizeof(nums) / sizeof(nums[1]);
//    printf("len = %i\n", len);
//    printf("sizeof(nums) = %i\n", sizeof(nums)); // 4
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
