#include <stdio.h>
char upperCase(char);

int main()
{
    // 一下两个变量在内存中是如何存储的
//    int num = 6; // 0000 0000 0000 0000 0000 0000 0000 0110
//    char ch = '6'; // 0011 0110

    // 要定定义一个函数实现用户传入小写字母, 将其转换为大写字母
    /*
     *
     * a --> 97
     * A --> 65
     *
     * b --> 98
     * B --> 66
     *
     * 通过观察得出一个结论
     * 无论是哪个字母的小写和大写之间的ASCII码都相差 32
     * 只要让小写字母的ASCII码值减去32就是大写字母的ASCII码
     */
//    char ch = 'a';
//    char res = ch - 32;
//    // 注意点: C语言不看怎么存, 就看怎么取
//    printf("res = %c\n", res);

    char res = upperCase('m');
    printf("res = %c\n", res);
    return 0;
}
// 该函数的功能是将小写字母转换为大写字母
char upperCase(char ch){
    // 1.安全校验, 判断用户传入的是否是一个字母
    // 在企业开发中, 尽量不要写数字
    // 如果ASCII哪天变化了我们需要修改代码
//    if(ch < '97' || ch > '122'){
    if(ch < 'a' || ch > 'z'){
        printf("请传入一个合法数据\n");
        return ' ';
    }
    char res = ch - ('a' - 'A');
    return res;
}
