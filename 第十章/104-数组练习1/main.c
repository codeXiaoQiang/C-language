#include <stdio.h>

int main()
{
    /*
     * ����: Ҫ��Ӽ�������20��BTC���۵ļ۸�, ��̬���㵱ǰ����BTCƽ���۸�
     */
//    int a, b, c;
//    scanf("%i,%i,%i", &a, &b, &c);
//    int average = (a + b + c) / 3;
//    printf("average = %i\n", average);
    // 1.�������鱣���û����������

    int nums[5] = {0};
    int sum = 0;
    int len = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < len; i ++){
        printf("������һ������, �Իس�����\n");
        scanf("%i", &nums[i]);
        sum = sum + nums[i];
    }
    int average = sum / len;
    printf("average = %i\n", average);
    return 0;
}
