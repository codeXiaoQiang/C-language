
#include <stdio.h>

int main()
{
    /*
     * 指针和字符串
     * 字符串的本质就是数组, 所以指针也可以指向字符串
     * 正式因为如此, 所以定义字符串又多了一种方式
     */

    // 字符串
//    char str1[] = {'l', 'n', 'j', '\0'};
//    char str2[] = "lnj";
//    char *str4 = "lnj";
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);
//    printf("str4 = %s\n", str4);


//    char *str3 = {'l', 'n', 'j', '\0'};
//    printf("str3 = %s\n", str3);

    /*
     * 利用数组和指针定义字符串的区别:
     * 1. 存储的位置不同
     * 如果是通过数组定义的字符串, 那么存储在内存的栈中
     * 如果是通过指针定义的字符串, 那么存储在内存的常量区中
     *
     * 2.由于在内存中存储的位置不一样, 所以特性也不一样
     * 如果是通过数组定义的字符串, 我们是可以手动修改
     * 如果是通过指针定义的字符串, 我们不用手动修改
     *
     * 3.由于在内存中存储的位置不一样, 所以特性也不一样
     * 如果是通过数组定义的字符串, 每次定义都会重新开辟存储空间
     * 如果是通过指针定义的字符串, 重复定义不会重新开辟存储空间
     */

//    char str[] = "lnj";
//    char *str = "lnj";
//    printf("str = %s\n", str);
//    str2[1] = 'T';
//    printf("str = %s\n", str);


//    char str1[] = "lnj";
//    char str2[] = "lnj";
//    printf("str1 = %p\n", str1); // 地址不一样
//    printf("str2 = %p\n", str2);

    char *str1 = "lnj";
    char *str2 = "lnj";
    printf("str1 = %p\n", str1); // 地址一样
    printf("str2 = %p\n", str2);

    return 0;
}
