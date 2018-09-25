#include <stdio.h>

int main()
{
    /*
     * C语言中的第二种选择结构
     * switch选择结构的格式:
     *
     *
     * switch(表达式){
     * case 表达式1: // 相当于else if
     *  被表达式1控制的语句;
     *  break;
     * case 表达式2: // 相当于else if
     *  被表达式2控制的语句;
     *  break;
     * default: // 相当于else
     *  被default控制的语句;
     *  break;
     * }
     *
     * 执行流程:
     * 1.计算switch后面()中表达式的结果
     * 2.利用计算的结果从上至下的和switch后面{}中的case的表达式的值一次比较
     * 3.一旦发现switch表达式的值和case表达式的值相同, 就执行该case后面的语句
     * 4.一旦某个case被执行了, 其它的case就不会执行了
     * 5.如果所有case表达式的值和switch表达式的值都不相等, 那么就执行default后面的语句
     */

    int day = 3;
    switch(day){
    case 1:
        printf("星期一\n");
        break;
    case 2:
        printf("星期二\n");
        break;
    default:
        printf("Other\n");
        break;
    }
    return 0;
}
