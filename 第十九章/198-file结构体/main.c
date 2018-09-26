#include <stdio.h>

int main()
{
    /*
     * fopen函数返回的FILE *是一个指向结构体的指针

  struct _iobuf {
    char *_ptr;  //文件输入的下一个位置
    int _cnt;  //当前缓冲区的相对位置
    char *_base; //文件的起始位置
    int _flag; //文件标志
    int _file;  //文件的有效性验证
    int _charbuf; //检查缓冲区状况,如果无缓冲区则不读取
    int _bufsiz; // 缓冲区大小
    char *_tmpfname; //临时文件名
  };
  typedef struct _iobuf FILE;
     */
    /*
     * FILE *并不是打开的那个文件, 而是一个结构体, 这个结构体中描述了被打开文件在缓冲区中的各种状态
     */
    return 0;
}
