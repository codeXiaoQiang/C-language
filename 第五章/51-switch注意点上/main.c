#include <stdio.h>

int main()
{
    /*
     * 需求:
     * 要求用户输入一个0~100的分数, 根据输入的分数输出对应的等级
     * A : 90~100   99/10 = 9 100/10 = 10
     * B : 80~89    87/10 = 8
     * C : 70~79
     * D : 60~69
     * E : 60分以下
     */
    // 1.定义变量保存用户输入的数据
    int score = -1;
    // 2.提醒老师如何录入分数
    printf("请输入一个0~100的分数, 以回车结束\n");
    // 3.接收用户输入的数据
    scanf("%i", &score);
    // 4.根据用户输入判断对应的等级
    // 4.1排除非法数据
//    if(score < 0 || score > 100){
//        printf("你是校长的儿子吧\n");
//    }else if(score >= 90 && score <= 100){
//        printf("A\n");
//    }else if(score >= 80 && score <= 89){
//        printf("B\n");
//    }else if(score >= 70 && score <= 79){
//        printf("C\n");
//    }else if(score >= 60 && score <= 69){
//        printf("D\n");
//    }else{
//        printf("E\n");
//    }

    switch(score/10){
    case 10:
//        printf("A\n");
//        break;
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5:
//        printf("E\n");
//        break;
    case 4:
//        printf("E\n");
//        break;
    case 3:
//        printf("E\n");
//        break;
    case 2:
//        printf("E\n");
//        break;
    case 1:
//        printf("E\n");
//        break;
    case 0:
        printf("E\n");
        break;
    default:
        printf("你是校长的儿子吧\n");
    }
    return 0;
}
