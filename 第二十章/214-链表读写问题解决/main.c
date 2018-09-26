#include <stdio.h>

typedef struct peron{
//    char *name;
    char name[8];
    int age;
    double height;
} Person;
int main()
{
//    Person p;
//    p.name = "lnj"; // char *name = "lnj";
//    p.age = 18;
//    p.height = 1.66;

//    Person p = {{'l', 'n', 'j', '\0'}, 18, 1.66};
//    Person p = {"zs", 18, 1.66};
//    Person p;
//    p.name = "lnj"; // char *cs[8];  cs = {'l', 'n', 'j', '\0'};
//    p.age = 18;
//    p.height = 1.66;
//    FILE *fp = fopen("abc.txt", "wb+");
      //  fwrite在写入指针类型属性的时候, 写入的是属性保存的地址
//    fwrite(&p, sizeof(p), 1, fp);
//    fclose(fp);

//    FILE *fp = fopen("abc.txt", "rb+");
//    Person p;
//    fread(&p, sizeof(p), 1, fp);
//    printf("name = %s\n", p.name);
//    printf("age = %i\n", p.age);
//    printf("height = %lf\n", p.height);

//    char *name = "lnj";
//    printf("&name = %p\n", &name); // 取出name变量的地址
//    printf("name = %p\n", name); // 取出name变量中保存的地址

//    FILE *fp = fopen("abc.txt", "rb+");
//    fwrite(&name, 4 , 1, fp);
    return 0;
}
