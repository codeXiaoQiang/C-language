#include <stdio.h>
#include <string.h>
int myStrcmp(char *str1, char *str2);

int main()
{
    // strcmp
    char str1[9] = "125";
    char str2[10] = "124";
    // �����ַ�����ͬ����0
    // ��һ������С�ڵڶ������� -1 ����
    // ��һ���������ڵڶ������� 1 ����
    // ���ǰ������ݶ���ͬ, ��һ�������ĸ���С�ڵڶ�������, -1 ����
    // ���ǰ������ݶ���ͬ, ��һ�������ĸ������ڵڶ�������, 1 ����
//    int res = strcmp(str1, str2);
    int res = myStrcmp(str1, str2);
    printf("res = %i\n", res);
    return 0;
}
int myStrcmp(char *str1, char *str2){

//    while(*str1 != '\0' || *str2 != '\0'){
     while(*str1 || *str2){
        if(*str1 > *str2){
            return 1;
        }else if(*str1 < *str2){
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}

/*
int myStrcmp(char *str1, char *str2){
    int index = 0; // 3
    //      \0                        \0
    while(str1[index] != '\0' || str2[index] !='\0'){
        //      3           3
        if(str1[index] > str2[index]){
            return 1;
        }else if(str1[index] < str2[index]){
            return -1;
        }
        index++;
    }
    return 0;
}
*/
