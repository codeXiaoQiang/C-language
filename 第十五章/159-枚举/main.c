#include <stdio.h>

int main()
{
    /*
     * 枚举?
     * 枚举用于提升代码的阅读性, 一般用于表示几个固定的值
     * 所以还有一个名称, 叫做枚举常量
     *
     * 如果某些变量的取值是固定的, 那么就可以考虑使用枚举来实现
     *
     * 枚举的格式:
     * enum 枚举类型名称{
     *    取值1,
     *    取值2,
     * };
     * 注意点: 和结构体,共用体不同, 枚举是用逗号隔开
     *
     * 规范:
     * 枚举的取值一般以K开头,后面跟上枚举类型名称, 后面再跟上表达的含义
     * K代表这是一个常量
     * 枚举类型名称, 主要是为了有多个枚举的时候, 方便区分
     * 含义, 你想表达的意思
     *
     * 枚举的取值:
     * 默认情况下从0开是取值, 依次递增
     * 也可以手动指定从几开始, 依次递增
     */

    enum Gender{
//        male,
//        female,
//        nan,
//        nv,
//        yao,
        KGenderMale = 9, //0
        KGenderFemale, // 1
                       // 2 ... ...
    };

    printf("KGenderMale = %i\n", KGenderMale);
    printf("KGenderFemale = %i\n", KGenderFemale);

    struct Person{
        char *name; // 姓名
        int age; // 年龄
        enum Gender gender; // 性别
    };
    struct Person p1;
    p1.name = "lnj";
    p1.age = 58;
    p1.gender = KGenderFemale;

    struct Person p2;
    p2.name = "周芷若";
    p2.age = 88;
    p2.gender = KGenderFemale;

    return 0;
}
