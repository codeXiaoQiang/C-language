#include <stdio.h>
int test();
int main()
{
    /*
     * 递归函数:
     * 自己搞自己
     * 递归可以实现循环的功能, 但是递归的性能比循环差很多
     */
    /*
//    // 1.定义变量保存用户输入的数据
//    int num = -1;
//    do{
//        // 2.提醒用户如何输入数据
//        printf("请输入一个正整数, 以回车结束\n");
//        // 3.接收用户输入的数据
//        scanf("%i", &num);
//    }while(num < 0);
    */

    int res = test();
    printf("res = %i\n", res);
    return 0;
}
// 1.定义一个函数, 用于用户校验
int test(){
    // 1.定义变量保存用户输入的数据
    int num = -1;
    // 2.提醒用户如何输入数据
    printf("请输入一个正整数, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i", &num);
    // 4.判断用户输入的时候是合法数据
    if(num < 0){
        // 用户输入的数据不合法
         return test();
    }
    return num;
}
