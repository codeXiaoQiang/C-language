#include <stdio.h>
#include <string.h>

int myStrlen(char *str);

int main()
{
    /*
     * strlen();
     * strcat();
     * strcpy();
     * strcmp();
     */

    char *str = "lnj";
//    char str[10] = {'l', 'n', 'j', '\0'};
    // 注意点: strlen计算的是保存了多少个字符串
    // 计算规则, 就是返回字符串中\0之前有多少个字符
//    int res = strlen(str);

    int res = myStrlen(str);
    printf("res = %i\n", res);
    return 0;
}


int myStrlen(char *str){
    char *startP = str;
    while(*str++);
    str--;
    return str - startP;


    // 1.定义变量记录当前有多少个
//    int count = 0;
//    while(*str++){
//        count++;
//    }

//    while(*str++ != '\0'){
//        count++;
//    }

//    while(str[count] != '\0'){
//        count++;
//    }
//    return count;
}
