#include <stdio.h>
//int sum(int num1, int num2);
void test(int num1, int num2, int *res1, int *res2, int *res3, int *res4);
int main()
{
    // 需求: 要求定义一个函数, 可以同时返回两个变量的和,差,积,商
    // 需要大家知道的是: 在C语言中, 默认情况下一个函数只能返回一个值
    //                 如果想让某一个函数同时返回多个值, 可以借助指针来实现
    int a = 10;
    int b = 20;
//    int res = sum(a, b);
//    printf("res = %i\n", res);

    int d, e, f, g;
    test(a, b, &d, &e, &f, &g);
    printf("和 = %i\n", d);
    printf("差 = %i\n", e);
    printf("积 = %i\n", f);
    printf("商 = %i\n", g);
    return 0;
//    printf("return 后面的语句\n");
}

/**
 * @brief test 可以同时返回两个变量的和,差,积,商
 * @param num1 参与运算的第一个变量
 * @param num2 参与运算的第二个变量
 * @param res1 和
 * @param res2 差
 * @param res3 积
 * @param res4 商
 */
void test(int num1, int num2, int *res1, int *res2, int *res3, int *res4){
    *res1 = num1 + num2;
    *res2 = num1 - num2;
    *res3 = num1 * num2;
    *res4 = num1 / num2;
}

/*
int sum(int num1, int num2){
    // 注意点:
    // return的作用是用于结束当前函数
    // 只要函数执行到return, 就会立刻停止往下执行
    // 所以return 后面不可以编写任何语句, 因为执行不到
    return num1 + num2;
//    return num1 - num2;
//    return num1 * num2;
//    return num1 / num2;
}
*/
