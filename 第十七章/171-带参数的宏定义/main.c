#include <stdio.h>

//#define PF(a) a*a
//#define PF(a) (a)*(a)
//#define JF(a) (a)+(a) // ������
#define JF(a) ((a)+(a))
int main()
{
    /*
     * �������ĺ궨���ע���:
     * 1.���ֵ��ÿ����������Ҫ����()
     * 2.���ֵ�Ľ��Ҳ��Ҫ����()
     */
    int num = 10;
    /*
    // int res = PF(num);
    // int res = a*a;
    // int res = num*num;
    // int res = 10*10;
//    int res = PF(num);
    // ---------------------
    */
    /*
    // int res = PF(2+2);
    // int res = a*a;
    // int res = 2+2*2+2;
    // int res = 2+4+2; --> 8
    // ---------------------

    // int res = PF(num);
    // int res = PF(2+2);
    // int res = (a)*(a);
    // int res = (2+2)*(2+2);
    // int res = (4)*(4);
    */

    // int res = JF(2);
    // int res = (a)+(a);
    // int res = (2)+(2);
//    int res = JF(2);

    // int res = JF(2 + 2);
    // int res = (a)+(a);
    // int res = (2 + 2)+(2 + 2);
    // int res = (4)+(4);
//    int res = JF(2 + 2);

    //  int res = JF(5 + 5) / JF(2 + 2);
    //  int res = (a)+(a) / (a)+(a);
    //  int res = (5 + 5)+(5 + 5) / (2 + 2)+(2 + 2);
    //  int res = (10)+(10) / (4)+(4);
    //  int res = (10)+2+(4);
    //  ---------------------

    // int res = JF(5 + 5) / JF(2 + 2);
    // int res = ((a)+(a)) / ((a)+(a));
    // int res = ((5 + 5)+(5 + 5)) / ((2 + 2)+(2 + 2));
    // int res = ((10)+(10)) / ((4)+(4));
    // int res = (20) / (8);
    int res = JF(5 + 5) / JF(2 + 2);
    printf("res = %i\n", res);
    return 0;
}
