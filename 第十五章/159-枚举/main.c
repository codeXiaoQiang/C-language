#include <stdio.h>

int main()
{
    /*
     * ö��?
     * ö����������������Ķ���, һ�����ڱ�ʾ�����̶���ֵ
     * ���Ի���һ������, ����ö�ٳ���
     *
     * ���ĳЩ������ȡֵ�ǹ̶���, ��ô�Ϳ��Կ���ʹ��ö����ʵ��
     *
     * ö�ٵĸ�ʽ:
     * enum ö����������{
     *    ȡֵ1,
     *    ȡֵ2,
     * };
     * ע���: �ͽṹ��,�����岻ͬ, ö�����ö��Ÿ���
     *
     * �淶:
     * ö�ٵ�ȡֵһ����K��ͷ,�������ö����������, �����ٸ��ϱ��ĺ���
     * K��������һ������
     * ö����������, ��Ҫ��Ϊ���ж��ö�ٵ�ʱ��, ��������
     * ����, ���������˼
     *
     * ö�ٵ�ȡֵ:
     * Ĭ������´�0����ȡֵ, ���ε���
     * Ҳ�����ֶ�ָ���Ӽ���ʼ, ���ε���
     */

    enum Gender{
//        male,
//        female,
//        nan,
//        nv,
//        yao,
        KGenderMale = 9, //0
        KGenderFemale, // 1
                       // 2 ... ...
    };

    printf("KGenderMale = %i\n", KGenderMale);
    printf("KGenderFemale = %i\n", KGenderFemale);

    struct Person{
        char *name; // ����
        int age; // ����
        enum Gender gender; // �Ա�
    };
    struct Person p1;
    p1.name = "lnj";
    p1.age = 58;
    p1.gender = KGenderFemale;

    struct Person p2;
    p2.name = "������";
    p2.age = 88;
    p2.gender = KGenderFemale;

    return 0;
}
