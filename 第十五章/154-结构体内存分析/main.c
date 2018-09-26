#include <stdio.h>

int main()
{
    /*
     * 结构体内存分析
     * 注意点:
     * 给整个结构体变量分配存储空间和数组一样, 从内存地址比较大的开始分配
     * 给结构体变量中的属性分配存储空间也和数组一样, 从所占用内存地址比较小的开始分配
     *
     * 注意点:
     * 和数组不同的是, 数组名保存的就是数组首元素的地址
     * 而结构体变量名, 保存的不是结构体首属性的地址
     */
    /*
    struct Person{
        int age;
        int score;
    };
    struct Person p;
    // 看上去, 好像是所有属性类型的总和
    printf("sizeof = %i\n", sizeof(p)); // 8
    // 数组名称保持的就是数组首元素的地址
    // 结构体的名称是否保存的也是第一个属性的地址
    // 通过观察得出一个结论: 结构体变量的名称并没有保存结构体首属性的地址
    printf("p = %p\n", p); // p = 00000077
    printf("&p = %p\n", &p); // &p = 0060FEA8
    printf("&p.age = %p\n", &p.age); // &p.age = 0060FEA8
    printf("&p.score = %p\n", &p.score); // &p.score = 0060FEAC
    */

    struct Person{
        int age; // 4
//        char ch; // 1
        double score; // 8
        char ch;
    };
    struct Person p;
    // 结构体在分配内存的时候, 会做一个内存对齐的操作
    // 会先获取所有属性中占用内存最大的属性的字节
    // 然后再开辟最大属性字节的内存给第一个属性, 如果分配给第一个属性之后还能继续分配给第二个属性, 那么就继续分配
    // 如果分配给第一个属性之后, 剩余的内存不够分配给第二个属性了, 那么会再次开辟最大属性直接的内存, 再次分配
    // 一次类推
    printf("sizeof = %i\n", sizeof(p)); // 16
    return 0;
}
