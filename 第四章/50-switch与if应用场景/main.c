#include <stdio.h>

int main()
{
    // 需求: 判断用户输入的数字是否是100~200之间的数
    int num = -1;
    scanf("%i", &num);
    // 在企业开发中, 能用if就用if
    // if更适合对区间的判断, 或者对多条件的判断
    // switch更适合对固定的几个数据进行判断
    // switch理论上的性能比if要高
//    if(num >= 100 && num <= 200){
//        printf("是100~200之间的数\n");
//    }else{
//        printf("不是100~200之间的数\n");
//    }

    switch(num){
    case 100:
    case 101:
        printf("是100~200之间的数\n");
        ....
    default:
        printf("不是100~200之间的数\n");
    }
    return 0;
}
