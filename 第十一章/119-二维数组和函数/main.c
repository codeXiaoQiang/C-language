
#include <stdio.h>

// һ��Ҫ��ס, ��Ҫ��ʵ�δ��ݵ���ʲô, ֻ���βξͿ�����
// ����β�ʱ������������, ��ô�ں������޸��ββ���Ӱ�쵽����ʵ��
// ����β�������, ��ô�ں������޸��βλ�Ӱ�쵽����ʵ��
void change1(char ch){
    ch = 'T';
}
void change2(char ch[]){
    ch[0] = 'T';
}
void change3(char ch[][3]){
    ch[0][0] = 'T';
}

int main()
{
    /*
     * ��ǰѧϰ��Ϊ�����ʱ��, ����֪����������������ĵ�ַ
     * ����chs[0]��chs[1]������Ƕ�ά�����е�һά���������
     * ����chs[0]��chs[1]Ҳ������ĵ�ַ chs[0] == &chs[0]
     *
     * ֻ�ж�ά��������[����][����]����ȡ��ĳһ����Ϊ������ĳһ��Ԫ�ص�ֵ
     */
    char chs[2][3] = {{'l','n','j'}, {'z','q','x'}};
//    printf("chs[0][0] = %c\n", chs[0][0]); // l    l   l
////    change1(chs[0][0]);
////    change2(chs[0]);
////    change3(chs);
//    printf("chs[0][0] = %c\n", chs[0][0]);  // l   T   T

//    int nums[] = {1, 3, 5};
//    printf("nums = %p\n", nums);
//    printf("&nums = %p\n", &nums);

//    printf("chs[0] = %p\n", chs[0]);
//    printf("&chs[0] = %p\n", &chs[0]);
    return 0;
}
