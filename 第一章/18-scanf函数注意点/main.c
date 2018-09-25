#include <stdio.h>

int main()
{
    /*
     * scanf注意点:
     * 1.scanf函数的第二个参数, 只能接受变量地址, 不能接受变量名称
     * 2.scanf函数, 如果接受的不是字符类型的数据, 那么输入的空格,TAB,回车都会被忽略
     * 3.scanf函数的格式化字符串不能以\n结尾, 如果以\n结尾, 那么scanf函数永远无法结束
     * 4.scanf函数的格式化字符串中,如果除了格式化字符串还有别的字符串, 那么必须原样输入, 否则接收的数据就不对
     * 5.scanf函数如果需要同时接收多个非字符类型的数据, 可以通过空格,TAB,回车作为分隔符
     */
    int num;
//    scanf("%i", &num);
//    scanf("%i\n", &num);
//    scanf("num = %i", &num);
//    printf("num = %i\n", num);
    int value;
//    scanf("%i,%i", &num, &value);
    scanf("%i%i", &num, &value);
    printf("%i,%i\n", num, value);

//    int num = 998;
//    printf("num = %i\n", num);
//    int value = 668;
//    printf("%i,%i\n", num, value);
    return 0;
}
