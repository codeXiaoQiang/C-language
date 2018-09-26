#include <stdio.h>
int pow(int, int);
int main()
{
    /*
     * ��дһ������ʵ���� B��n�η�
     * b(n)
     * ��������Ҫ��b(3)�η�
     * b(0) = 1
     * b(1) = b
     * b(2) = b * b
     * b(3) = b * b * b
     *
     * b(0) = 1
     * b(1) = b(0) * b // 1 * b
     * b(2) = b(1) * b // b * b
     * b(3) = b(2) * b // b * b * b
     *
     * ����: b(n) = b(n-1) * b;
     *      b(3) = b(3-1) * b;
     *      b(3) = b(2) * b;
     *
     * 3(3) = 3 * 3 * 3 = 27
     */

    int res = pow(3, 3);
    printf("res = %i\n", res);
    return 0;
}
// base�ʹ�����b
int pow(int base, int n){
    if(n == 0){
        return 1;
    }else{
        return pow(base, n-1) * base;
    }
}

