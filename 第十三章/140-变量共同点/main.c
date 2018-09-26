#include <stdio.h>

int main()
{
    /*
     * 变量的共同特点:
     * 1.可以用来保存数据
     * 2.可以用来当做形参
     * 3.可以用来当做返回值
     *
     * 所以指针变量也是一个变量, 所以指针变量也可以用于
     * 1.可以用来保存数据
     * 2.可以用来当做形参
     * 3.可以用来当做返回值
     */

    int num;
    num = 9; // 保存数据

    test(num);
    return 0;
}

void test(int value){ // 当做形参
    printf("value = %i\n", value);
}

int demo(){
    int temp = 998;
    return temp; // 当做返回值
}
