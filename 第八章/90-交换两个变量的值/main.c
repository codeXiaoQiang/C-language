#include <stdio.h>

int main()
{
    /*
     * ����: ��������������ֵ
     *
     * int a = 10; int b = 20;
     */

    int a = 10;
    int b = 20;
    printf("����֮ǰa = %i, b = %i\n", a, b);
//    int temp = a;
//    a = b;
//    b = temp;
//    printf("����֮��a = %i, b = %i\n", a, b);

//    a = a + b; // a = 10 + 20; a = 30;
//    b = a - b; // b = 30 - 20; b = 10;
//    a = a - b; // a = 30 - 10; a = 20;
//    printf("����֮��a = %i, b = %i\n", a, b);

//    a = a ^ b;
//    b = a ^ b; // b = a ^ (b ^ b);  b = 10;
//    a = a ^ b; // a = (a ^ a) ^ b ; a = 20;

     b = a ^ b;
     a = a ^ b; // a = a ^ a ^ b; a = b;  a = 20;
     b = a ^ b; // b = a ^ b ^ b; b = a;  a = 10;
    printf("����֮��a = %i, b = %i\n", a, b);
    return 0;
}
