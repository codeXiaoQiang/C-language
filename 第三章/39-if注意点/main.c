#include <stdio.h>

int main()
{
    // 1.if不用写分号
    // 分号也是一条语句, 分号是一条空语句
//    int age = 17;
//    if(age >= 18);{
//        printf("开网卡\n");
//    }

    // 2.if可以省略大括号
    // 如果if省略大括号, 那么只有紧随其后的那条语句受到控制
//    int age = 17;
//    if(age >= 18)
//        printf("开网卡\n");
//        printf("买饮料\n");

    // 3.{}可以单独出现, {}出现的时候代表是一个代码块
//    {
//        int age = 88;
////        printf("age = %i\n", age);
//    }
//    printf("age = %i\n", age);

    // 4.如果if省略了大括号, 那么不能再后面直接定义变量
    // 我们称之为作用域混乱
    // 从表面上, num的作用域是从定义的那一行开始, 直到遇到}结束或者return为止
    // 但是从实际上而言, num只有if的条件满足才会执行, 所以两者冲突
//    int age = 18;
//    if(age >= 18)
//        int num = 666;
//        printf("开网卡\n");

    // 5.除了if以外elseif还有else也可以省略大括号
    // 省略大括号之后的特点和if省略之后一样
    // 只有紧随其后的语句受到控制
    // 也不可以直接定义变量
//    int age = 41;
//    if(age >= 40)
//        printf("40\n");
//    else if(age >= 30)
//        printf("30\n");
//    else
//        printf("other\n");
//        printf("40 2222\n");

    // 6.任何数值都有真假性
//    if(0){
//        printf("abc");
//    }

    /*
    int age = 3;
//    if(age = 18){
//        printf("被执行了\n");
//    }
    if(18 == age){ // 在企业开发中如果要判断是否相等, 建议把常量写在起那么, 把变量写在后面
        printf("被执行了\n");
    }
    */
    /*
    double num = 3.14;
    // 在企业开发中一定不要使用==来判断两个小数是否相等
    // 因为小数可能出现精度问题
    // 如果在企业开发中要判断两个小数是否相等, 那么建议使用 >= <=
    if(3.14 == num){
        printf("是3.14\n");
    }
    */

    // 6.如果if else省略大括号的时, else会自动匹配距离自己最近的那个if
    // 但是有一个前提条件, 就是这个if没有被其它的else匹配
    // 注意点: 编译器会把if else看做是一个整体
//    if(0)
//    if(1)
//    printf("A\n");
//    else // 和if(1)匹配
//    printf("B\n");
//    else // 和if(0)匹配, 因为if(1)已经被匹配过了
//    if (1)
//    printf("C\n");
//    else // 和if(1)匹配
//    printf("D\n");


//    if(0)
//        if(1)
//        printf("A\n");
//        else if(1) // 和if(1)匹配
//        printf("B\n");
//        else
//        printf("c\n");
//    else // 和if(0)匹配, 因为if(1)已经被匹配过了
//        if (1)
//        printf("D\n");
//        else if(1) // 和if(1)匹配
//        printf("F\n");
//        else
//        printf("G\n");

    // 7.if可以嵌套if
//    if(1){
//        if(0){
//            printf("A\n");
//        }else{
//            printf("B\n");
//        }
//    }else{
//        if(1){
//            printf("C\n");
//        }else{
//            printf("D\n");
//        }
//    }

    // 判断一个数是否是100~200之间的数
    int num = 301;
    if(num >= 100){
        if(num <= 200){
            printf("是100~200之间的数\n");
        }else{
            printf("是一个大于等于100的数, 但是不是100~200之间的数\n");
        }
    }
    return 0;
}

