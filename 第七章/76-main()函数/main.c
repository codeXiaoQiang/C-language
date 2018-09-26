#include <stdio.h>

/*
 * 1.main函数是系统自动调用的函数, 我们不能手动调用
 * 2.系统在调用main函数的时, 默认会传递两个参数
 * argc: 第二个数组保存数据的个数
 * argv: 默认保存了一个数据, 这个数据就是当前文件的地址
 * 3.argv中保存的元素是可以动态添加的
 *
 * 4.main函数的return 0 的含义
 * 告诉系统当前程序是正常结束的, 如果return返回的不是0, 就代表告诉系统程序不是正常结束的
 *
 * 暂时只需要知道一点:
 * 在企业开发中, 我们是可以通过控制台(CMD)在运行程序的时候给main函数传递参数的就可以了
 */
int main(int argc, const char *argv[])
{
    // ["lnj", "zs"]
    // 代表数组中有一个元素
    // 代表数组中有两个元素
    // 默认情况下, 系统在调用main函数的时候, 会给argv这个数组中存放一个元素
    // ["C:\Users\Jonathan_Lee\Desktop\C_Lessons\Code\build-76-lesson-Desktop_Qt_5_11_0_MinGW_32bit-Debug\debug\76-lesson.exe"]
    printf("argc = %i\n", argc);
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[2] = %s\n", argv[2]);
    return 0;
}
