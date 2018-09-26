#include <stdio.h>
#include <string.h>

int main()
{
//    char str1[6] = "lnj";
//    char str2[6] = "it666";

    // 字符串拼接
    /*
    // 传入两个数组, 会将后面一个数组拼接到前面一个数组的后面
    // 注意点: 前面一个数组必须足够长, 否则在企业开发中会引发一些未知的BUG
    // strcat(dest, src)
//    strcat(str1, str2);
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);

     // 会将src中的count个字符拼接到dest后面
//    strncat(dest, src, count)
    int size = sizeof(str1)/sizeof(str1[0]); // 字符数组可以存储多少个元素
    int len = strlen(str1); // 除了\0以外存储了多少个元素
    int count = size - len - 1; // -1给\0留位置
//    printf("size = %i\n", size);
//    printf("len = %i\n", len);
//    printf("count = %i\n", count);
    strncat(str1, str2, count);
    */

    // 作业: 自己写代码实现strcat函数

    // 字符串拷贝
    /*
    // 会用将src中的字符拷贝到dest中, 覆盖掉dest中原有的内容
    // 注意点: 前面一个数组必须足够长, 否则在企业开发中会引发一些未知的BUG
    // strcpy(dest, src);
//    strcpy(str1, str2);
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);
    */

    // 作业: 自己写代码实现strcpy函数

    // 字符串比较
    // 会依次从第0个索引开始, 取出str1和str2中每个元素进行比较
    // 如果str1当前的元素大于str2当前的元素, 那么返回一个正数
    // 如果str1当前的元素小于str2当前的元素, 那么返回一个负数
    // 如果str1当前的元素等于str2当前的元素, 那么返回0
//    strcmp(str1, str2);

    char str1[6] = "124";
    char str2[6] = "133";
    int res = strcmp(str1, str2);
    printf("res = %i\n", res);

    // 作业: 自己写代码实现strcmp函数
    return 0;
}
