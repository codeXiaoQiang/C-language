#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; // ר�����ڴ洢���ݵ�
    struct node *next; // ר������ʵ�����ӵ�
} Node;
Node *createList();
void printList(Node *head);
int main()
{
   /*
    * ��̬��������
    * β�巨
    * ����:
    * 1.���½ڵ����һ���ڵ����ͷ������һ���ڵ�
    * 2.��ͷ������һ���ڵ�����½ڵ�
    */
    Node *head = createList();
    printList(head);

    return 0;
}
/**
 * @brief printList ��������
 * @param head �����ͷָ��
 */
void printList(Node *head){
    // ע���: ͷ����������˵û��, ��Ϊͷ�����û�б����κ�����
    // ����������Ҫȡ��ͷ������һ���ڵ�
    while(head->next != NULL){
        // �޸�ָ���ָ��, ÿ��ѭ���Ⱥ�һ���ڵ��ƶ�
        head = head->next;
        printf("data = %i\n", head->data);
    }
}
/**
 * @brief createList ������̬����
 * @return  ���ش����õĶ�̬�����ͷָ��
 */
Node *createList(){
    // 1.����һ��������
    // ע���: malloc�п��ܷ���ʧ��
    Node *head = (Node *)malloc(sizeof(Node));
    if(head == NULL){
        exit(-1); // ֱ���˳�����
    }
    head->next = NULL;

    // 2.������Ҫ���������
    int num = -1;
    printf("������Ҫ���������\n");
    scanf("%i", &num); // 1

    // 3.���������¼�½ڵ����һ���ڵ�
    Node *pre = head;
    // 3.���ݽ��յ����ݴ������µĽڵ�
    while(num != -1){

        // 3.1����һ���ڵ�
        Node *node = (Node *)malloc(sizeof(Node));
        // 3.2�����ݱ��浽�ڵ���
        node->data = num;
        node->next = NULL;

       // 3.3���½ڵ���ӵ���һ���ڵ����
        pre->next = node;
       // 3.4���½ڵ��Ϊ��һ���ڵ����һ���ڵ�
        pre = node;

        // 3.4�ٴ���ʾ�û���������
        printf("������Ҫ���������\n");
        scanf("%i", &num); // 3
    }

    return head;
}


