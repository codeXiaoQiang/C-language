#include <stdio.h>

int main()
{
   /*
    * ��ά������ڴ�洢ϸ��
    */
    char chs[2][3] = {{'l','n','j'}, {'z','q','x'}};

//    printf("chs = %p\n", chs);
//    printf("&chs = %p\n", &chs);
//    printf("&chs[0] = %p\n", &chs[0]);
//    printf("&chs[0][0] = %p\n", &chs[0][0]);

    printf("&chs[1] = %p\n", &chs[1]);
    printf("&chs[0] = %p\n", &chs[0]);
    return 0;
}
