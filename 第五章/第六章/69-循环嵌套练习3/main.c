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

//    for(int i = 0; i < 3; i++){ // ����
//        for(int j = 0; j <= i; j++){ // ����
////            printf("%i", j + 1);
//            printf("%i", i + 1);
//        }
//        printf("\n");
//    }


//    for(int i = 0; i < 3; i++){ // ����
//        for(int j = i; j < 3; j++){ // ����
//                printf("-");
//        }
//        printf("\n");
//    }

//    for(int i = 0; i < 3; i++){ // ����
//        for(int j = 0; j <= i; j++){ // ����
//               printf("*");
//        }
//        printf("\n");
//    }

//    for(int i = 0; i < 3; i++){ // ����
//        for(int j = i; j < 3; j++){ // ����
//                printf("-");
//        }
//        for(int j = 0; j <= i; j++){ // ����
//               printf("*");
//        }
//        printf("\n");
//    }


    for(int i = 0; i < 3; i++){ // ����
        for(int j = i; j < 3; j++){ // ����
                printf(" ");
        }
        for(int j = 0; j <= i * 2; j++){ // ����
               printf("*");
        }
        printf("\n");
    }
    return 0;
}
