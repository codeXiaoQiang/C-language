#include <stdio.h>
int sum(int num1, int num2);
int minus(int num1, int num2);
int test(int num1, int num2, int (*funP)(int, int));
int main()
{
    // 需求: 要求一个函数既可以计算两个变量的和, 也可以计算两个变量的差
    // 指向函数的指针的一个应用场景
    int res1 = sum(10, 20);
    printf("res1 = %i\n", res1);

    int res2 = minus(10, 20);
    printf("res2 = %i\n", res2);

    /*
    int (*funP)(int, int);
    funP = &sum;
    int res3 = funP(10, 20);
    printf("res3 = %i\n", res3);

    funP = &minus;
    int res4 = funP(10, 20);
    printf("res4 = %i\n", res4);
    */

    int res3 = test(10, 20, sum);
    printf("res3 = %i\n", res3);

    int res4 = test(10, 20, minus);
    printf("res4 = %i\n", res4);
    return 0;
}
int test(int num1, int num2, int (*funP)(int, int)){
    return funP(num1, num2);
}

int sum(int num1, int num2){
    return num1 + num2;
}
int minus(int num1, int num2){
    return num1 - num2;
}
