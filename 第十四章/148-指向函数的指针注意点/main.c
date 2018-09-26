#include <stdio.h>
void say();
int sum(int num1, int num2);
int minus(int num1, int num2);
int demo(int num1, int num2, int (*funcP)(int, int));
int main()
{
    /*
     * 1.��ζ���һ��ָ������ָ��
     * 1.1��������ʲô��������
     * 1.2�ں����ķ���ֵ�ͺ��������м����һ����*
     * 1.3�޸ĺ���������
     * 1.4��*�ͺ�������������������
     *
     * 2.���������ƾ��Ǻ����ĵ�ַ
     */
    /*
    void (*funcP)();
    printf("funcP = %i\n", sizeof(funcP));
    funcP = &say;
    (*funcP)();
    */

    /*
    int (*funcP)(int, int);
//    funcP = &sum;
    funcP = sum;
//    printf("&sum = %p\n", &sum);
//    printf("sum = %p\n", sum);

//    (*funcP)();
//    sum();
    int res = funcP(10, 20); // int res = 30;
    printf("res = %i\n", res);

    funcP = &minus;
    int res2 = funcP(10, 20); // int res = -10;
    printf("res2 = %i\n", res2);
    */

    int value = demo(10, 20, &sum); // 30;
    printf("value = %i\n", value);

    int value2 = demo(20, 30, &minus); // -10;
    printf("value2 = %i\n", value2);
    return 0;
}
// ע���: ָ������ָ��,��Ϊ�������β�ʱ, ָ�����������, �����βε�����
// ���ָ������ָ����Ϊ�����Ĳ���, ��ô������Գ�֮Ϊ�ص�����
// �����൱��, ��demo����������һ��sum��������minus����
// Ȼ������demo�����е�����sum��������minus����
int demo(int num1, int num2, int (*funcP)(int, int)){
    int res = (*funcP)(num1, num2); // int res = 30; int res = -10;
    return res; //return 30; return -10;
}
/*
void say(){
    printf("hello wolrd\n");
}
*/
int sum(int num1, int num2){
    return num1 + num2;
}
int minus(int num1, int num2){
    return num1 - num2;
}

/*
 * 1.Ҫ��Ӽ�������һ���ַ���, �����ַ����п��Գ��ֿո�
 * 2.���û�������ַ���, ���ʵ�����ĸ��ɴ�д,    �����ÿո񻮷�
 * hello world;  --> Hello World;
 * 3.���û�������ַ���, ���ʵ�����ĸ���Сд,    �����ÿո񻮷�
 * Hello World;  --> hello world;
 * 4.Ҫ����һ������, �ȿ��Դ�������ĸ��Ϊ��д, Ҳ���Դ�������ĸ��ΪСд
 * ��Ҫ�õ�ָ������ָ��
 */
