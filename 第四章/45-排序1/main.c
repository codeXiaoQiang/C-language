#include <stdio.h>

int main()
{
    /*
     * ����:
     * Ҫ���û�������������, �ų�֮�����
     * ����: �û�������� 18,2,16  --> 2,16,18
     */
    // 1.������������û����������
    int a, b, c;
    a = -1, b = -1, c = -1;
    // 2.��ʾ�û������������
    printf("��������������, �ö��Ÿ���, �Իس�����\n");
    // 3.�����û����������
    scanf("%i,%i,%i", &a, &b, &c);
    // 4.����
    if(a > b && b > c){
        printf("%i,%i,%i", a, b, c);
    }else if(a > c && c > b)
    {
        printf("%i,%i,%i", a, c, b);
    }else if(b > a && a > b)
    {
        printf("%i,%i,%i", b, a, c);
    }else if(b > c && c > a)
    {
        printf("%i,%i,%i", b, c, a);
    }else if(c > a && a > b)
    {
        printf("%i,%i,%i", c, a, b);
    }else if(c > b && b > a)
    {
        printf("%i,%i,%i", c, b, a);
    }
    return 0;
}
