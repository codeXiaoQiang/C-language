
#include <stdio.h>
void test();
int main()
{
    /*
     * static对局部变量的作用
     * 如果利用static修饰局部变量, 那么会将局部变量的存储区域从栈区移动到静态区
     * 静态区只有程序结束才会释放
     *
     * 应用场景:
     * 优化代码, 提升代码的效率
     */
    test();
    test();
    test();

    return 0;
}
void calculate(int r){
    // PI使用的概率非常大, 如果是一个局部变量的话, 每次调用都会重新开辟存储空间, 这样性能不好
    // 如果PI是static的变量, 那么只会开辟一次, 那么性能就会好很多
    static double pi = 3.1415926;
    return r * r * pi;
}

void test(){
    static int num = 0; // 局部变量
    num++; //  1 2 3
    printf("num = %i\n", num); //  1 2 3
}
