#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
int main()
{

    /*
     * 1.ջ�ڴ����ӵ�ַ��Ŀ�ʼ����
     * 2.ջ�ڴ��д洢�����ݻ��Զ��ͷ�
     * 3.ջ���ڴ��С����, �����ر���ʹ�õݹ��ʱ��һ��Ҫע��, ջ���������
     */
    // ����ջ�е�����
    int num = 666;
    int value = 888;
    printf("&num = %p\n", &num); //  &num = 0060FEAC
    printf("&value = %p\n", &value); // &value = 0060FEA8

    sum(10, 20);
    // 4 * 10240 * 1024
//    int ages[10240 * 102400];


    /*
     * ���ڴ���Դ���������͵����ݣ�����Ҫ�Լ��������ͷ�
     * �Ѵ�С�������е�����󣬵�ʵ��ʹ���У�������ʵ���ڴ�Ĵ�С���ڴ��Ƿ�������
     */

    // �ֶ�����һ����е��ڴ�
    // malloc������������������е��ڴ��
    // malloc����һ������, ��������������ϵͳ, ������Ҫ�����ֽڵĿռ�
    int *p1 = (int *)malloc(4);
    int *p2 = (int *)malloc(sizeof(int));
    *p1 = 123;
    *p2 = 456;


    printf("*p1 = %i\n", *p1);
    printf("*p2 = %i\n", *p2);

    printf("p1 = %i\n", p1); // p1 = 14947416
    printf("p2 = %i\n", p2); // p2 = 14947432

    // ����ͨ��free�������ֶ��ͷ���������Ŀռ�
    free(p1);
    free(p2);

    return 0;
}
int sum(int a, int b){ // ����ջ�е�����
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
}
