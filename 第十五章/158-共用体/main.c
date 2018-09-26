#include <stdio.h>

int main()
{
    /*
     * 共用体
     *
     * 共用体的格式:
     * union 共用体名称{
     *   数据类型 属性名称;
     *   数据类型 属性名称;
     *   ... ...
     * }
     * 共用体定义的格式和结构体只有关键字不一样, 结构体用struct,共用体用union
     *
     * 共用体特点:
     * 结构体的每个属性都会占用一块单独的内存空间, 而共用体所有的属性都共用同一块存储空间
     * 只要其中一个属性发生了改变, 其它的属性都会受到影响
     *
     * 应用场景:
     * 同一个变量, 在不同的时刻,需要表示不同类型数据的时候, 我们就可以使用共用体
     */

    struct Person{
        int age; // 4
        char ch; // 4
    };
    struct Person p;
    printf("sizeof(p) = %i\n", sizeof(p));

    union Test{
        int age;
        char ch;
    };
    union Test t;
    printf("sizeof(p) = %i\n", sizeof(t));

    t.age = 33;
    printf("t.age = %i\n", t.age); // 33
    t.ch = 'a';
    printf("t.ch = %c\n", t.ch); // a
    printf("t.age = %i\n", t.age); // 97
    return 0;
}
