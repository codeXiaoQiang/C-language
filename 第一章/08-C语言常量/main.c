#include <stdio.h>

int main()
{
    // 1.整型常量
    1;
    2;
    3;
    10;

    // 2.实型常量(小数)
    // 单精度/双精度, 默认情况下所有的实型常量都是双精度
    3.14;  // 双精度
    6.66;

    10.1f; // 单精度
    2.31F;

    // 3.字符型常量
    // 注意点:
    // 3.1字符型常量的单引号中只能放一个字符
    // 3.2特殊情况: \n \t \\ (转移字符)
    'a';
    '1';
    '.';
    'ab'; // 错误
    '12'; // 错误
    '李'; // 错误
    '\n';
    '\t';

    // 4.字符串型常量
    "a";
    "ab";
    "12";
    "李";

    return 0;
}
