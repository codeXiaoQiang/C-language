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
    // 4.第一轮比较
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        int temp = a;
        a = c;
        c = temp;
    }
    if(a > d){
        int temp = a;
        a = d;
        d = temp;
    }
    // 5.第二轮比较
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(b > d){
        int temp = b;
        b = d;
        d = temp;
    }
    // 6.第三轮比较
    if(c > d){
        int temp = c;
        c = d;
        d = temp;
    }
    // 7.输出排序后的结果
    printf("%i,%i,%i,%i\n", a, b, c, d);
    return 0;
}
