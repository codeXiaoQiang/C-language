#include <stdio.h>
#include <stdlib.h>
Node *createList();
typedef struct node{
    int data; // ר�����ڴ洢���ݵ�
    struct node *next; // ר������ʵ�����ӵ�
} Node;
int main()
{
   /*
    * ������:
    * ֻ��ͷָ���һ���ڵ�, ���ҽڵ�û������, Ҳû����һ���ڵ�
    */
    Node *head = createList();

    return 0;
}
// ����һ��������
Node * createList(){
    // 1.����һ���սڵ�
    // ע���: malloc�п��ܷ���ʧ��
    Node *head = (Node *)malloc(sizeof(Node));
    if(head == NULL){
        exit(-1); // ֱ���˳�����
    }
    head->next = NULL;

    return head;
}


