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
     * 在开发阶段, 我们经常使用打印的形式来调试程序
     * 但是打印其实是非常消耗性能的, 所以在部署阶段都需要去除打印
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
