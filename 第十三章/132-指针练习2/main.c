
#include <stdio.h>
void swap(int *num1, int *num2);

int main()
{
    // ����: Ҫ������һ������, �ں����н������������ֵ
    int a = 10;
    int b = 20;
    printf("a = %i, b = %i\n", a, b);
    swap(&a, &b);
    printf("a = %i, b = %i\n", a, b);
    return 0;
}
// ��������������Ϊ�β�, �ں������޸��β�, ����Ӱ�쵽�������ʵ��
void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
