#include <stdio.h>

int main()
{
    // 1.��һ���ļ�
    FILE *fp = fopen("test.txt", "r+");
    char buf[1024];
    while(fgets(buf, 1024, fp) != NULL){
        printf("buf = %s", buf);
    }

//    while(fgets(buf, 1024, fp) && !feof(fp)){
//        printf("buf = %s\n", buf);
//    }
    return 0;
}
