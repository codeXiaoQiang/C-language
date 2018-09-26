#include <stdio.h>
//void change(int value);
void change(int *value);
int main()
{
    // 定义一个函数, 要求能够在函数中修改传入变量的值
    int num = 6;
    printf("调用之前:num = %i\n", num);
//    change(num);
    change(&num);
    printf("调用之后:num = %i\n", num);
    return 0;
}
//void change(int value){
// 结论: 如果函数的形参是数组或者是指针,
// 那么就可以在函数中修改外界传入变量的值
void change(int *value){ // 相当于 int *value = &num;
    *value = 888;
}
