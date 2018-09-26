#include <stdio.h>

//// 没有返回值, 没有形参的函数
//void test1(){
//    printf("test1\n");
//}
//// 没有返回值, 有形参的函数
//void test2(int age){
//    printf("age = %i\n", age);
//}
//// 有返回值, 没有形参的函数
//int test3(){
//    return 998;
//}
//// 有返回值, 有形参的函数
//int sum(int a, int b){
//    return a + b;
//}

//test4(){
//    return 6;
//}
//// 如果没有编写返回值类型, 默认就是int
//test5(){
//    return 6.6; // double
//}

int test6(){
    return 3.14;
}
int main()
{
    /*
     * 函数分类:
     * 没有返回值, 没有形参的函数
     * 没有返回值, 有形参的函数
     * 有返回值, 没有形参的函数
     * 有返回值, 有形参的函数
     *
     * 注意点:
     * 1.如果没有写函数的返回值类型, 默认就是int类型
     * 2.如果函数的返回值类型和实际返回的类型不同, 那么会隐式(自动)转换为返回值类型
     */
//    test1();
//    test2(666);
//    int res = test3();
//    printf("res = %i\n", res);
//    int res2 = sum(10, 20);
//    printf("res2 = %i\n", res2);

//    int res = test4();
//    printf("res = %i\n", res);

//    int res2 = test5();
//    printf("res2 = %i\n", res2);
//    printf("res2 = %lf\n", res2);



    int res = test6();
    printf("res = %i\n", res);
    printf("res = %lf\n", res);
    return 0;
}
