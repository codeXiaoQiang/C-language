#include <stdio.h>

// 没有参数的函数
void test(){
    printf("test\n");
}
// 有参数的函数
int sum(int a, int b){
    return a + b;
}
void say(int age){
    printf("age = %i\n", age);
}
char test2(){
    return 'a';
}
float test3(){
    return 3.14;
}
int main()
{
    // 1.函数可以有参数, 也可以没有参数
    // 2.函数的参数可以是零个或多个
    test();
    int res = sum(1, 1);
    printf("res = %i\n", res);
    say(18);
    // 3.函数可以有返回值, 也可以没有返回值
    // 如果函数没有返回值, 那么返回值类型写void就可以了
    // 4.函数的返回值类型可以是所有C语言类型
    printf("test2 = %c\n", test2());
    printf("test3 = %f\n", test3());
    return 0;
}
