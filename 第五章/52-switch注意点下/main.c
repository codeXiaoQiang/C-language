#include <stdio.h>

int main()
{
    // 1.case的穿透问题
    // 在switch中, 只要有一个case被匹配了, 其它的case和default都会失效
    // break在switch中的作用, 就是跳出switch语句(结束当前的switch语句)
    // 如果default是写在最后, 那么default后面的break可以省略
//    int day = 1;
//    switch(day){
//    case 1:
//        printf("星期一\n");
//        break;
//    case 2:
//        printf("星期二\n");
////        break;
//    default:
//        printf("OTHER\n");
////        break; // 这里的break是可以省略的
//    }

    // 2.default书写的位置, 可以随便写
    // 无论default是否是写在switch语句的最后, 都会最后执行
    // 如果default不是写在最后的, 那么break不能省略, 省略就会发生穿透问题
    // 记住一点: 永远把default写在最后
//    int day = 3;
//    switch(day){
//    case 1:
//        printf("星期一\n");
//        break;
//    default:
//        printf("OTHER\n");
////        break;
//    case 2:
//        printf("星期二\n");
//        break;
//    }

    // 3.switch后面的()中只能表达式/变量/常量, 并且必须是整型或者能够被提升为整型的
//    int num = 1;
//    switch(num){ // 放一个变量
//    switch(2){ // 放一个常量
//    switch(1 + 1){ // 放一个表达式
//    switch(1.1){ // 会报错, 小数不能提升为整型
    // 不会报错, char类型可以提升为int类型
    // char类型底层的本质存储的是ASCII码, 而ASCII码就是整型
//    switch('a'){
//    case 1:
//        printf("A\n");
//        break;
//    case 2:
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

    // 4.switch的case后面只能放常量和表达式, 并且必须是整型或者能够被提升为整型的
//    int num = 1;
//    switch(2){
//    case 1: //常量
////    case num: // 变量, 会报错
//        printf("A\n");
//        break;
//    case 1 + 1: // 表达式
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

    // 5.switch的case后面的值不能重复
//    int num = 1;
//    switch(2){
//    case 2:
//        printf("A\n");
//        break;
////    case 1: // 会报错
//    case 1 + 1: // 会报错
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

    // 6.switch的case后面不能定义变量
    // 如果要在case后面定义变量, 必须在case后面加上{}
    switch(1){
    case 1:{
        int num = 666; // 会报错
        printf("A\n");
        break;
    }
    case 2:
        printf("B\n");
        break;
    default:
        printf("Other\n");
    }
    return 0;
}
