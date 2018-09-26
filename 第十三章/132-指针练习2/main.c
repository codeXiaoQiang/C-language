
#include <stdio.h>
void swap(int *num1, int *num2);

int main()
{
    // 需求: 要定定义一个函数, 在函数中交换传入变量的值
    int a = 10;
    int b = 20;
    printf("a = %i, b = %i\n", a, b);
    swap(&a, &b);
    printf("a = %i, b = %i\n", a, b);
    return 0;
}
// 基本数据类型作为形参, 在函数内修改形参, 不会影响到函数外的实参
void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
