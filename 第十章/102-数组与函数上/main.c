#include <stdio.h>
void change(int);
void change2(int[]);
int main()
{
    /*
     * 1.数组和函数
     * 如果数组作为函数的参数, 那么在函数中修改形参的值, 会影响到外面实参的值
     *
     * 2.基本数据类型和函数
     * int char short long float double
     * 基本数据类型作为函数的参数, 在函数中修改形参的值不会影响到外界实参的值
     */
    int num = 666;
//    printf("num = %i\n", num);
//    change(num);
//    printf("num = %i\n", num);

    int ages[3] = {1, 3, 5};
    // 结论: ages = &ages = &ages[0]
    // 也就是说数组名保存的是数组占用内存空间最小的那个地址
//    printf("ages = %p\n", ages);
//    printf("&ages = %p\n", &ages);
//    printf("&ages[0] = %p\n", &ages[0]);

    printf("ages[1] = %i\n", ages[1]);
    change2(ages); // 相当于传入的是0ff02
    printf("ages[1] = %i\n", ages[1]);

    return 0;
}

void change(int value){
    value = 888;
}
// 既然ages和values都是保存的同一个地址, 所以都可以找到这块内存, 都可以操作这块内存
void change2(int values[]){// 相当于保存的是0ff02
    values[1] = 888;
}
