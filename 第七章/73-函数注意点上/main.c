#include <stdio.h>

// û�в����ĺ���
void test(){
    printf("test\n");
}
// �в����ĺ���
int sum(int a, int b){
    return a + b;
}
void say(int age){
    printf("age = %i\n", age);
}
char test2(){
    return 'a';
}
float test3(){
    return 3.14;
}
int main()
{
    // 1.���������в���, Ҳ����û�в���
    // 2.�����Ĳ����������������
    test();
    int res = sum(1, 1);
    printf("res = %i\n", res);
    say(18);
    // 3.���������з���ֵ, Ҳ����û�з���ֵ
    // �������û�з���ֵ, ��ô����ֵ����дvoid�Ϳ�����
    // 4.�����ķ���ֵ���Ϳ���������C��������
    printf("test2 = %c\n", test2());
    printf("test3 = %f\n", test3());
    return 0;
}
