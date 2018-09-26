#include <stdio.h>
//void test(int nums[]);
void test(int *nums);
char* demo();

int main()
{
    /*
     * 1.接收字符串的时候, 只能通过字符数组, 不能通过字符指针
     * 2.如果函数中返回的字符串是通过数组创建的, 那么外界无法获取
     *   如果函数中返回的字符串是通过指针创建的, 那么外界可以获取
     */
//    char str[10];
//    char *str;
//    scanf("%s", str);
//    printf("str = %s\n", str);

//    int ages[3] = {1, 3, 5};
//    test(ages);
//    printf("ages[1] = %i\n", ages[1]);

    char *res = demo();
    printf("res = %s\n", res);

    return 0;
}

char* demo(){
//    char str[] = "lnj";
    char *str = "lnj";
    return str;
}


// 注意点: 学习了指针之后, 建议将过去形参的数组类型修改为指针类型
//void test(int nums[]){
//void test(int *nums){
//    nums[1] = 6;
//}
