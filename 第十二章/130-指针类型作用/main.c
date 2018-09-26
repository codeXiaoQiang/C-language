#include <stdio.h>

int main()
{
    /*
     * 指针为什么要有类型?
     * 由于指针变量指向的是某一个变量占用存储空间的首地址
     * 所以在获取指向变量中存储数据的时候, 指针是不知道要获取多少个字节的数据的
     * 所以指针变量的数据类型的作用, 就是告诉指针, 在获取指向变量的数据的时, 需要获取几个字节的数据
     *
     * 无论是什么类型的指针变量在相同的编译器下占用的内容都相同
     * 32位编译器下4个字节
     * 64位编译器下8个字节
     * int *p; // 代表告诉编译器, 将来获取p指向的那个变量的数据的时候, 需要获取4个字节的数据
     */
    /*
    int num;
    num = 6; // 0000 0000 0000 0000 0000 0000 0000 0110
    char ch;
    ch = 'a'; // 'a' --> ASCII码 --> 97 --> 0110 0001
    int *p;
    p = &ch;
    printf("*p = %i\n", *p);
    */

    int num;
    num = 666; //0000 0000 0000 0000 0000 0010 1001 1010
//    int *p;
    char *p;
    p = &num;
    // 1001 1010
    printf("*p = %i\n", *p); // int = 666, char = -102
    printf("%i\n", 0b10011010);
    return 0;
}
