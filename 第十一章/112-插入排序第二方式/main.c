#include <stdio.h>
void printArray(int nums[], int len);
int main()
{
    /*
     * ��������
     * ÿ�ζ����ú�һ��Ԫ�غ�ǰ�����е�Ԫ�ؽ��бȽ�
     * һ�����ֺ�һ��Ԫ��С��ǰ��һ��Ԫ�ؾ���ǰ��һ��Ԫ������ƶ�
     * ����һ�����ֺ�һ��Ԫ�ش���ǰ��һ��Ԫ�ؾ��õ�ǰԪ�ز��뵽ǰ��һ��Ԫ�غ���
     */

    int nums[4] = {3, 2, 1, 5};
    printArray(nums, 4);
    // 1.���δӵ�һ��Ԫ�ؿ�ʼ��ȥԪ�غ�ǰ���Ԫ�ؽ��бȽ�
    for(int i = 1; i < 4; i++){
        // 2.ȡ�����ں�ǰ��Ԫ�رȽϵ��Ǹ�Ԫ��
        int temp = nums[i];
        // 3.����������ڱ���ǰ��һ��Ԫ�ص�����
        int j = i;
        while(j > 0){
            // �õ�ǰԪ�غ�ǰ���һ��Ԫ�ؽ��бȽ�
            if(temp < nums[j - 1]){
                // ��ǰ��һ��Ԫ�������ƶ�һλ
                nums[j] = nums[j - 1];
            }else{
                break;
            }
            j--;
        }
        // �����ڱȽϵ�Ԫ�ز��뵽��ǰ�ճ�����λ��
        nums[j] = temp;
    }
    printf("-------\n");
    printArray(nums, 4);

    return 0;
}

void printArray(int nums[], int len){
    for(int i = 0; i < len; i++){
        printf("nums[%i] = %i\n", i, nums[i]);
    }
}
