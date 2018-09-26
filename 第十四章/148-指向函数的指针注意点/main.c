#include <stdio.h>
void say();
int sum(int num1, int num2);
int minus(int num1, int num2);
int demo(int num1, int num2, int (*funcP)(int, int));
int main()
{
    /*
     * 1.如何定义一个指向函数的指针
     * 1.1将函数的什么拷贝过来
     * 1.2在函数的返回值和函数名称中间添加一个颗*
     * 1.3修改函数的名称
     * 1.4将*和函数名称用括号括起来
     *
     * 2.函数的名称就是函数的地址
     */
    /*
    void (*funcP)();
    printf("funcP = %i\n", sizeof(funcP));
    funcP = &say;
    (*funcP)();
    */

    /*
    int (*funcP)(int, int);
//    funcP = &sum;
    funcP = sum;
//    printf("&sum = %p\n", &sum);
//    printf("sum = %p\n", sum);

//    (*funcP)();
//    sum();
    int res = funcP(10, 20); // int res = 30;
    printf("res = %i\n", res);

    funcP = &minus;
    int res2 = funcP(10, 20); // int res = -10;
    printf("res2 = %i\n", res2);
    */

    int value = demo(10, 20, &sum); // 30;
    printf("value = %i\n", value);

    int value2 = demo(20, 30, &minus); // -10;
    printf("value2 = %i\n", value2);
    return 0;
}
// 注意点: 指向函数的指针,作为函数的形参时, 指针变量的名称, 就是形参的名称
// 如果指向函数的指针作为函数的参数, 那么这个可以称之为回调函数
// 这里相当于, 给demo函数传入了一个sum函数或者minus函数
// 然后又在demo函数中调用了sum函数或者minus函数
int demo(int num1, int num2, int (*funcP)(int, int)){
    int res = (*funcP)(num1, num2); // int res = 30; int res = -10;
    return res; //return 30; return -10;
}
/*
void say(){
    printf("hello wolrd\n");
}
*/
int sum(int num1, int num2){
    return num1 + num2;
}
int minus(int num1, int num2){
    return num1 - num2;
}

/*
 * 1.要求从键盘输入一个字符串, 并且字符串中可以出现空格
 * 2.将用户输入的字符串, 单词的首字母变成大写,    单词用空格划分
 * hello world;  --> Hello World;
 * 3.将用户输入的字符串, 单词的首字母编程小写,    单词用空格划分
 * Hello World;  --> hello world;
 * 4.要求定义一个函数, 既可以处理将首字母变为大写, 也可以处理将首字母变为小写
 * 需要用到指向函数的指针
 */
