#include <stdio.h>

int main()
{
    /*
     * typdef和宏定义的区别
     * 如果是要给数据类型起别名, 那么一律用typedef即可
     */
    char *name = "lnj";
    printf("name = %s\n", name);

    typedef char* String;
//    String name2 = "zs";
    String n1, n2;
    n1 = "zs";
    n2 = "ww";
    printf("n1 = %s\n", n1);
    printf("n2 = %s\n", n2);

#define ZIFUCHUAN char*
    // ZIFUCHUAN n3, n4;
    // char* n3, n4;
    // 只有n3是指针, 而n4是字符
    ZIFUCHUAN n3, n4;
    n3 = "ls";
    n4 = "zl";
    printf("n3 = %s\n", n3);
    printf("n4 = %s\n", n4);
    return 0;
}
