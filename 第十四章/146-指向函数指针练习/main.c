#include <stdio.h>
void say();
void sum(int a, int b);
int minus(int a, int b);
char* test();
int main()
{
    // 需求: 定义指针指向这几个函数
    void (*p1)();
    p1 = say;
    p1();

    void (*p2)(int, int);
    p2 = sum;
    p2(10, 20);


    int (*p3)(int a, int b);
    p3 = minus;
    int res = p3(10, 20);
    printf("res = %i\n", res);

    char* (*p4)();
    p4 = test;
    char* res2 = p4();
    printf("res2 = %s\n", res2);
    return 0;
}
void say(){
    printf("Hello World\n");
}
void sum(int a, int b){
    printf("res = %i\n", a + b);
}
int minus(int a, int b){
    return a - b;
}
char* test(){
    char* name = "lnj";
    return name;
}

