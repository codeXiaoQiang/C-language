#include <stdio.h>

int main()
{
    /*
     * 需求: 要求从键盘输入20个BTC出售的价格, 动态计算当前出售BTC平均价格
     */
//    int a, b, c;
//    scanf("%i,%i,%i", &a, &b, &c);
//    int average = (a + b + c) / 3;
//    printf("average = %i\n", average);
    // 1.定义数组保存用户输入的数据

    int nums[5] = {0};
    int sum = 0;
    int len = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < len; i ++){
        printf("请输入一个整数, 以回车结束\n");
        scanf("%i", &nums[i]);
        sum = sum + nums[i];
    }
    int average = sum / len;
    printf("average = %i\n", average);
    return 0;
}
