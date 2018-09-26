#include <stdio.h>

int main()
{
    // 以下就是一个字符串
    char str1[] = {'z', 'q', 'x', '\0'};
    // 以下是一个字符数组, 不是字符串
    char str2[] = {'l', 'n', 'j'};
    // %s会从数组的第0个元素开始打印, 直到遇到\0为止
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);

//    int index = 0;
//    while(str2[index] != '\0'){
//        printf("%c", str2[index]);
//        index++;
//    }
    return 0;
}
