#include <stdio.h>
void change(int);
void change2(int[]);
int main()
{
    /*
     * 1.����ͺ���
     * ���������Ϊ�����Ĳ���, ��ô�ں������޸��βε�ֵ, ��Ӱ�쵽����ʵ�ε�ֵ
     *
     * 2.�����������ͺͺ���
     * int char short long float double
     * ��������������Ϊ�����Ĳ���, �ں������޸��βε�ֵ����Ӱ�쵽���ʵ�ε�ֵ
     */
    int num = 666;
//    printf("num = %i\n", num);
//    change(num);
//    printf("num = %i\n", num);

    int ages[3] = {1, 3, 5};
    // ����: ages = &ages = &ages[0]
    // Ҳ����˵�����������������ռ���ڴ�ռ���С���Ǹ���ַ
//    printf("ages = %p\n", ages);
//    printf("&ages = %p\n", &ages);
//    printf("&ages[0] = %p\n", &ages[0]);

    printf("ages[1] = %i\n", ages[1]);
    change2(ages); // �൱�ڴ������0ff02
    printf("ages[1] = %i\n", ages[1]);

    return 0;
}

void change(int value){
    value = 888;
}
// ��Ȼages��values���Ǳ����ͬһ����ַ, ���Զ������ҵ�����ڴ�, �����Բ�������ڴ�
void change2(int values[]){// �൱�ڱ������0ff02
    values[1] = 888;
}
