#include <stdio.h>

int main()
{
    /*
     * scanfע���:
     * 1.scanf�����ĵڶ�������, ֻ�ܽ��ܱ�����ַ, ���ܽ��ܱ�������
     * 2.scanf����, ������ܵĲ����ַ����͵�����, ��ô����Ŀո�,TAB,�س����ᱻ����
     * 3.scanf�����ĸ�ʽ���ַ���������\n��β, �����\n��β, ��ôscanf������Զ�޷�����
     * 4.scanf�����ĸ�ʽ���ַ�����,������˸�ʽ���ַ������б���ַ���, ��ô����ԭ������, ������յ����ݾͲ���
     * 5.scanf���������Ҫͬʱ���ն�����ַ����͵�����, ����ͨ���ո�,TAB,�س���Ϊ�ָ���
     */
    int num;
//    scanf("%i", &num);
//    scanf("%i\n", &num);
//    scanf("num = %i", &num);
//    printf("num = %i\n", num);
    int value;
//    scanf("%i,%i", &num, &value);
    scanf("%i%i", &num, &value);
    printf("%i,%i\n", num, value);

//    int num = 998;
//    printf("num = %i\n", num);
//    int value = 668;
//    printf("%i,%i\n", num, value);
    return 0;
}
