#include <stdio.h>
/*
#define DEBUG 0

#if DEBUG == 1
#define URL "127.0.0.1"
#else
#define URL "www.it666.com"
#endif
*/

#define DEBUG 0

#if DEBUG == 1
#define NJLOG(format, ...) printf(format, ##__VA_ARGS__)
#else
#define NJLOG(format, ...)
#endif

int main()
{
    /*
     * �ڿ����׶�, ���Ǿ���ʹ�ô�ӡ����ʽ�����Գ���
     * ���Ǵ�ӡ��ʵ�Ƿǳ��������ܵ�, �����ڲ���׶ζ���Ҫȥ����ӡ
     */
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);

    for(int i = 0; i < 100; i++){
        NJLOG("i = %i\n", i);
    }
    return 0;
}
