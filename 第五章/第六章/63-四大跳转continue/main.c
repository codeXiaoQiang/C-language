#include <stdio.h>

int main()
{
    /*
     * continue
     * continue只能用在循环中, 离开应用范围没有任何意义
     *
     * 作用: 跳过本次循环, 进入下一次循环
     * 只要在循环中遇到continue, 就会直接跳回到条件表达式
     *
     * 注意点:
     * 1.和break一样离开循环没有任何意义, 会报错
     * 2.和break一样continue后面不能编写语句, 永远执行不到
     * 3.和break一样, 循环嵌套的时候continue只会跳出所在(最近)的循环
     */
//    int num = 0;
//    while(num < 10){
//        num++; // num = 1 2 3
//        if(num == 2){
//            continue;
//        }
//        printf("num = %i\n", num); // 1 3
//    }

//    if(1){
//        continue; // 会报错
//    }


//    int num = 0;
//    while(num < 10){
//        num++;
//        printf("continue之前的语句\n");
//        continue;
//        printf("continue之后的语句\n");
//    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(j == 1){
                continue;
            }
            printf("j = %i\n", j);
        }
        printf("----i = %i\n", i);
    }
    return 0;
}

