
#include <stdio.h>
void test1();
void test2();
int main()
{
    /*
     * 需求: 要求判断用户输入的数据是奇数还是偶数
     */
    /*
//    int num = 7;
//    if(0 == (num % 2)){
//        printf("%i是偶数\n", num);
//    }else{
//        printf("%i是奇数\n", num);
//    }
    */

    /*
    int num = 12;
    // 注意点: 三目是一个运算符, 所以必须有结果
    // 也就是 结果A和结果B的位置放的必须是变量,常量, 表达式
    // 如果放的是一个函数, 那么这个函数必须有返回值
//    0 == (num % 2) ? printf("%i是偶数\n", num) : printf("%i是奇数\n", num);
//    0 == (num % 2) ? test1() : test2();

    // printf函数的返回值, 是我们打印了多少个字符
//    int res = printf("李"); // 如果放的是中文, 是2还是3不确定, 根据当前的编码方式GBK UTF-8
//    printf("res = %i\n", res);
     */


    /*
     * 8 偶数
     *   1000
     * & 0001
     * -------
     *   0000  --> 0
     *
     * 12 偶数
     *   1100
     * & 0001
     * -------
     *   0000  --> 0
     *
     *
     * 9 奇数
     *   1001
     * & 0001
     * -------
     *   0001  --> 1
     *
     * 13 奇数
     *   1101
     * & 0001
     * -------
     *   0001  --> 1
     */

//    int num = 4;
////    if(1 == (num & 1)){
////        printf("%i是奇数\n", num);
////    }else{
////        printf("%i是偶数\n", num);
////    }

//    if(num & 1){
//        printf("%i是奇数\n", num);
//    }else{
//        printf("%i是偶数\n", num);
//    }

    return 0;
}
void test1(){
    printf("test1\n");
}
void test2(){
    printf("test2\n");
}
