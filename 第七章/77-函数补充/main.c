#include <stdio.h>

//// û�з���ֵ, û���βεĺ���
//void test1(){
//    printf("test1\n");
//}
//// û�з���ֵ, ���βεĺ���
//void test2(int age){
//    printf("age = %i\n", age);
//}
//// �з���ֵ, û���βεĺ���
//int test3(){
//    return 998;
//}
//// �з���ֵ, ���βεĺ���
//int sum(int a, int b){
//    return a + b;
//}

//test4(){
//    return 6;
//}
//// ���û�б�д����ֵ����, Ĭ�Ͼ���int
//test5(){
//    return 6.6; // double
//}

int test6(){
    return 3.14;
}
int main()
{
    /*
     * ��������:
     * û�з���ֵ, û���βεĺ���
     * û�з���ֵ, ���βεĺ���
     * �з���ֵ, û���βεĺ���
     * �з���ֵ, ���βεĺ���
     *
     * ע���:
     * 1.���û��д�����ķ���ֵ����, Ĭ�Ͼ���int����
     * 2.��������ķ���ֵ���ͺ�ʵ�ʷ��ص����Ͳ�ͬ, ��ô����ʽ(�Զ�)ת��Ϊ����ֵ����
     */
//    test1();
//    test2(666);
//    int res = test3();
//    printf("res = %i\n", res);
//    int res2 = sum(10, 20);
//    printf("res2 = %i\n", res2);

//    int res = test4();
//    printf("res = %i\n", res);

//    int res2 = test5();
//    printf("res2 = %i\n", res2);
//    printf("res2 = %lf\n", res2);



    int res = test6();
    printf("res = %i\n", res);
    printf("res = %lf\n", res);
    return 0;
}
