#include <stdio.h>
#include "ds.h"

int main()
{
    /*
     * extern和static对函数的作用
     * 1.如果利用extern修饰函数, 代表这是一个外部函数, 其它文件中也可以使用
     * 注意点: 默认情况下所有函数都是外部函数, 所有的函数都可以在其它文件中访问, 所以extern是一个废物
     *
     * 如果利用static修饰函数, 代表这事一个内部函数, 只能在当前文件中使用
     * 如果一些内部函数不想提供给外界使用, 那么就可以给函数添加一个static
     *
     * extern和static必须写到函数的实现中才有效, 不能写到函数的声明中
     * 并且如果一个函数已经被声明为static的了, 那么在.h文件中就不要编写该函数的声明了
     */
    int res = sum(10, 20);
    printf("res = %i\n", res);
    int res2 = minus(10, 20);
    printf("res2 = %i\n", res2);
    return 0;
}
