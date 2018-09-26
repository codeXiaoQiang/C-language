#include <stdio.h>
//enum Gender{
//    KGenderMale,
//    KGenderFemale,
//};
int main()
{
    /*
     * 枚举类型的作用域:
     * 和结构体类型的作用域一样, 和变量的作用域一样
     *
     * 枚举类型变量的多种定义方式
     * 和结构体类型的多种定义方式一样
     */
    // 1.定义了一个枚举类型
//    {
//        enum Gender{
//            KGenderMale,
//            KGenderFemale,
//        };
//    }
//    printf("KGenderMale = %i\n", KGenderMale);


    // 2.多种定义方式
    // 2.1先定义枚举类型, 再定义枚举变量
//    enum Gender{
//        KGenderMale,
//        KGenderFemale,
//    };
//    enum Gender g1;

    // 2.2定义枚举类型的同时, 定义枚举变量
//    enum Gender{
//        KGenderMale,
//        KGenderFemale,
//    } g2;

    // 2.3定义枚举类型的同时,定义枚举变量 ,并且省略枚举类型名称
    enum{
        KGenderMale,
        KGenderFemale,
    } g3;

    return 0;
}
//void test(){
//    printf("KGenderFemale = %i\n", KGenderFemale);
//}
