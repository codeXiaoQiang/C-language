#include <stdio.h>
#include <string.h>
int main()
{
    /*
    FILE *fp = fopen("lnj.txt", "w+");
    int ages[5] = {1, 3, 5, 7, 9};
    int res = fwrite(ages, sizeof(ages[0]), sizeof(ages)/sizeof(ages[0]), fp);
    printf("res = %i\n", res);

    rewind(fp);
    int buf[5];
    fread(buf, sizeof(ages[0]), sizeof(ages)/sizeof(ages[0]), fp);

    for(int i = 0; i < 5; i++){
        printf("buf[%i] = %i\n", i, buf[i]);
    }
    fclose(fp);
    */
    FILE *fp = fopen("lnj.txt", "wb+");
    char *str1 = "12345678";
    fwrite(str1 , sizeof(char), strlen(str1), fp);


    rewind(fp);
    char buf[1024] = {0};
    /*
     * 注意点:
     * 1.在读取的时, 每次读取多少个字节, 应该按照数据的最小单位来填写
     * 2.在读写一块数据的时候, 如果是Windows平台, 应该写wb或者rb
     *
     * windows存储换行的时候, 存储的是\r\n, Linux存储换行时存储的是\n, 如果是Mac\r
     */
//    while(fread(buf, 3, 1024, fp) > 0){
    while(fread(buf, 1, 1024, fp) > 0){
        printf("buf = %s\n", buf);
    }
    return 0;
}
