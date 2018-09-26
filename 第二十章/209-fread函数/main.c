
#include <stdio.h>
#include <string.h>
int main()
{
    /*
     * 一次性读取一块数据
     */
    FILE *fp = fopen("def.txt", "rb+");

    char buf[1024] ={0};
    /*
     * 第一个参数: 读取的数据存储到哪
     * 第二个参数: 一次读取多少个字节
     * 第三个参数: 读取多少次
     * 第四个参数: 被读取文件的句柄
     * 返回值: 如果返回0代表读取错误
     *
     * 注意: 虽然告诉系统需要读取1024次, 但是只要读取到EOF就不会读取了
     */
    // 从fp对应的文件中读取1024次,每次读取1个字节, 将读取的内容放到buf中
    int n = fread(buf, 1, 1024, fp);
    printf("n = %i\n", n);
    printf("buf = %s\n", buf);
    return 0;
}
