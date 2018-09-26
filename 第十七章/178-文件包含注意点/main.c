#include <stdio.h>

#define ZS int
int main()
{
    /*
     * typedef 给数据类型起别名
     *
     * 格式:
     * typedef 原来的类型名称 新的类型名称;
     *
     * 注意点:
     * typedef相当于给人起了一个外号, 人还是那个人, 只不过多了一个名称而已
     * 所以typedef不是定义一个新的数据类型, 而是定义一个新的名称而已
     */
    // 1.给系统的类型起别名
    typedef int ZHENGSHU;
    // 2.给别名再起别名
    typedef ZHENGSHU DOUBI;

    int num = 9;
    printf("num = %i\n", num);

    ZHENGSHU value = 666;
    printf("value = %i\n", value);

    DOUBI i = 888;
    printf("i = %i\n", i);

    ZS j = 123;
    printf("j = %i\n", j);
    return 0;
}
