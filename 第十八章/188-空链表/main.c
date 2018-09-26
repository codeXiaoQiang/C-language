#include <stdio.h>
#include <stdlib.h>
Node *createList();
typedef struct node{
    int data; // 专门用于存储数据的
    struct node *next; // 专门用于实现链接的
} Node;
int main()
{
   /*
    * 空链表:
    * 只有头指针和一个节点, 并且节点没有数据, 也没有下一个节点
    */
    Node *head = createList();

    return 0;
}
// 创建一个空链表
Node * createList(){
    // 1.创建一个空节点
    // 注意点: malloc有可能分配失败
    Node *head = (Node *)malloc(sizeof(Node));
    if(head == NULL){
        exit(-1); // 直接退出程序
    }
    head->next = NULL;

    return head;
}


