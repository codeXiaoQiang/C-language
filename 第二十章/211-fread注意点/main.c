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
     * ע���:
     * 1.�ڶ�ȡ��ʱ, ÿ�ζ�ȡ���ٸ��ֽ�, Ӧ�ð������ݵ���С��λ����д
     * 2.�ڶ�дһ�����ݵ�ʱ��, �����Windowsƽ̨, Ӧ��дwb����rb
     *
     * windows�洢���е�ʱ��, �洢����\r\n, Linux�洢����ʱ�洢����\n, �����Mac\r
     */
//    while(fread(buf, 3, 1024, fp) > 0){
    while(fread(buf, 1, 1024, fp) > 0){
        printf("buf = %s\n", buf);
    }
    return 0;
}
