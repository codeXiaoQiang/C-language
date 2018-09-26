#include <stdio.h>
#include <string.h>
void myStrcpy(char *str1, char *str2);
int main()
{
    // strcpy
    char str1[9] = "lnj";
    char str2[10] = "it";
//    strcpy(str1, str2);
    myStrcpy(str1, str2);
    printf("str1 = %s\n", str1);
    return 0;
}
void myStrcpy(char *str1, char *str2){
    while(*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
/*
void myStrcpy(char *str1, char *str2){
    int index = 0;
    while(str2[index] != '\0'){
        str1[index] = str2[index];
        index++;
    }
    str1[index] = '\0';
}
*/
