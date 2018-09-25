#include <stdio.h>

int main()
{
    /*
     * 类型转换
     * 1.自动类型转换
     * 1.1算数类型转换
     * 1.2赋值类型转换
     * 2.强制类型转换
     */
    /*
    // 1.自动类型转换
    // 1.1算数类型转换
    int num = 10;
    double value = 3.0;
    //           int / double;
    // 在C语言中不同类型的数据, 是不能进行运算的
    // 只有相同类型的数据才能进行运算
    // 当编译器发现不同类型的数据要进行运算时, 会自动将小类型转换为大类型
    // double res = 10 / 3.0;
    // double res = 10.0 / 3.0;
    // 参与运算的是什么类型得到的结果就是什么类型
    double res = num / value;
    printf("res = %lf\n", res);
    */
    /*
    // 1.2赋值类型转换
    int num = 10;
    //              int
    // 当编译器发现等号右边的数据类型和等号左边的数据类型不同时, 会自动将等号右边的类型转换为等号左边的类型
    double value = num;
    printf("value = %lf\n", value);
    */

    /*
    int num = 10;
    double value = 3.0;
    // int res = 10 / 3.0;
    // int res = 10.0 / 3.0;
    // int res = 3.33333;
    // int res = 3;
    // 在整个表达式执行的过程中进行了两次转换
    // 第一次转换是算数运算的时候
    // 第二次转换是赋值的时候
    int res = num / value;
    */

    /*
    // 2.强制类型转换
    int num = 10;
    double value = (double)num;
    printf("value = %lf\n", value);
    */

    // 注意点: 类型转换不会影响原有变量的值
//    int num = 10;
//    double res = num / 3.0;
//    printf("res = %lf\n", res); // 3.3333
//    printf("num = %i\n", num); // 10

//    int num = 10;
//    double value = num;
//    printf("value = %lf\n", value); // 10.0000
//    printf("num = %i\n", num); // 10

    int num = 10;
    double value = (double)num;
    printf("value = %lf\n", value); // 10.0000
    printf("num = %i\n", num); // 10
    return 0;
}
