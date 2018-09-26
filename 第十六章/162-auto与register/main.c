#include <stdio.h>

int main()
{
    /*
     * auto,
     * register,
     * extern,
     * static
     */
    /*
     * auto和register都是用于修饰局部变量的
     * 它们年的作用是修饰编程的存储特性
     * auto: 特点就是告诉编译器, 局部变量离开作用域自动释放
     * 默认情况下所有局部变量都是auto的, 所以这一句废话, 所以了解--> 忘记 /  即可
     *
     * register: 特点就是告诉编译器, 将局部变量存储到CPU寄存器中
     * 好处就是访问的速度会更快, 但是在不同平台,不同编译器下, 会做不同的优化, 所以还是一句废话, 所以了解 --> 忘记 / 即可
     */

    {
//       auto int num = 9;
//       register int num = 9;
    }
//    printf("num = %i\n", num);
    return 0;
}
