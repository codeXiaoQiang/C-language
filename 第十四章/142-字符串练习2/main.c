#include <stdio.h>
#include <string.h>
void myStrcat(char *str1, char *str2);

int main()
{
    // strcat
    // ע���: ��һ�����������㹻��
    char str1[9] = "lnj";
    char str2[10] = "it666";
//    strcat(str1, str2);
    myStrcat(str1, str2);
    printf("str1 = %s\n", str1);
    return 0;
}
void myStrcat(char *str1, char *str2){
    // 1.��ָ���ƶ�����һ���ַ���\0��λ��
//    while(*str1 != '\0'){
    while(*str1){
        str1++;
    }
    // 2.����ȡ���ڶ����ַ�����ÿһ���ַ���, ��ӵ���һ���ַ����ĺ���
//    while(*str2 !='\0'){
    while(*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
/*
void myStrcat(char *str1, char *str2){
    // 1.���������¼��һ���ַ���\0��λ��
    int index = 0;
    // 2.ͨ��ѭ���ҵ���һ���ַ���\0��λ��
    while(str1[index] != '\0'){
        index++;
    }
    // 3.���������¼�ڶ����ַ���������
    int i = 0;
    // 4.ͨ��ѭ��ȡ���ڶ����ַ����е�ÿһ���ַ���, �ŵ���һ���ַ�������
    while(str2[i] != '\0'){
        str1[index] = str2[i];
        index++;
        i++;
    }
//    printf("index = %i\n", index);
    str1[index] = '\0';
}
*/









