#include <stdio.h>
//void test(int nums[]);
void test(int *nums);
char* demo();

int main()
{
    /*
     * 1.�����ַ�����ʱ��, ֻ��ͨ���ַ�����, ����ͨ���ַ�ָ��
     * 2.��������з��ص��ַ�����ͨ�����鴴����, ��ô����޷���ȡ
     *   ��������з��ص��ַ�����ͨ��ָ�봴����, ��ô�����Ի�ȡ
     */
//    char str[10];
//    char *str;
//    scanf("%s", str);
//    printf("str = %s\n", str);

//    int ages[3] = {1, 3, 5};
//    test(ages);
//    printf("ages[1] = %i\n", ages[1]);

    char *res = demo();
    printf("res = %s\n", res);

    return 0;
}

char* demo(){
//    char str[] = "lnj";
    char *str = "lnj";
    return str;
}


// ע���: ѧϰ��ָ��֮��, ���齫��ȥ�βε����������޸�Ϊָ������
//void test(int nums[]){
//void test(int *nums){
//    nums[1] = 6;
//}
