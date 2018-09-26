#include <stdio.h>

int main()
{
    /*
     1
     12
     123

     1
     22
     333

     ---*
     --***
     -*****

     *
     ***
     *****
     */

//    for(int i = 0; i < 3; i++){ // 行数
//        for(int j = 0; j <= i; j++){ // 列数
////            printf("%i", j + 1);
//            printf("%i", i + 1);
//        }
//        printf("\n");
//    }


//    for(int i = 0; i < 3; i++){ // 行数
//        for(int j = i; j < 3; j++){ // 列数
//                printf("-");
//        }
//        printf("\n");
//    }

//    for(int i = 0; i < 3; i++){ // 行数
//        for(int j = 0; j <= i; j++){ // 列数
//               printf("*");
//        }
//        printf("\n");
//    }

//    for(int i = 0; i < 3; i++){ // 行数
//        for(int j = i; j < 3; j++){ // 列数
//                printf("-");
//        }
//        for(int j = 0; j <= i; j++){ // 列数
//               printf("*");
//        }
//        printf("\n");
//    }


    for(int i = 0; i < 3; i++){ // 行数
        for(int j = i; j < 3; j++){ // 列数
                printf(" ");
        }
        for(int j = 0; j <= i * 2; j++){ // 列数
               printf("*");
        }
        printf("\n");
    }
    return 0;
}
