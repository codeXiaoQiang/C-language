
#include <stdio.h>

int main()
{
    // 1.指针只能保存地址, 不能保存其它的值
//    int *p = 666; // 企业开发千万不要这样写
//    int *p = 3.14;  // 企业开发千万不要这样写
//    float num = 3.14;
//    int *p = &num; // 正确

    // 2.一个变量可以被多个指针指向
//    int num = 9;
//    int *p1;
//    int *p2;
//    p1 = &num;
//    p2 = &num;

////    *p1 = 668;
//    *p2 = 668;
//    printf("%i\n", *p1);
//    printf("%i\n", *p2);

    // 3.指针的指向可以改变
//    int num = 9;
//    int *p;
//    p = &num;
//    int value = 555;
//    p = &value;

//    printf("%i\n", *p); // 555

    // 4.定义指针变量时前面的数据类型, 必须和将来要保存的变量前面的数据类型一致
    int num = 6;
//    int *p;
    double *p;
    p = &num;

    return 0;
}
