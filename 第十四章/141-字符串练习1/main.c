#include <stdio.h>
#include <string.h>

int myStrlen(char *str);

int main()
{
    /*
     * strlen();
     * strcat();
     * strcpy();
     * strcmp();
     */

    char *str = "lnj";
//    char str[10] = {'l', 'n', 'j', '\0'};
    // ע���: strlen������Ǳ����˶��ٸ��ַ���
    // �������, ���Ƿ����ַ�����\0֮ǰ�ж��ٸ��ַ�
//    int res = strlen(str);

    int res = myStrlen(str);
    printf("res = %i\n", res);
    return 0;
}


int myStrlen(char *str){
    char *startP = str;
    while(*str++);
    str--;
    return str - startP;


    // 1.���������¼��ǰ�ж��ٸ�
//    int count = 0;
//    while(*str++){
//        count++;
//    }

//    while(*str++ != '\0'){
//        count++;
//    }

//    while(str[count] != '\0'){
//        count++;
//    }
//    return count;
}
