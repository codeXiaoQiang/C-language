#include <stdio.h>

int main()
{
    /*
     * 需求: 1 .. n的和
     * 1 + 2 + 3 + 4 + 5
   0 + 1
     * 1 + 2
     *     3 + 3
     *         6 + 4
     *             10 + 5
     * 规律:
     * 1.每一次都是上一次的和加上当前的一个数
     * 2.当前加上的数是一个递增的数
     */
    // 定义一个变量保存用户输入的n
    int n = 0;
    // 提示用户如何输入
    printf("请输入一个正整数, 以回车结束\n");
    // 接收用户输入的数据
    scanf("%i", &n);
    // 1.定义一个变量保存每次相加的和
    int sum = 0;
    // 2.定义一个变量保存每次加上的数
    int num = 1;
    // 3.用上一次的和加上当前的数
    /*
    sum = sum + num; // sum = 0 + 1
    num++; // 2
    sum = sum + num; // sum = 1 + 2
    num++; // 3
    sum = sum + num; // sum = 3 + 3
    num++; // 4
    sum = sum + num; // sum = 6 + 4
    num++; // 5
    sum = sum + num; // sum = 10 + 5
    num++; // 6

//    int res = 1 + 2 + 3 + 4 + 5;
//    printf("res = %i\n", res);
    */

    // 1.编写循环的固定格式
    // 2.将重复执行的代码拷贝到循环体中
    // 这里使用了编程开发中的一种思想: 累加思想
    // 累加实现, 就是定义变量记录每次的和
    while(num <= n){
        sum = sum + num;
        num++;
    }
    printf("sum = %i\n", sum);
    return 0;
}
