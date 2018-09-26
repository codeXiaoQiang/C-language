#include <stdio.h>

int main()
{
    /*
     * 类型说明符
     * 类型说明符一般都是用于修饰int类型的
     *
     * 1.说明长度的
     * short
     * long
     * long long
     * ------------------------------------
     * char 1个字节  -2^7~2^7-1  -128~127
     * short int 2个字节 -2^15~2^15-1
     * int  4个字节  -2^31~2^31-1
     * long int:
     * 如果在32位编译器中, long int 占用4个字节
     * 如果在64位编译器中, long int 占用8个字节
     *
     * long long int 8个字节 -2^63~2^63-1
     * 注意点:
     * 1.如果存储的数据超出了类型对应的取值范围, 那么就会导致存储的数据不对
     * 2.由于内存非常有限, 所以在编写程序的时候, 尽量合理的定义变量
     */
//    char ch1 = 127;
//    printf("ch1 = %i\n", ch1);
//    char ch2 = 128; // 存储的数据超出了范围
//    printf("ch1 = %i\n", ch2);  // 取出的数据和存储的数据不一致

//    int num = 12345678901;
//    printf("num = %i\n", num);

//    int num1 = 6; //0000 0000 0000 0000 0000 0000 0000 0110
//    long long int num2 = 12345678901;
//    // 注意点: C语言不看怎么存, 只看怎么取
//    // %i是按照int来取,  %lli按照long long int来取
//    printf("num = %lli\n", num2);

//    char ch;
//    short int num1;
//    int num2;
//    long int num3;
//    long long int num4;
//    printf("ch = %i\n", sizeof(ch));
//    printf("short = %i\n", sizeof(num1));
//    printf("int = %i\n", sizeof(num2));
//    printf("long = %i\n", sizeof(num3));
//    printf("long long = %i\n", sizeof(num4));


    // 由于说明长度的类型说明符一般都是用于说明int类型的, 所以在使用的时候可以省略int
    // short --> %hi,  long --> %li,  long long --> %lli
    short num1 = 123; // short == short int
    printf("num1 = %hi\n", num1);
    long num2 = 123; // long  == long int
    printf("num2 = %li\n", num2);
    long long num3 = 123; // long long  == long long int
    printf("num3 = %lli\n", num3);
    return 0;
}
