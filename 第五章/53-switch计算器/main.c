#include <stdio.h>

int main()
{
    /*
     * Ҫ������switchʵ���������ļ򵥵ļ�����
     * + - * / %
     */

    // 1.������������û��������������
    int a, b;
    // 2.������������û�����Ĳ�������
    char ch;
    // 3.��ʾ�û��������
    printf("�밴�����¸�ʽ����������������Ҫ���еļ������\n");
    printf("ʾ��: 1 + 1 or 1 - 1\n");
    // 4.�����û����������
    scanf("%i %c %i", &a, &ch, &b);
    // 5.�жϵ�ǰ�û�Ҫ��ʲô����
    switch(ch){
    case '+':
        printf("%i %c %i = %i", a, ch, b, a + b);
        break;
    case '-':
        printf("%i %c %i = %i", a, ch, b, a - b);
        break;
    case '*':
        printf("%i %c %i = %i", a, ch, b, a * b);
        break;
    case '/':
        printf("%i %c %i = %i", a, ch, b, a / b);
        break;
    case '%':
        printf("%i %c %i = %i", a, ch, b, a % b);
        break;
    default:
        printf("���๦����ʹ�ø��Ѱ汾\n");
    }
    // 5.���ж�Ӧ�Ĳ���, ������
    return 0;
}
