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
    /*
     * 1.精度格式:
     * %[.精度]类型
     * 2.精度作用:
     * 指定输出小数保留的位数
     * 3.精度其它格式:
     * %[.*]类型
     */
    /*
    float fValue = 1.234567890123456789F;
    double dValue = 1.234567890123456789;
    printf("%f\n", fValue);
    printf("%.2f\n", fValue);
    // 注意点: 单精度的小数, 有效位数只有6-7位, 超出了有效位数之后输出的就是垃圾数据
    //        有效位数是从小数点前面开始计算
    //        1.234567890123456789F  // 1.234567
    //        双精度的小数, 有效位数只有15-16位, 超出了有效位数之后输出的就是垃圾数据
    printf("%.10f\n", fValue);
    printf("%.10f\n", 12345.67123456789F);
    printf("%.10lf\n", dValue);
    */
//    double dValue = 1.234567890123456789;
//    printf("%.*lf\n", 5, dValue);

    char a = 'a';
    short int b = 123;
    int  c = 123;
    long int d = 123;
    long long int e = 123;
    printf("%hhi\n", a);
    printf("%hi\n", b);
    printf("%i\n", c);
    printf("%li\n", d);
    printf("%lli\n", e);
    return 0;
}
