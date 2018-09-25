#include <stdio.h>

int main()
{
    /*
     * 要求利用switch实现两个数的简单的计算器
     * + - * / %
     */

    // 1.定义变量保存用户输入的两个整数
    int a, b;
    // 2.定义变量保存用户输入的操作符号
    char ch;
    // 3.提示用户如何输入
    printf("请按照如下格式输入两个整数和需要进行的计算符号\n");
    printf("示例: 1 + 1 or 1 - 1\n");
    // 4.接收用户输入的内容
    scanf("%i %c %i", &a, &ch, &b);
    // 5.判断当前用户要做什么操作
    switch(ch){
    case '+':
        printf("%i %c %i = %i", a, ch, b, a + b);
        break;
    case '-':
        printf("%i %c %i = %i", a, ch, b, a - b);
        break;
    case '*':
        printf("%i %c %i = %i", a, ch, b, a * b);
        break;
    case '/':
        printf("%i %c %i = %i", a, ch, b, a / b);
        break;
    case '%':
        printf("%i %c %i = %i", a, ch, b, a % b);
        break;
    default:
        printf("更多功能请使用付费版本\n");
    }
    // 5.进行对应的操作, 输出结果
    return 0;
}
