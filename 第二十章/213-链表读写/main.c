#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person{
    char name[8];
    int age;
    double height;
    struct person *next;
} Person;

Person *createEmpty();
void  insertPerson(Person *head, Person data);
void printfList(Person *head);
void saveList(Person *head, char *name);
Person *loadList(char *name);
int main()
{
//    // 1.����һ��������
//    Person *head = createEmpty();
//    // 2.���������в�������
//    insertPerson(head, (Person){"lnj", 18, 1.9});
//    insertPerson(head, (Person){"zs", 33, 1.65});
//    insertPerson(head, (Person){"ww", 45, 1.78});
//    // 3.��ɾ�Ĳ����
//    printfList(head);
//    // 4.�������浽�ļ���
//    saveList(head, "ps.it");
    // 5.���ļ��ж�ȡ����
    Person *head = loadList("ps.it");
    printfList(head);
    // 6.��ɾ�Ĳ����
    return 0;
}

Person *loadList(char *name){

    // 0.����һ���յ�����
    Person *head = createEmpty();

    // 1.���ļ�
    FILE *fp = fopen(name, "rb+");
    // 2.����һ���½ڵ�
    Person p;
    while(fread(&p, sizeof(Person), 1, fp) > 0){
        insertPerson(head, p);
    }
    // 3.�رմ򿪵��ļ�
    fclose(fp);

    // 4.���ؼ��غõ�����
    return head;
}
/**
 * @brief saveList ����Ч�ڵ�д�뵽�ļ�
 * @param head �����ͷָ��
 */
void saveList(Person *head, char *name){
    // 1.���ļ�
    FILE *fp = fopen(name, "wb+");
    // 1.ȡ��ͷ�ڵ����һ���ڵ�
    Person *cur = head->next;
    while(cur != NULL){
        // д��һ����Ч�ڵ�
        fwrite(cur, sizeof(Person), 1, fp);
        // �õ�ǰ�ڵ������ƶ�
        cur = cur->next;
    }
    // 2.�رմ򿪵��ļ�
    fclose(fp);
}

/**
 * @brief printfList ��������
 * @param head �����ͷָ��
 */
void printfList(Person *head){
    // 1.ȡ��ͷ�ڵ����һ���ڵ�
    Person *cur = head->next;
    // 2.�ж��Ƿ�ΪNULL, �����ΪNULL�Ϳ�ʼ����
    while(cur != NULL){
        // 2.1ȡ����ǰ�ڵ������, ��ӡ
        printf("name = %s\n", cur->name);
        printf("age = %i\n", cur->age);
        printf("height = %lf\n", cur->height);
        // 2.2�õ�ǰ�ڵ������ƶ�
        cur = cur->next;
    }
}

/**
 * @brief insertPerson ����������µĽڵ�
 * @param head �����ͷָ��
 * @param data ��Ҫ�½ڵ㱣�������
 */
void  insertPerson(Person *head, Person data){
    // 1.����һ���µĽڵ�
    Person *node = (Person *)malloc(sizeof(Person));
    // 2.�����ݱ��浽�½ڵ���
    int i;
    for(i = 0; i < strlen(data.name); i++){
        node->name[i] = data.name[i];
    }
    node->name[i] = '\0';
    node->age = data.age;
    node->height = data.height;

    // 3.���в���
    // 3.1���½ڵ����һ���ڵ� ���� ͷ�ڵ����һ���ڵ�
    node->next = head->next;
    // 3.2��ͷ������һ���ڵ� ���� �½ڵ�
    head->next = node;
}

/**
 * @brief creaateEmpty ����������
 * @return �����ͷָ��
 */
Person *createEmpty(){
    // 1.����ͷָ��
    Person *head = NULL;
    // 2.����һ���սڵ�, ���Ҹ�ֵ��ͷָ��
    head = (Person *)malloc(sizeof(Person));
    head->next = NULL;
    // 3.����ͷָ��
    return head;
}
