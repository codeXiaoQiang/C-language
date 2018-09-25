#include <stdio.h>

int main()
{
    // 1.让用户输入三个整数, 找出最大值然后输出, 用if实现
    // 1.定义变量保存用户输入的数据
    int a, b, c;
    a = -1, b = -1, c = -1;
    // 2.提醒用户如何输入数据
    printf("请输入三个整数, 用逗号隔开, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i,%i,%i", &a, &b, &c); // 18,10, 22
    /*
    // 4.先比较两个数, 取出最大值
    int max = -1;
    if(a > b){ // 18 > 10
        max = a; // max = 18
    }else{
        max = b;
    }
    // 5.用刚才比较的最大值和剩余的数进行比较
    if(max > c){ // 18 > 22
        max = max;
    }else{
        max = c; // max = 22
    }
    */

    /*
    int max = -1;
    if(a > b){ // 18 > 10
        if(a > c){ // 18 > 22
            max = a;
        }else{
            max = c; // max = 22
        }
    }else{
        if(b > c){
            max = b;
        }else{
            max = c;
        }
    }
    */

    int max = -1;
    if(a > b && a > c){
        max = a;
    }else if(b > a && b > c){
        max = b;
    }else if(c > a && c > b){
        max = c;
    }
    // 6.输出结果
    printf("max = %i\n",max);

    // 2.让用户输入1~7的数, 然后根据用户输入输出是星期几
    return 0;
}

