#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; // ר�����ڴ洢���ݵ�
    struct node *next; // ר������ʵ�����ӵ�
} Node;
Node *createEmpty();
void  insertNode(Node *head, int num);
void printfList(Node *head);
int main()
{
    // 1.����һ��������
    Node *head = createEmpty();
//    printf("data = %i\n", head->data);
//    printf("next = %p\n", head->next);

    // 2.�����������һ���ڵ�
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);

    // 3.��ӡ���
    printfList(head);
    return 0;
}
// 3.��װһ��ר�����ڱ�������ĺ���
/**
 * @brief printfList ��������
 * @param head �����ͷָ��
 */
void printfList(Node *head){
    // 1.ȡ��ͷ�ڵ����һ���ڵ�
    Node *cur = head->next;
    // 2.�ж��Ƿ�ΪNULL, �����ΪNULL�Ϳ�ʼ����
    while(cur != NULL){
        // 2.1ȡ����ǰ�ڵ������, ��ӡ
        printf("data = %i\n", cur->data);
        // 2.2�õ�ǰ�ڵ������ƶ�
        cur = cur->next;
    }
}
// 2.��װһ��ר�����ڲ���ڵ�ĺ���
/**
 * @brief insertNode ����������µĽڵ�
 * @param head �����ͷָ��
 * @param data ��Ҫ�½ڵ㱣�������
 */
void  insertNode(Node *head, int num){
    // 1.����һ���µĽڵ�
    Node *node = (Node *)malloc(sizeof(Node));
    // 2.�����ݱ��浽�½ڵ���
    node->data = num;

    // 3.���в���
    // 3.1���½ڵ����һ���ڵ� ���� ͷ�ڵ����һ���ڵ�
    node->next = head->next;
    // 3.2��ͷ������һ���ڵ� ���� �½ڵ�
    head->next = node;
}
// 1.��װһ��ר�����ڴ���������ĺ���
/**
 * @brief creaateEmpty ����������
 * @return �����ͷָ��
 */
Node *createEmpty(){
    // 1.����ͷָ��
    Node *head = NULL;
    // 2.����һ���սڵ�, ���Ҹ�ֵ��ͷָ��
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    // 3.����ͷָ��
    return head;
}
