#include <stdio.h>

int main()
{
    // 2.让用户输入1~7的数, 然后根据用户输入输出是星期几

    // 1.定义变量保存用户输入的数据
    int day = -1;
    // 2.提示用户如何输入数据
    printf("请输入一个1~7的数字, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i", &day);
    // 4.判断非法输出
    /*
    if(day < 1 || day > 7){ // day = 8
        printf("回到火星\n"); // 打印
    }else{
        // 5.根据输入数据输出结果
        // U(YOU)SB
        if(1 == day){ // 1
            printf("星期一\n");
        }else if(2 == day){
            printf("星期二\n");
        }else if(3 == day){
            printf("星期三\n");
        }else if(4 == day){
            printf("星期四\n");
        }else if(5 == day){
            printf("星期五\n");
        }else if(6 == day){
            printf("星期六\n");
        }else{
            printf("星期日\n");
        }
    }
    */

    if(day < 1 || day > 7){ // day = 8
        printf("回到火星\n"); // 打印
    }else if(1 == day){ // 1
        printf("星期一\n");
    }else if(2 == day){
        printf("星期二\n");
    }else if(3 == day){
        printf("星期三\n");
    }else if(4 == day){
        printf("星期四\n");
    }else if(5 == day){
        printf("星期五\n");
    }else if(6 == day){
        printf("星期六\n");
    }else{
        printf("星期日\n");
    }
    return 0;
}
