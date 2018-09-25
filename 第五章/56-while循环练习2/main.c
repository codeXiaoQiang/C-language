#include <stdio.h>

int main()
{
    /*
     * 需求: 要求统计1~n中有多少个数能被7整除
     */
    // 定义变量记录能被7整除的数的个数
    int count = 0;
    // 1.定义变量保存用户输入的数据
    int n = -1; // 5
    // 2.提示用户如何输入
    printf("请输入一个正整数, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i", &n);
    // 4.拿到1~n中的每一个数
    int num = 1;
    while(num <= n){ // 6 <= 5
//        printf("num = %i\n", num); // 1 2 3 4 5
        // 这里使用了编程开发中的一种思想: 计数器实现
        if(0 == (num % 7)){
            count++;
        }
        num++;
    }
    printf("count = %i\n", count);
    return 0;
}
