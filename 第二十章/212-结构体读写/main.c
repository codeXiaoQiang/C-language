#include <stdio.h>

typedef struct person{
    char name[8];
    int age;
    double height;
} Person;
int main()
{
    /*
    // 1.д��һ���ṹ��
//    Person p = {"lnj", 18, 1.65};
//    FILE *fp = fopen("abc.txt", "wb+");
//    fwrite(&p, sizeof(Person), 1, fp);
//    fclose(fp);

    // 2.��ȡһ���ṹ��
    FILE *fp = fopen("abc.txt", "rb+");
    Person p;
    fread(&p, sizeof(Person), 1, fp);
    printf("name = %s\n", p.name);
    printf("age = %i\n", p.age);
    printf("height = %lf\n", p.height);
    fclose(fp);
    */

    /*
    // 1.д��ṹ������
//    Person ps[3] = {
//        {"lnj", 18, 1.65},
//        {"zs", 33, 1.9},
//        {"ww", 45, 1.78}
//    };
//    FILE *fp = fopen("abc.txt", "wb+");
//    fwrite(&ps, sizeof(ps), 1, fp);
//    fclose(fp);

    // 2.��ȡ�ṹ������
    FILE *fp = fopen("abc.txt", "rb+");
    Person ps[3];
    fread(&ps, sizeof(Person), 3, fp);
    for(int i = 0; i < 3; i++){
        Person p = ps[i];
        printf("name = %s\n", p.name);
        printf("age = %i\n", p.age);
        printf("height = %lf\n", p.height);
        printf("--------------\n");
    }
    fclose(fp);
    */

    return 0;
}
