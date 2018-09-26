#include <stdio.h>

#define COUNT 666
int main()
{
    /*
     * 宏定义的作用域
     * 宏定义的作用域和全局变量很像, 但是可以提前结束
     *
     * 作用域是从定义的那一行开始, 直到文件末尾
     * 可以通过#undef 宏名  来提前结束宏的作用域
     */
    printf("%i\n", COUNT);
    test();
    return 0;
}
//#undef COUNT
void test(){
    printf("%i\n", COUNT);
}
