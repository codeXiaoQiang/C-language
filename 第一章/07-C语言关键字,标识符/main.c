#include <stdio.h>
/*
1.只能由字母(a~z、 A~Z)、数字、下划线组成
不能包含除下划线以外的其它特殊字符串
2.不能以数字开头
3.不能是C语言中的关键字
4.标识符严格区分大小写, test和Test是两个不同的标识符
*/
int daDianHua(){
    return 0;
}
int test(){
    printf("test1!\n");
    return 0;
}
int Test(){
    printf("test2!\n");
    return 0;
}
int main()
{
    Test();
    printf("Hello World!\n");
    return 0;
}
