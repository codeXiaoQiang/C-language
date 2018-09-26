
#include <stdio.h>

// 一定要记住, 不要管实参传递的是什么, 只看形参就可以了
// 如果形参时基本数据类型, 那么在函数内修改形参不会影响到外界的实参
// 如果形参是数组, 那么在函数内修改形参会影响到外界的实参
void change1(char ch){
    ch = 'T';
}
void change2(char ch[]){
    ch[0] = 'T';
}
void change3(char ch[][3]){
    ch[0][0] = 'T';
}

int main()
{
    /*
     * 以前学习以为数组的时候, 我们知道数组名就是数组的地址
     * 所以chs[0]和chs[1]代表的是二维数组中的一维数组的名称
     * 所以chs[0]和chs[1]也是数组的地址 chs[0] == &chs[0]
     *
     * 只有二维数组名称[索引][索引]才是取出某一个以为数组中某一个元素的值
     */
    char chs[2][3] = {{'l','n','j'}, {'z','q','x'}};
//    printf("chs[0][0] = %c\n", chs[0][0]); // l    l   l
////    change1(chs[0][0]);
////    change2(chs[0]);
////    change3(chs);
//    printf("chs[0][0] = %c\n", chs[0][0]);  // l   T   T

//    int nums[] = {1, 3, 5};
//    printf("nums = %p\n", nums);
//    printf("&nums = %p\n", &nums);

//    printf("chs[0] = %p\n", chs[0]);
//    printf("&chs[0] = %p\n", &chs[0]);
    return 0;
}
