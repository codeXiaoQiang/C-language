#include <stdio.h>

int main()
{
    /*
     * 1.scanf函数会先从输入缓冲区中获取数据, 如果输入缓冲区中没有数据, 那么程序就会阻塞, 等待用户输入数据
     * 2.如果用户输入了数据, scanf函数会将用户输入的数据放到输入缓冲区中, 然后再从输入缓冲区中获取数据
     * 3.如果输入缓冲区中已经有数据了, 那么就不会要求用户输入数据, 会直接从输入缓冲区中获取数据
     *
     * fflush函数:
     * 用于清空输入缓冲区, 当只能在Windows上使用
     * setbuf函数:
     * 用于清空输入缓冲区, 可以在所有平台使用(Windows/Linux/Max OS)
     * 推荐:
     * 以后每次使用完scanf函数都在后面调用一次setbuf函数, 可以降低程序出现问题的几率
     */

    int num1;
    scanf("%i", &num1);
    printf("num1 = %i\n", num1);// 11
//    fflush(stdin); // 清空输入缓冲区
    setbuf(stdin, NULL);// 清空输入缓冲区
    char ch;
    scanf("%c", &ch);
    printf("ch = %c\n", ch);// 空格
//    fflush(stdin); // 清空输入缓冲区
    setbuf(stdin, NULL);
    int num2;
    scanf("%i", &num2);
    printf("num2 = %i\n", num2);// 12
//    fflush(stdin); // 清空输入缓冲区
    setbuf(stdin, NULL);
    return 0;
}
