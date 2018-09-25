#include <stdio.h>

int main()
{
    // 1.while循环和if一样, 可以省略大括号
    // while循环和if一样, 省略大括号时, 只能控制紧随其后的那条语句
    // while循环和if一样, 省略大括号时, 不能定义新的变量
    // while循环和if一样, 任何数值都有真假性
//    while(0)
//        printf("被控制的语句\n");
//    printf("不被控制的语句\n");

//    while(0)
//        int num = 666;
//    printf("不被控制的语句\n");

    // 2.while循环和if一样, 不用书写分号
    // while循环和if一样, 分号不能再写()和{}之间
//    while(0);{
//        printf("被控制的语句\n");
//    }

    // 3.while循环和if一样, 可以嵌套其它合法代码
//    if(1){
//        if(0){

//        }
//        switch (1) {
//        case 1:
//            break;
//        default:
//            break;
//        }
//        while(0){

//        }
//    }

    while(0){
        while(0){
            while(0){
                if(0){

                }
                switch (1) {
                case 1:
                    break;
                default:
                    break;
                }
            }
        }
    }
    return 0;
}
