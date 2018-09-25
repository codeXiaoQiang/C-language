#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
     1.有两个角色 电脑 / 我
     2.两个角色都可以出拳, 并且都只能出 石头/剪刀/布
     3.如何判断是否是石头/ 剪刀/ 布? 0代表石头/ 1代表剪刀 / 2代表布
     4.电脑的出拳必须随机生成, 用户可以通过键盘录入
     */
    // 1.让电脑出拳
    // 注意点: C语言中的rand函数返回的是一个伪随机数
    // 以下语句在C语言中一般都是一起出现的
    srand(time(NULL)); // 种一个种子
    // 0 % 3 = 0, 1 % 3 = 1, 2 % 3 = 2
    // 9 % 3 = 0, 10 % 3 = 1, 11 % 3 = 2
    int cm = rand() % 3;
//    printf("res = %i\n", res);

    // 2.定义变量保存用户输入的数据
    int user = -1;
    // 3.提示用户如何输入
    printf("0代表石头/ 1代表剪刀 / 2代表布\n");
    printf("请输入一个0~2的值, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i", &user);
    // 4.判断结果
    /*
     * 电脑        用户(输了)     用户(赢了)
     * 0代表石头    1代表剪刀     2代表布
     * 1代表剪刀    2代表布       0代表石头
     * 2代表布      0代表石头     1代表剪刀
     *
     * 输了:  0-1 = -1
     *       1-2 = -1
     *       2-0 = 2
     * 赢了:  0-2 = -2
     *       1-0 = 1
     *       2-1 = 1
     */
    // 排除非法数据
    /*
    if(user < 0 || user > 2){
        printf("还能不能好好的玩耍\n");
    }else if(cm == 0 && user == 1){
        printf("电脑出的是%i, 用户处的是%i, 电脑赢了\n", cm, user);
    }else if(cm == 1 && user == 2){
        printf("电脑出的是%i, 用户处的是%i, 电脑赢了\n", cm, user);
    }else if(cm == 2 && user == 0){
        printf("电脑出的是%i, 用户处的是%i, 电脑赢了\n", cm, user);
    }else if(cm == 0 && user == 2){
        printf("电脑出的是%i, 用户处的是%i, 用户赢了\n", cm, user);
    }else if(cm == 1 && user == 0){
        printf("电脑出的是%i, 用户处的是%i, 用户赢了\n", cm, user);
    }else if(cm == 2 && user == 1){
        printf("电脑出的是%i, 用户处的是%i, 用户赢了\n", cm, user);
    }else{
        printf("电脑出的是%i, 用户处的是%i, 打平手\n", cm, user);
    }
    */

    if(user < 0 || user > 2){
        printf("还能不能好好的玩耍\n");
    }else{
        int res = cm - user;
        if(-1 == res || 2 == res){
            printf("电脑出的是%i, 用户处的是%i, 电脑赢了\n", cm, user);
        }else if(-2 == res || 1 == res){
            printf("电脑出的是%i, 用户处的是%i, 用户赢了\n", cm, user);
        }else{
            printf("电脑出的是%i, 用户处的是%i, 打平手\n", cm, user);
        }
    }

    return 0;
}

