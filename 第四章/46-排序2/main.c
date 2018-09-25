#include <stdio.h>

int main()
{
    /*
     * 需求:
     * 要求用户输入四个整数, 排序之后输出
     * 例如: 用户输入的是 18,2,16  --> 2,16,18
     */
    // 1.定义是个变量, 保存用户输入的数据
    int a, b, c, d;
    a = -1, b = -1, c = -1, d = -1;
    // 2.提示用户如何输入数据
    printf("请输入四个整数, 用逗号隔开, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i,%i,%i,%i", &a, &b, &c, &d);
    // 4.进行第一轮排序
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(c > d){
        int temp = c;
        c = d;
        d = temp;
    }
    // 5.进行第二轮排序
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    // 6.进行第三轮的排序
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    // 7.输出结果
    printf("%i,%i,%i,%i\n", a, b, c, d);
    return 0;
}
