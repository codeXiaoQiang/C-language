#include <stdio.h>
//void change(int value);
void change(int *value);
int main()
{
    // ����һ������, Ҫ���ܹ��ں������޸Ĵ��������ֵ
    int num = 6;
    printf("����֮ǰ:num = %i\n", num);
//    change(num);
    change(&num);
    printf("����֮��:num = %i\n", num);
    return 0;
}
//void change(int value){
// ����: ����������β������������ָ��,
// ��ô�Ϳ����ں������޸���紫�������ֵ
void change(int *value){ // �൱�� int *value = &num;
    *value = 888;
}
