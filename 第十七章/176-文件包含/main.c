//#include <stdio.h>

/*
// 1.判断有没有定义名称叫做LNJ的宏
#ifndef LNJ
// 2.如果没有定义就会进入到这里面
// 2.定义一个叫做LNJ的宏
#define LNJ
int sum(int num1, int num2);
#endif

// 1.判断有没有定义名称叫做LNJ的宏
#ifndef LNJ
// 2.由于前面已经定义了, 所以条件不满足, 所以就不会进入这里面了
#define LNJ
int sum(int num1, int num2);
#endif
*/


// 1.
//#include "a.h"
// 2.
//#include "b.h"
//void test();
// 3.
void demo();
void test();


int main()
{
    /*
     * 文件包含 #include
     * #include <>
     * <> 会先从编译器的环境中查找对应的文件, 如果没有再从系统的环境中查找对应的文件
     * #include ""
     * "" 会先从当前项目环境中查找对应的文件, 如果没有再从编译器的环境中查找对应的文件, 如果还没有再从系统的环境中查找对应的文件
     *
     * #include作用:
     * 将指定文件中的代码原方不动的拷贝到#include的位置
     *
     * #include执行的时间
     * 预处理的时执行
     *
     * 注意点:
     * 已知函数的定义不可以重复, 但是函数的声明可以重复
     * 但是如果重复声明函数, 或者重复导入.h文件会影响编译器的编译效率
     * 所以在C语言中引入了头文件卫士的概念, 专门用于解决重复导入
     *
     *
     * 注意点:
     * 1.不要出现循环包含
     * A文件包含B文件, B文件又包含A文件
     */
    int res = sum(10, 20);
    return 0;
}
