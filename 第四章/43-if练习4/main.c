#include <stdio.h>

int main()
{
    // 需求: 要求用户输入一个1~12的数, 判断是什么季节之后输出
    // 3~5春季 6~8夏季 9~11秋季 12~2冬季
    // 1.定义变量保存用户输入的数据
    int month = -1;
    // 2.提示用户如何输入数据
    printf("请输入一个1~12整数, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i", &month);
    // 4.排除非法数据
    // 5.判断输出结果
    /*
    if(month < 1 || month > 12){
        printf("回到火星\n");
    }else if(3 == month || 4 == month || 5 == month){
        printf("春季\n");
    }else if(6 == month || 7 == month || 8 == month){
        printf("夏季\n");
    }else if(9 == month || 10 == month || 11 == month){
        printf("秋季\n");
    }else if(12 == month || 1 == month || 2 == month){
        printf("冬季\n");
    }
    */


    if(month < 1 || month > 12){
        printf("回到火星\n");
    }else if(month >= 3 && month <= 5){
        printf("春季\n");
    }else if(month >=6 && month <= 8){
        printf("夏季\n");
    }else if(month >= 9 && month <= 11){
        printf("秋季\n");
    }else{
        printf("冬季\n");
    }
    return 0;
}

