#include <stdio.h>

int main()
{
    // 1.case�Ĵ�͸����
    // ��switch��, ֻҪ��һ��case��ƥ����, ������case��default����ʧЧ
    // break��switch�е�����, ��������switch���(������ǰ��switch���)
    // ���default��д�����, ��ôdefault�����break����ʡ��
//    int day = 1;
//    switch(day){
//    case 1:
//        printf("����һ\n");
//        break;
//    case 2:
//        printf("���ڶ�\n");
////        break;
//    default:
//        printf("OTHER\n");
////        break; // �����break�ǿ���ʡ�Ե�
//    }

    // 2.default��д��λ��, �������д
    // ����default�Ƿ���д��switch�������, �������ִ��
    // ���default����д������, ��ôbreak����ʡ��, ʡ�Ծͻᷢ����͸����
    // ��סһ��: ��Զ��defaultд�����
//    int day = 3;
//    switch(day){
//    case 1:
//        printf("����һ\n");
//        break;
//    default:
//        printf("OTHER\n");
////        break;
//    case 2:
//        printf("���ڶ�\n");
//        break;
//    }

    // 3.switch�����()��ֻ�ܱ��ʽ/����/����, ���ұ��������ͻ����ܹ�������Ϊ���͵�
//    int num = 1;
//    switch(num){ // ��һ������
//    switch(2){ // ��һ������
//    switch(1 + 1){ // ��һ�����ʽ
//    switch(1.1){ // �ᱨ��, С����������Ϊ����
    // ���ᱨ��, char���Ϳ�������Ϊint����
    // char���͵ײ�ı��ʴ洢����ASCII��, ��ASCII���������
//    switch('a'){
//    case 1:
//        printf("A\n");
//        break;
//    case 2:
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

    // 4.switch��case����ֻ�ܷų����ͱ��ʽ, ���ұ��������ͻ����ܹ�������Ϊ���͵�
//    int num = 1;
//    switch(2){
//    case 1: //����
////    case num: // ����, �ᱨ��
//        printf("A\n");
//        break;
//    case 1 + 1: // ���ʽ
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

    // 5.switch��case�����ֵ�����ظ�
//    int num = 1;
//    switch(2){
//    case 2:
//        printf("A\n");
//        break;
////    case 1: // �ᱨ��
//    case 1 + 1: // �ᱨ��
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

    // 6.switch��case���治�ܶ������
    // ���Ҫ��case���涨�����, ������case�������{}
    switch(1){
    case 1:{
        int num = 666; // �ᱨ��
        printf("A\n");
        break;
    }
    case 2:
        printf("B\n");
        break;
    default:
        printf("Other\n");
    }
    return 0;
}
