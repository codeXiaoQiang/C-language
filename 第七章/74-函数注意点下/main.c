#include <stdio.h>

void test(){
    printf("test 1111");
}
//void test(){ // 会报重复定义的错误
//    printf("test 22222");
//}
//int test(){ // 会报重复定义的错误
//    printf("test 33333");
//}
//int test(int a, int b){// 会报重复定义的错误
//    printf("test 1111");
//}

//int test1(){
//    int say(){ // 会报错
//        printf("say 321\n");
//    }
//    printf("test1\n");
//}


//void change(int num){ // 这里的num,我们称之为形参
//    num = 666;
//}

//void test(int num){
//    int num = 666;
//    printf("num = %i\n", num);
//}

int main()
{
    /*
    // 1.函数的名称不能相同
    // 1.2.哪怕返回值类型不同, 函数名称也不能相同
    // 1.3.哪怕形参列表不同, 函数名称也不能相同

    // 2.函数不能嵌套定义, 哪怕编译器允许, 也不建议这么干
//    void say(){
//        printf("say 123");
//    }
//    say();

    test1();
//    say();
    */

//    // 3.如果是基本类型的数据作为函数的参数, 那么在函数内修改形参, 不会影响外面实参的值
//    // int char float double
//    int a = 10; // 这里的a我们称之为实参
//    printf("调用change函数前:a = %i\n", a); // 10
//    change(a);
//    printf("调用change函数后:a = %i\n", a); // 10

      // 4.在函数内部不能定义和形参同名的变量



    // 变量之间的赋值都是拷贝
    int a = 10;
    int b = a;
    b = 666;
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    return 0;
}
