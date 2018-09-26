#include <stdio.h>

int getMax(int num1, int num2){
    int max = num1 > num2 ? num1 : num2;
    return max;
}
int main()
{
    /*
     * 函数定义的格式
     * 返回值类型 函数名称(形参列表){
     *      被封装到函数中的代码;
     * }
     *
     * 初学者如何定义函数
     * 1.确定函数的名称(给函数起一个有意义的名称, 让调用者见名知意)
     * 注意点: 函数名称也是标识符的一种, 所以也需要遵守标识符的命名规则 字母 数字 下划线 驼峰命名
     * 2.确定形参列表(告诉调用者调用时是否需要传递一些辅助的数据)
     * 注意点: 形参列表的格式     (数据类型 变量名称, 数据类型 变量名称, ....)
     *        数据类型 变量名称  可以有零个或多个
     * 3.确定返回值和返回值类型
     * 注意点: 返回的数据是什么类型, 返回值类型就写什么类型
     * return的作用之一就是将后面的数据返回给函数的调用者
     *
     */


    int a = 10;
    int b = 20;
//    int max = a > b ? a : b;
    int max = getMax(a, b);
    printf("max = %i\n", max);

//    int c = 55;
//    int d = 60;
//    int max2 = c > d ? c : d;
    int max2 = getMax(55, 60);
    printf("max2 = %i\n", max2);
    return 0;
}
