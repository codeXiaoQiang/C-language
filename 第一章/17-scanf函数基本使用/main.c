#include <stdio.h>

int main()
{
    /*
     * 1.scanf作用:
     * 接收键盘输入的内容
     * 2.scanf格式:
     * scanf("格式化字符串", 地址列表);
     * 3.&取地址符号
     * &变量名称， 可以获取变量对应的内存地址
     */
//    int num;
//    scanf("%i", &num);
//    printf("num = %i\n", num);

//    float fValue;
//    scanf("%f", &fValue);
//    printf("fValue = %f\n", fValue);

//    double dValue;
//    scanf("%lf", &dValue);
//    printf("dValue = %lf\n", dValue);

    char ch;
    scanf("%c", &ch);
    printf("ch = %c\n", ch);
    return 0;
}
