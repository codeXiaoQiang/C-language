#include <stdio.h>
#include <string.h>
void myStrcat(char *str1, char *str2);

int main()
{
    // strcat
    // 注意点: 第一个参数必须足够大
    char str1[9] = "lnj";
    char str2[10] = "it666";
//    strcat(str1, str2);
    myStrcat(str1, str2);
    printf("str1 = %s\n", str1);
    return 0;
}
void myStrcat(char *str1, char *str2){
    // 1.将指针移动到第一个字符串\0的位置
//    while(*str1 != '\0'){
    while(*str1){
        str1++;
    }
    // 2.依次取出第二个字符串的每一个字符串, 添加到第一个字符串的后面
//    while(*str2 !='\0'){
    while(*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
/*
void myStrcat(char *str1, char *str2){
    // 1.定义变量记录第一个字符串\0的位置
    int index = 0;
    // 2.通过循环找到第一个字符串\0的位置
    while(str1[index] != '\0'){
        index++;
    }
    // 3.定义变量记录第二个字符串的索引
    int i = 0;
    // 4.通过循环取出第二个字符串中的每一个字符串, 放到第一个字符串后面
    while(str2[i] != '\0'){
        str1[index] = str2[i];
        index++;
        i++;
    }
//    printf("index = %i\n", index);
    str1[index] = '\0';
}
*/









