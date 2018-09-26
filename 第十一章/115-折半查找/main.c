#include <stdio.h>
#include <time.h>

int main()
{
    /*
     * ����: ��һ�����������, Ҫ���ҵ�ָ��Ԫ�ض�Ӧ��λ��
     * int nums[] = {1, 3, 5, 7, 9};
     * int key = 7;
     *
     * ע���:
     * ͨ���������αȽϵ����ܲ���, ��������е����ݷǳ����ʱ,
     * ��������Ҫ���ҵ�Ԫ�طǳ������ʱ��,���Ǳ��뽫ǰ������Ԫ�ر���������ҵ�����Ҫ���ҵ�Ԫ��
     *
     *
     * ע���:
     * �۰����, ��������������
     * int nums[] = {1, 3, 5, 7, 9, [20]=998};
     */

    /*
    clock_t start = clock();
    // ��������
    //            0  1  2  3  4
    int nums[] = {1, 3, 5, 7, 9,[50000]=998, [60000]=0};
    // ��Ҫ���ҵ�key
    int key = 998;
    // ��������, ���αȽ��Ƿ����key
    for(int i = 0; i < 60000; i++){
        if(key == nums[i]){
            printf("index = %i\n", i);
            clock_t end = clock();
            printf("�ܹ���ʱ: %lli\n", end - start); // �ܹ���ʱ: 1030809330909185
        }
    }
    */
    int nums[] = {1, 3, 5, 7, 9};
    clock_t start = clock();
    int key = 7;
    int len = sizeof(nums) / sizeof(nums[1]);

    int min = 0;
    int max = len - 1;
    int mid = (min + max) / 2;
    while(max >= min){
        if(nums[mid] < key){
            min = mid + 1;
            mid = (min + max) / 2;
        }else if(nums[mid] > key){
            max = mid - 1;
            mid = (min + max) / 2;
        }else{
//            return mid;
            printf("index = %i\n", mid);
            return;
        }
    }
//    printf("ABC\n");
    return 0;
}
