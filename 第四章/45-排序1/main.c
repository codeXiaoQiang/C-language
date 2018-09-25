#include <stdio.h>

int main()
{
    /*
     * 需求:
     * 要求用户输入三个整数, 排除之后输出
     * 例如: 用户输入的是 18,2,16  --> 2,16,18
     */
    // 1.定义变量保存用户输入的数据
    int a, b, c;
    a = -1, b = -1, c = -1;
    // 2.提示用户如何输入数据
    printf("请输入三个整数, 用逗号隔开, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i,%i,%i", &a, &b, &c);
    // 4.排序
    if(a > b && b > c){
        printf("%i,%i,%i", a, b, c);
    }else if(a > c && c > b)
    {
        printf("%i,%i,%i", a, c, b);
    }else if(b > a && a > b)
    {
        printf("%i,%i,%i", b, a, c);
    }else if(b > c && c > a)
    {
        printf("%i,%i,%i", b, c, a);
    }else if(c > a && a > b)
    {
        printf("%i,%i,%i", c, a, b);
    }else if(c > b && b > a)
    {
        printf("%i,%i,%i", c, b, a);
    }
    return 0;
}
