#include <stdio.h>
#include <string.h>

int main()
{
    /*
     * 1.输出
     * 2.输入
     * 3.计算字符串长度
     */
//    char str[] = "lnj";
    // printf + %s输出不会自动换行, 必须手动添加\n
    // printf + %s可以添加自定义内容
//    printf("str = %s", str);
    // puts输出会自动换行
    // puts输出不能添加自定义内容
//    puts(str);
//    printf("参考的内容");


//    char str[10];
    // scanf + %s 接收用户输入的数据
    // scanf + %s 接收字符串, 输入的数据中不能有空格/TAB/回车, 系统会将如上三个符号当做结束符号
//    scanf("%s", &str);
    // gets 接收字符串, 可以输入空格/TAB
//    gets(str);
//    printf("str = %s", str);

    char str[] = "lnj"; // {'l', 'n', 'j', '\0'}
//    int len = sizeof(str) / sizeof(str[0]); // 4
////    printf("len = %i\n", len);
//    for(int i = 0; i < len; i++){
//        printf("%c\n", str[i]);
//    }
//    printf("it666.com\n");
//    int length = strlen(str);
//    printf("length = %i\n", length);

    // 作业: 自己写代码实现strlen函数


    return 0;
}
