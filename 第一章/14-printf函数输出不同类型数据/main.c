#include <stdio.h>

int main()
{
    /*
     * 1.printf作用:
     * 把指定的数据输出到屏幕上
     * 2.printf格式:
     * printf("输出的内容");
     * printf("格式化字符串", 输出列表项);
     * 3.格式化字符串格式:
     * %[标志][输出宽度][.精度][长度]类型
     */
//    printf("hello lnj\n");
//    int num = 998;
//    printf("num = %i\n", num);
    // 输出整型常量和变量
    int num = 666;
//    printf("%i\n", num);
//    printf("%i\n", 777);
//    printf("%d\n", num);
//    printf("%d\n", 777);

    // 输出实型常量和变量
    float fValue = 1.11F;
    double dValue = 2.22;
//    printf("%f\n", fValue);
//    printf("%lf\n", dValue);
//    printf("%f\n", 3.33F);
//    printf("%lf\n", 4.44);

    // 输出字符型常量和变量
    char ch = 'a';
    printf("%c\n", ch);
    printf("%c\n", 'b');
    return 0;
}
