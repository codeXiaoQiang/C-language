#include <stdio.h>

void test(){
    printf("test 1111");
}
//void test(){ // �ᱨ�ظ�����Ĵ���
//    printf("test 22222");
//}
//int test(){ // �ᱨ�ظ�����Ĵ���
//    printf("test 33333");
//}
//int test(int a, int b){// �ᱨ�ظ�����Ĵ���
//    printf("test 1111");
//}

//int test1(){
//    int say(){ // �ᱨ��
//        printf("say 321\n");
//    }
//    printf("test1\n");
//}


//void change(int num){ // �����num,���ǳ�֮Ϊ�β�
//    num = 666;
//}

//void test(int num){
//    int num = 666;
//    printf("num = %i\n", num);
//}

int main()
{
    /*
    // 1.���������Ʋ�����ͬ
    // 1.2.���·���ֵ���Ͳ�ͬ, ��������Ҳ������ͬ
    // 1.3.�����β��б�ͬ, ��������Ҳ������ͬ

    // 2.��������Ƕ�׶���, ���±���������, Ҳ��������ô��
//    void say(){
//        printf("say 123");
//    }
//    say();

    test1();
//    say();
    */

//    // 3.����ǻ������͵�������Ϊ�����Ĳ���, ��ô�ں������޸��β�, ����Ӱ������ʵ�ε�ֵ
//    // int char float double
//    int a = 10; // �����a���ǳ�֮Ϊʵ��
//    printf("����change����ǰ:a = %i\n", a); // 10
//    change(a);
//    printf("����change������:a = %i\n", a); // 10

      // 4.�ں����ڲ����ܶ�����β�ͬ���ı���



    // ����֮��ĸ�ֵ���ǿ���
    int a = 10;
    int b = a;
    b = 666;
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    return 0;
}
