
#include <stdio.h>

int main()
{
    /*
     * 二维数组的初始化
     */
    // 1.定义的同时初始化  {{},{}}
//    int nums[2][3] = {{1, 3, 5},{2, 4, 6}};
    // 2.先定义再初始化
//    int nums[2][3];
//    nums[0][0] = 999;
//    nums[0][1] = 888;
//    nums[0][2] = 777;
//    nums[1][0] = 666;
//    nums[1][1] = 555;
//    nums[1][2] = 444;

    // 3.特殊的方式 (作为了解)
    // 如果在定义的同时初始化, 那么二维数组的个数可以省略
//    int nums[][3] = {{1, 3, 5},{2, 4, 6}};
    // 如果在定义的同时初始化, 那么初始化中每个一维数组的{}也可以省略
    // 会依次从前往后存入一维数组
    // {{1, 3, 5},{2, 4, 垃圾数据}}
//    int nums[][3] = {1, 3, 5 ,2, 4};

    // 注意点:
    // 二维数组中每一个一维数组元素的个数不能省略
//    int nums[2][] = {{1, 3, 5},{2, 4, 6}};
//    int nums[][] = {{1, 3, 5},{2, 4, 6}};
//    int nums[2][3];
//    nums = {{1, 3, 5},{2, 4, 6}};


    return 0;
}
