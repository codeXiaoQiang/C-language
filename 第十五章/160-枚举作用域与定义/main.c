#include <stdio.h>
//enum Gender{
//    KGenderMale,
//    KGenderFemale,
//};
int main()
{
    /*
     * ö�����͵�������:
     * �ͽṹ�����͵�������һ��, �ͱ�����������һ��
     *
     * ö�����ͱ����Ķ��ֶ��巽ʽ
     * �ͽṹ�����͵Ķ��ֶ��巽ʽһ��
     */
    // 1.������һ��ö������
//    {
//        enum Gender{
//            KGenderMale,
//            KGenderFemale,
//        };
//    }
//    printf("KGenderMale = %i\n", KGenderMale);


    // 2.���ֶ��巽ʽ
    // 2.1�ȶ���ö������, �ٶ���ö�ٱ���
//    enum Gender{
//        KGenderMale,
//        KGenderFemale,
//    };
//    enum Gender g1;

    // 2.2����ö�����͵�ͬʱ, ����ö�ٱ���
//    enum Gender{
//        KGenderMale,
//        KGenderFemale,
//    } g2;

    // 2.3����ö�����͵�ͬʱ,����ö�ٱ��� ,����ʡ��ö����������
    enum{
        KGenderMale,
        KGenderFemale,
    } g3;

    return 0;
}
//void test(){
//    printf("KGenderFemale = %i\n", KGenderFemale);
//}
