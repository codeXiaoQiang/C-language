#include <stdio.h>

int main()
{
    /*
     * while(条件表达式){
     *   被控制的语句;
     * }
     * 特点: 会先判断条件是否满足, 满足就执行{}中的代码
     *
     * do{
     *  被控制的语句;
     * }while(条件表达式);
     * 特点: 不会像判断条件是否满足, 会先执行一次{}中的代码, 然后再判断条件
     */

    // while和dowhile的区别:
    // while会先判断条件再执行循环体
    // dowhile会先执行循环体再判断条件
//    while(0){
//        printf("被控制的语句\n");
//    }

//    do{
//        printf("被控制的语句\n");
//    }while (0);

    // 在大部分的情况下while和dowhile是可以互换的
    // 在企业开发中如果能够互换, 一般我们会使用while
//    int num = 1;
//    while(num <=5){
//        printf("num = %i\n", num);
//        num++;
//    }

//    int num = 1;
//    do{
//        printf("num = %i\n", num);
//        num++;
//    }while(num <=5);

    // dowhile的应用场景
    // 验证

    // 1.定义变量保存用户输入的数据
    int num = -1;
    // 4.排除非法数据
//    if(num < 1 || num > 3){
//        printf("非法数字\n");
//    }else{
//        printf("输入的数据是%i\n", num);
//    }

    // 1.编写循环的固定格式
    // 2.将需要重复执行的代码放到{}中
    // 3.确定循环结束条件
//    while(num < 1 || num > 3){
//        // 2.提示用户如何输入
//        printf("请输入一个1~3的整数, 以回车结束\n");
//        // 3.接收用户输入的判断
//        scanf("%i", &num);
//    }

    do{
        // 2.提示用户如何输入
        printf("请输入一个1~3的整数, 以回车结束\n");
        // 3.接收用户输入的判断
        scanf("%i", &num);
    }while(num < 1 || num > 3);
    printf("输入的数据是%i\n", num);
    return 0;
}
