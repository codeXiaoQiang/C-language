#include <stdio.h>

int main()
{
    /*
     * break
     * break只用用在switch和循环结构中, 离开应用的范围没有任何意义
     * break在switch语句中, 他的作用是跳出(结束)switch语句
     * break在循环语句中, 他的作用是跳出循环语句 while , dowhile, for
     *
     * 注意点:
     * 1.离开应用范围后会报错
     * 2.在应用范围内, break后面不能编写语句, 因为永远执行不到
     * 3.如果循环嵌套的时候, break只会跳出所在(最近的)的循环
     */

//    switch(1){
//    case 1:
//        printf("A\n");
//        break;
//    case 2:
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

//    int num = 1;
//    while(num <= 10){
//        if(num == 5){
//            break;
//        }
//        printf("num = %i\n", num); // 1 2 3 4
//        num++; // 2 3 4 5
//    }

//    for(int num = 1; num <= 10; num++){
//        if(num == 5){
//            break;
//        }
//        printf("num = %i\n", num);
//    }


//    if(1){
//        printf("随便写点东西\n");
//        break; // 离开应用范围后会报错
//    }


//        switch(1){
//        case 1:
//            printf("A\n");
//            break;
//            printf("break后面的语句\n");
//        case 2:
//            printf("B\n");
//            break;
//        default:
//            printf("Other\n");
//        }


//        int num = 1;
//        while(num <= 10){
//            printf("break前面的语句\n");
//            break;
//            printf("break后面的语句\n");
//            num++;
//        }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j == 1){
                break;
            }
            printf("j = %i\n", j);
        }
        printf("----i = %i\n", i);
    }
    return 0;
}
