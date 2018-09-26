#include <stdio.h>
int test(){
    lnj: printf("test 函数\n");
}
int main()
{
    /*
     * goto只能用于在同一个函数中跳转, 可以往前条, 也可以往后条, 只要是在同一个函数中, 想怎么跳就怎么跳
     *
     * 注意点:
     * goto需要配合标签使用
     * 标签可以是任意的名称后面加上:即可
     */

    // 往后跳转
//    printf("第一行代码\n");
//    goto lnj; // 跳转到名称叫做lnj的标签开始执行
//    printf("第二行代码\n");
//    lnj: printf("第三行代码\n"); // lnj: 就是我们自定义的标签

    // 往前跳转
//    int num = 0;
//    lnj: if(num < 3){// lnj: 就是我们自定义的标签
//        num++; // 1 2 3
//        printf("num = %i\n", num); // 1 2 3
//        goto lnj;  // 跳转到名称叫做lnj的标签开始执行
//    }

    // 会报错, 只能在同一个函数中跳转
//    printf("main函数\n");
//    goto lnj;
    return 0;
}
