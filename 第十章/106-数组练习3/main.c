#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * �Ӽ�������3��0~9֮�����, Ȼ�����0~9����Щ����û�г��ֹ�
     */

    /*
    // 1.���������������������������
    int a, b, c;
    // 2.��ʾ���������
    printf("������3��0~9֮�������, �Զ��Ÿ���, �Իس�����\n");
    // 3.�����û����������
    scanf("%i,%i,%i", &a, &b, &c);
    // 4.�ж���Щ����û�г��ֹ�
    for(int i = 0; i < 10; i++){
//        printf("i = %i\n", i);
        if(a != i &&
           b != i &&
           c != i){
            printf("i = %i\n", i);
        }
    }
    */

    // 1.�������鱣���û����������
    // ע���: ΪʲôҪ����һ�����Դ洢10��Ԫ�ص�����
    //        ��Ϊ���Դ洢10��Ԫ�ص�����, ����������0~9
    int nums[10] = {0};
    int len = sizeof(nums) / sizeof(nums[1]);
//    printArray(nums, len);

    int value = -1; // ������������û����������
    for(int i = 0; i < 3; i++){
         // 2.��ʾ�û��������
         printf("������1��0~9֮�������, �Իس�����\n");
         // 3.�����û����������
         scanf("%i", &value);
         // 4.���û������������Ϊ����, ��ָ�������д���һ��666
         nums[value] = 666;
    }
    // ����: 1, 3, 5
    //           0  1  2  3  4  5  6  7  8  9
    // ԭʼ����: {0, a, 0, a, 0, a, 0, 0, 0, 0}

   // ��ӡ�û��������֮�������
    printf("-----------------------\n");
//    printArray(nums, len);

    for(int i = 0; i < len; i++){
        if(666 != nums[i]){
            printf("i = %i\n", i);
        }
    }

    return 0;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
