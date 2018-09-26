#include <stdio.h>

int main()
{
    /*
     * 要求将用户输入的整数, 以二进制的形式输出
     * 0000 0000 0000 0000 0000 0000 0000 1001
     * 0000 0000 0000 0000 0000 0000 0000 0001
     */

    int num = 9;
//    int temp = (num >> 3) & 1;
//    printf("temp = %i\n", temp);
//    temp = (num >> 2) & 1;
//    printf("temp = %i\n", temp);
//    temp = (num >> 1) & 1;
//    printf("temp = %i\n", temp);
//    temp = (num >> 0) & 1;
//    printf("temp = %i\n", temp);

//    for(int i = 0; i < 32; i++){
//        int temp = (num >> 31 - i) & 1;
//        printf("%i", temp);
//    }

    char ch = 'a';
//    printBinary(num);
      printBinary(ch);
      printf("%i\n", 0b01100001);

    return 0;
}
void printBinary(char value){
    // int 4 --> 32
    // char 1 --> 8
    // 在企业开发中 , 数字我们称之为魔鬼
    int len = sizeof(value) * 8;
    for(int i = 0; i < len; i++){
        int temp = (value >> (len - 1 - i)) & 1;
        printf("%i", temp);
        if(((i+ 1) % 4) == 0){
            printf(" ");
        }
    }
    printf("\n");
}
