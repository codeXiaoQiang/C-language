
#include <stdio.h>

int main()
{
    /*
     * 文件的打开和关闭
     * 1.文件打开的函数
     * FILE *fopen(const char * filename, const char * mode);
     *
     * 2.文件关闭的函数
     * fclose(FILE * stream);
     */

    /*
     * 第一个参数: 需要打开的文件的名称
     * 第二个参数: 打开文件的模式
     * 返回值: 如果打开文件成功, 会返回文件的句柄, 如果打开失败会返回NULL
     * 模式对应的取值:
     * r 读取
     * w 写入
     * a 追加
     */
    // 1.例如r模式, 读取文件
    // 文件不存储会报错, 会文件存储就打开
    // 只能读不能写
//    FILE *fp = fopen("lnj.txt", "r");
//    if(fp == NULL){
//        printf("打开失败\n");
//    }

    // 2.例如w模式, 写入文件
    // 文件不存储会自动创建, 会将存储会直接打开
    // 只能写不能读
//    FILE *fp = fopen("lnj.txt", "w");
//    if(fp == NULL){
//        printf("打开失败\n");
//    }

    // 3.例如r+模式, 读取和写入文件
    // 文件不存储会报错, 会文件存储就打开
    // 既可以读又可以写
//    FILE *fp = fopen("lnj.txt", "r+");
//    if(fp == NULL){
//        printf("打开失败\n");
//    }

    // 4.例如w+模式, 读取和写入文件(重点)
    // 文件不存储会自动创建, 会将存储会直接打开
    // 既可以读又可以写
//    FILE *fp = fopen("lnj.txt", "w+");
//    if(fp == NULL){
//        printf("打开失败\n");
//    }

    // 5.例如a模式, 追加写入文件
    // 文件不存储会自动创建, 会将存储会直接打开
    // 只能在原有数据的基础上追加
//    FILE *fp = fopen("lnj.txt", "a");
//    if(fp == NULL){
//        printf("打开失败\n");
//    }

    // 6.例如a+模式, 追加写入文件, 并且可以读取(重点)
    // 文件不存储会自动创建, 会将存储会直接打开
    // 可以在原有数据的基础上追加, 并且还可以读取数据
    FILE *fp = fopen("lnj.txt", "a+");
    if(fp == NULL){
        printf("打开失败\n");
    }

    /*
     * 第一个参数: 需要关闭的文件句柄
     * 返回值: int 成功返回 0 ，失败返回 EOF(-1)。
     */
    fclose(fp);
    return 0;
}
